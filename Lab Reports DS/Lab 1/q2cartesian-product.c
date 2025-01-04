/*Write a program that takes two or more sets as input and produces their
Cartesian product as output.*/
#include <stdio.h>
int i,j;
void findCart(int arr1[], int arr2[], int n, int n1) {
    for (i = 0; i < n; i++) {
        for (j = 0; j < n1; j++)
            printf("{%d, %d} ", arr1[i], arr2[j]);
    }
}

int main() {
    int arr1[100], arr2[100]; // Assuming a maximum size of 100 for each array
    int n1, n2;

    printf("Enter the number of elements in the first set: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first set: ");
    for ( i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the number of elements in the second set: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second set: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    findCart(arr1, arr2, n1, n2);

    return 0;
}

