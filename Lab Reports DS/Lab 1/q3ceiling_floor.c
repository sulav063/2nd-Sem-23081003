/*Write a program that takes a real number and produces is ceiling and floor
integers as output.*/
#include <stdio.h>
#include <math.h>

int main() {
    double realNumber;
    printf("Enter a real number: ");
    scanf("%lf", &realNumber);

    // Calculate ceiling and floor using ceil() and floor() functions
    int ceiling = (int)ceil(realNumber);
    int floorValue = (int)floor(realNumber);

    printf("Ceiling: %d\n", ceiling);
    printf("Floor: %d\n", floorValue);

    return 0;
}
