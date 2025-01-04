/*Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions.
b. Degree of membership = 1 if age<=15
Degree of membership = (35-age)/20 if age>15 and age<=35
Degree of membership = 0 if age>35*/
#include <stdio.h>
#include <string.h>

// Function to calculate the degree of membership based on age
double calculateMembership(int age) {
    if (age <= 15) {
        return 1.0;
    } else if (age > 15 && age <= 35) {
        return (35.0 - age) / 20.0;
    } else {
        return 0.0;
    }
}

int main() {
    const int numPersons = 5;
    char names[numPersons][50];
    int ages[numPersons];
    int i;

    for (i = 0; i < numPersons; i++) {
        printf("Enter name of person %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    printf("\nDegree of Membership:\n");
    for (i = 0; i < numPersons; i++) {
        double membership = calculateMembership(ages[i]);
        printf("%s's degree of membership is: %.2lf\n", names[i], membership);
    }

    return 0;
}
