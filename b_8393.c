#include <stdio.h>

int main(void) {
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += i + 1;
    }
    printf("%d", sum);
    return 0;
}