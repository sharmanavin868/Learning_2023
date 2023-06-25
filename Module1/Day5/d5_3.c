#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time *start, struct Time *end) {
    struct Time diff;

    int startTimeInSeconds = start->hours * 3600 + start->minutes * 60 + start->seconds;
    int endTimeInSeconds = end->hours * 3600 + end->minutes * 60 + end->seconds;

    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    diff.hours = differenceInSeconds / 3600;
    diff.minutes = (differenceInSeconds % 3600) / 60;
    diff.seconds = (differenceInSeconds % 3600) % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    difference = calculateTimeDifference(&startTime, &endTime);

    printf("Time difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
