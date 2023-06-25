#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void extractLogEntries(FILE *file) {
    char line[MAX_LINE_LENGTH];
    char *token;
    int i = 0;

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (i >= MAX_ENTRIES) {
            printf("Maximum number of log entries exceeded.\n");
            return;
        }

        token = strtok(line, ",");
        logEntries[i].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[i].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[i].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[i].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[i].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[i].timestamp, token);

        i++;
    }

    numEntries = i;
}

void displayLogEntries() {
    if (numEntries == 0) {
        printf("No log entries found.\n");
        return;
    }

    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNo,
               logEntries[i].sensorNo,
               logEntries[i].temperature,
               logEntries[i].humidity,
               logEntries[i].light,
               logEntries[i].timestamp);
    }
}

int main() {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the data file.\n");
        return 1;
    }
    extractLogEntries(file);
    fclose(file);
    displayLogEntries();
    return 0;
}
