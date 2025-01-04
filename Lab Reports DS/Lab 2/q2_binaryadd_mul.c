/*Write a program to implement binary integer addition and multiplication.*/
#include <stdio.h>

long int binaryAddition(long int binary1, long int binary2) {
    int i = 0, remainder = 0, sum[20];
    long int result = 0;

    while (binary1 != 0 || binary2 != 0) {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }

    if (remainder != 0)
        sum[i++] = remainder;

    --i;

    while (i >= 0)
        result = result * 10 + sum[i--];

    return result;
}

int main() {
    unsigned long int binary1, binary2;
    int i = 0, remainder = 0, sum[20];
    long int multiply = 0, factor = 1;

    printf("Enter the first binary number: ");
    scanf("%lu", &binary1);
    printf("Enter the second binary number: ");
    scanf("%lu", &binary2);

    // Binary Addition
    long int sumResult = binaryAddition(binary1, binary2);
    printf("The sum of the two binary numbers is: %ld\n", sumResult);

    // Binary Multiplication
    while (binary2 != 0) {
        int digit = binary2 % 10;
        if (digit == 1) {
            binary1 = binary1 * factor;
            multiply = binaryAddition(multiply, binary1);
        } else
            binary1 = binary1 * factor;

        binary2 = binary2 / 10;
        factor = 10;
    }

    printf("The product of the two binary numbers is: %ld", multiply);

    return 0;
}
