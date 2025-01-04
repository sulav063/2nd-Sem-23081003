/*Write a program to check whether a number is prime
or not, with the help of Fermat’s little theorem.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int p, status = 0;
    int i;
    printf("Enter a number to check if it is prime or not : ");
    scanf("%d", &p);
    for ( i = 2; i <= p - 1; i++)
    {
        int aToPowerPMinus1 = (int)pow(i, p - 1);
        if ((aToPowerPMinus1 % p) == 1)
        {
            printf("Fermat's little theorem is true when a=%d\n", i);
        }
        else
        {
            printf("Fermat's little theorem is false when a=%d\n", i);
            status = 1;
        }
    }
    if (status == 1)
    {
        printf("Fermat's little theorem proves that %d is not a prime number\n", p);
    }
    else
    {
        printf("Fermat's little theorem proves that %d may be a prime number\n", p);
    }
    return 0;
}
