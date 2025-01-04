/*Write a program to calculate a^n*/
#include <stdio.h>

double power(double a, int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
        return a * power(a, n - 1);
    else
        return 1 / a * power(a, n + 1);
}

int main()
{
    double a;
    int n;

    // Input base (a) and exponent (n)
    printf("Enter the base (a): ");
    scanf("%lf", &a);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    // Calculate and print the result
    double result = power(a, n);
    printf("%.2f ^ %d = %.2f\n", a, n, result);

    return 0;
}
