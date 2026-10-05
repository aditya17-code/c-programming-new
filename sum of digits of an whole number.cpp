
//write a c program to find the sum of the digits of an whole number 
#include <stdio.h>
int main() {
    int num, sum = 0, remainder;
    printf("Enter a whole number: ");
    scanf("%d", &num); 
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        remainder = num % 10;   
        sum = sum + remainder;  
        num = num / 10;         
    }
    printf("Sum of the digits: %d\n", sum);
    return 0;
}

