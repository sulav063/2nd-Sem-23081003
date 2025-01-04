/*Write a program to generate the next permutation in lexicographic order.*/
#include <stdio.h>

void nextPermutation(int arr[], int n)
{
    int j = n - 2;
    while (j >= 0 && arr[j] >= arr[j + 1])
    {
        j--;
    }
    if (j < 0)
    {
        return; // No next permutation, it's already the last one
    }

    int k = n - 1;
    while (arr[j] >= arr[k])
    {
        k--;
    }

    // Swap arr[j] and arr[k]
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;

    int r = n - 1;
    int s = j + 1;
    while (r > s)
    {
        // Swap arr[r] and arr[s]
        temp = arr[r];
        arr[r] = arr[s];
        arr[s] = temp;
        r--;
        s++;
    }
}

int main()
{
    int n,i;

    printf("Enter the size of permutation: ");
    scanf("%d", &n);

    int permutation[n];

    printf("Enter the permutation elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &permutation[i]);
    }

    nextPermutation(permutation, n);

    printf("The next permutation is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", permutation[i]);
    }

    return 0;
}
