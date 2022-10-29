#include <stdio.h>

int main(void) {
    int king = 0;
    int queen = 0;
    int rook = 0;
    int bishop = 0;
    int knight = 0;
    int pawn = 0;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    printf("%d %d %d %d %d %d", 1 - king, 1 - queen, 2 - rook, 2 - bishop,
           2 - knight, 8 - pawn);
    return 0;
}