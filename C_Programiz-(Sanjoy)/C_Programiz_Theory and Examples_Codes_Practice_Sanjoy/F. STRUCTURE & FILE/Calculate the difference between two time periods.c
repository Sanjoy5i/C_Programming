/// Calculate the difference between two time periods
/// C Program to Calculate Difference Between Two Time Periods
/// Calculate Difference Between Two Time Periods


//#include <stdio.h>
//
//struct TIME {
//    int seconds;
//    int minutes;
//    int hours;
//};
//void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
//int main() {
//    struct TIME startTime, stopTime, diff;
//    printf("Enter start time: \n");
//    printf("Enter hours, minutes and seconds: ");
//    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
//    printf("Enter stop time: \n");
//    printf("Enter hours, minutes and seconds: ");
//    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
//    // Difference between the start and stop time period.
//    differenceBetweenTimePeriod(startTime, stopTime, &diff);
//    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
//    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
//    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
//    return 0;
//}
//void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) {
//    if (stop.seconds > start.seconds) {
//        --start.minutes;
//        start.seconds += 60;
//    }
//    diff->seconds = start.seconds - stop.seconds;
//    if (stop.minutes > start.minutes) {
//        --start.hours;
//        start.minutes += 60;
//    }
//    diff->minutes = start.minutes - stop.minutes;
//    diff->hours = start.hours - stop.hours;
//}


/// Practice...

#include<stdio.h>

struct TIME{
    int seconds;
    int minutes;
    int hours;
};

int main(){
    struct TIME startTime,stopTime,diff;

    printf("Enter start time : \n");
    printf("Enter hours, minutes and seconds :");
    scanf("%d%d%d",&startTime.hours,&startTime.minutes,&startTime.seconds);

    printf("Enter stop time : \n");
    printf("Enter hours, minutes and seconds :");
    scanf("%d%d%d",&stopTime.hours,&stopTime.minutes,&stopTime.seconds);



    // Difference between the start and stop time period.
    differenceBetweenTimePeriod(startTime,stopTime,&diff);

    printf("\nTime Difference : %d:%d:%d-",startTime.hours,startTime.minutes,startTime.seconds);
    printf("%d:%d:%d",stopTime.hours,stopTime.minutes,stopTime.seconds);
    printf("= %d:%d:%d\n",diff.hours,diff.minutes,diff.seconds);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop,struct TIME *diff){
    if(stop.seconds>start.seconds){
        --start.minutes;
        start.seconds = start.seconds+60;
    }
    diff->seconds=start.minutes-stop.minutes;

    if(stop.minutes>start.minutes){
        --start.hours;
        start.minutes=start.minutes+60;
    }
    diff->minutes=start.minutes-stop.minutes;
    diff->hours=start.hours-stop.hours;
}