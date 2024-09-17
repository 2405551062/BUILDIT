#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(long long n) {
    if (n <= 1)
        return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    long long n;

    scanf("%lld", &n);

    if (isPrime(n)) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}