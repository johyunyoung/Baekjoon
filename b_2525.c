#include <stdio.h>

int main(void) {
    int currentHour = 0;
    int currentMin = 0;
    int addMin = 0;

    scanf(" %d %d", &currentHour, &currentMin);
    scanf(" %d", &addMin);

    currentHour += addMin / 60;

    currentMin += addMin % 60;
    if (currentMin >= 60) {
        currentMin %= 60;
        currentHour++;
    }
    if (currentHour >= 24) {
        currentHour %= 24;
    }

    printf("%d %d", currentHour, currentMin);

    return 0;
}