/*Write a program to calculate bn mod  m.*/
#include <stdio.h>

int recursion(int b, int n, int a){
    if (n == 0){
        return 1;
    } else if (n % 2 == 0){
        return (recursion(b, n/2, a) * recursion(b, n/2, a)) % a;
    } else {
        return (recursion(b, n/2, a) * recursion(b, n/2, a) * (b % a)) % a;
    }
}

int main(){
    int b, m, n;
    printf("Enter the integer for base: ");
    scanf("%d", &b);
    printf("Enter the integer exponential: ");
    scanf("%d", &n);
    printf("Enter the integer for modulus: ");
    scanf("%d", &m);
    printf("The required recursive algorithm of modular exponential is: %d", recursion(b, n, m));
    return 0;
}
