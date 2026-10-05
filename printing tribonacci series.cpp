//write a c program to print the tribonacci series
#include <stdio.h>
int main() {
    int n, i;
    long long t1 = 0, t2 = 0, t3 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Tribonacci Series: ");
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }
        if (i == 3) {
            printf("%lld ", t3);
            continue;
        }
        nextTerm = t1 + t2 + t3;
        t1 = t2;
        t2 = t3;
        t3 = nextTerm;
        printf("%lld ", nextTerm);
    }
    printf("\n");
    return 0;
}

