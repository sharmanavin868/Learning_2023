#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char timeString[9];
    printf("Enter the time (hh:mm:ss): ");
    scanf("%8s", timeString);

    char *token;
    token = strtok(timeString, ":");
    unsigned long hours = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    unsigned long minutes = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    unsigned long seconds = strtoul(token, NULL, 10);

    unsigned long totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}