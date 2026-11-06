//write a c program to create a triangle
#include <stdio.h>
int main() {
    int rows, i, j, space;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);
    printf("\n--- Right-Angled Triangle ---\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n--- Pyramid Triangle ---\n");
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

