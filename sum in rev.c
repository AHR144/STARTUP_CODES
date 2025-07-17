#include<stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Numbers in reverse order:\n");
    for(int i = n; i >= 1; i--) {
        printf("%d\n", i);
        sum += i;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}