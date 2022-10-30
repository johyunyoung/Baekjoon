#include <stdio.h>

int main(void) {
    int hour, minute;
    hour = 0;
    minute = 0;
    scanf("%d %d", &hour, &minute);
    if (minute < 45) {
        if (hour == 0) {
            hour = 23;
        } else {
            hour--;
        }
        minute += 15;
    } else {
        minute -= 45;
    }
    printf("%d %d", hour, minute);
    return 0;
}