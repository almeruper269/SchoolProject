// A program to find the sum of all prime numbers less than 100
#include <stdio.h>

int main() {
    int i, j, sum = 0;

    // Loop through all numbers from 2 to 99
    for (i = 2; i <= 99; i++) {
        // Check if the number is prime by dividing it by all numbers between 2 and its square root
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        // If the number is prime, add it to the sum
        if (j * j > i) {
            sum += i;
        }
    }

    printf("The sum of all prime numbers less than 100 is %d\n", sum);

    return 0;
}
