#include <stdio.h>

int main(void) {
    int tot = 0;
    int n = 0;
    int price = 0;
    int count = 0;
    int sum = 0;
    scanf(" %d", &tot);
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d %d", &price, &count);
        sum += price * count;
    }
    if (sum == tot) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}