/*Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions.
a. Degree of membership = 1 if age<=20
Degree of membership = (30-age)/10 if age>20 and age<=30
Degree of membership = 0 if age>30*/
#include <stdio.h>
#include <string.h>

double calculateMembership(int age) {
    if (age <= 20) {
        return 1.0;
    } else if (age > 20 && age <= 30) {
        return (30.0 - age) / 10.0;
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

    printf("\nMembership Degrees:\n");
    for (i = 0; i < numPersons; i++) {
        double membership = calculateMembership(ages[i]);
        printf("%s has a membership degree of %.2lf\n", names[i], membership);
    }

    return 0;
}
