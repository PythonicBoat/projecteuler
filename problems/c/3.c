// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>

int main() {
    long long int n = 600851475143;
    long long int i = 2;
    while (i * i < n) {
        while (n % i == 0) {
            n /= i;
        }
        i++;
    }
    printf("%lld", n);
}