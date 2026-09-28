//write a c program  0,1,2,,3,5,8... upto n terms to display the given sequence 
#include <stdio.h>
int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%lld ", nextTerm);
    }
    printf("\n");
    return 0;
}


