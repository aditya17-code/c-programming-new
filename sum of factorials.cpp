#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    long long sum = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        fact *= i;  
        sum += fact; 
    }
    printf("The sum of factorials from 1! to %d! is: %lld\n", n, sum);
    return 0;
}
	
