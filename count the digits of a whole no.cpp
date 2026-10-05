#include <stdio.h>

int main() {
    unsigned long long num;
    int count = 0;
    printf("Enter a whole number: ");
    if (scanf("%llu", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    do {
        count++;
        num /= 10; 
    } while (num > 0);
    printf("Total number of digits: %d\n", count);

    return 0;
}

