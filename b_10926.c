#include <stdio.h>

int main(void) {
    char name[50];
    scanf("%s", name);
    printf("%s?\?!", name); // trigraph 안되게 \넣기
    return 0;
}