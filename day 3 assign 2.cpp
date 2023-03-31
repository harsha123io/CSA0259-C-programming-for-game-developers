#include <stdio.h>

// Function to check whether a number is prime or not
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n/2; i++) {
        // Check if i and n-i are prime
        if (isPrime(i) && isPrime(n-i)) {
            printf("%d can be expressed as the sum of %d and %d.\n", n, i, n-i);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }
    return 0;
}

