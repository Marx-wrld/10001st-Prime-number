#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int count = 0; // counter for the number of prime numbers found
    long int i; // loop variable

    for (i = 2; ; i++) { // infinite loop, will be broken when the 10001st prime number is found
        bool is_prime = true; // flag to check if a number is prime
        int j; // loop variable

        // check if i is prime
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = false;
                break; // number is not prime, break the loop
            }
        }

        if (is_prime) {
            count++; // increment the count of prime numbers found
            if (count == 10001) {
                printf("The 10001st prime number is: %ld\n", i);
                break; // we found the 10001st prime number, so break the loop
            }
        }
    }

    return 0;
}
