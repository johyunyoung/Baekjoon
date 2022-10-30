#include <stdio.h>

int main(void) {
    int n = 0;
    int temp = 0;
    int count = 0;
    scanf(" %d", &n);
    temp = (n % 10) * 10 + (((n / 10) + (n % 10)) % 10);
    count++;
    while (temp != n) {
        temp = (temp % 10) * 10 + (((temp / 10) + (temp % 10)) % 10);
        count++;
    }
    printf("%d", count);
    return 0;
}