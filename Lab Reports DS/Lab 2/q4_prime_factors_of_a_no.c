/*Write a program to find prime factors of a number.*/
#include <stdio.h>
int i;
// Function to print prime factors of a number
void primeFactors(int num) {
    while (num % 2 == 0) {
        printf("%d ", 2);
        num /= 2;
    }

    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 2) {
        printf("%d ", num);
    }
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    primeFactors(number);

    printf("\n");

    return 0;
}
