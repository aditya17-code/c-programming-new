//write a program to print 
*
**
***
****
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows to prin
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

