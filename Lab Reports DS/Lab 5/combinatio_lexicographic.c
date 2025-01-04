/*Write a program to generate the next r combination in lexicographic order.*/
#include <stdio.h>

void nextCombination(int a[], int r, int n)
{
    int i = r - 1;
    while (i >= 0 && a[i] == n - r + i + 1)
    {
        i--;
    }
    if (i >= 0)
    {
        a[i]++;
        for (i; i + 1 < r; i++)
        {
            a[i + 1] = a[i] + 1;
        }
    }
}

int main()
{
    int r, n,i;

    printf("Enter the value of r: ");
    scanf("%d", &r);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int combination[r];

    printf("Enter the combination elements: ");
    for (i = 0; i < r; i++)
    {
        scanf("%d", &combination[i]);
    }

    nextCombination(combination, r, n);

    printf("The next combination is: ");
    for (i = 0; i < r; i++)
    {
        printf("%d ", combination[i]);
    }

    return 0;
}

