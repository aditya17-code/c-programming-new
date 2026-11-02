//write a c program to print a star pattern in square format
#include <stdio.h>

int main() {
    int side, i, j;
    printf("Enter the side length of the square: ");
    scanf("%d", &side);
    for(i = 0; i < side; i++) {
        for(j = 0; j < side; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

