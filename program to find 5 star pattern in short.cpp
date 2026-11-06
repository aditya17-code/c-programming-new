//write a c program to print the folllowing pattern
#include <stdio.h>
int main() {
    int n = 4; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); 
    }
    return 0;
}


