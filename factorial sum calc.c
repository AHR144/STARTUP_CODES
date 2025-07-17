#include<stdio.h>

int main() {
    int n;
     int factorial;    // just unsigned int now
     int total_sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a number greater than 0.\n");
        return 0;
    }

    printf("\n");
    for(int i = 1; i <= n; i++) {
        factorial = 1;

        for(int j = 1; j <= i; j++) {
            factorial *= j;
        }

        printf("%d!=%d\n", i, factorial);
        total_sum += factorial;
    }

    printf("\nSum of factorials from 1! to %d! = %u\n", n, total_sum);

    return 0;
}
