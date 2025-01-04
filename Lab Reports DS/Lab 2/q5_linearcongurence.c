#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers using Euclidean algorithm.
int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

// Function to find a solution to the linear congruence ax ≡ b (mod m).
int findCongruenceSolution(int a, int b, int m, int *x) {
    int x0, y0;
    int gcd = gcdExtended(a, m, &x0, &y0);

    // If gcd(a, m) doesn't divide b, then there are no solutions.
    if (b % gcd != 0) {
        return 0; // Return 0 to indicate no solution
    }

    // Compute x as the solution to ax ≡ b (mod m).
    *x = (x0 * (b / gcd)) % m;

    return 1; // Return 1 to indicate a solution exists
}

int main() {
    int a, b, m;
    printf("Enter values for a, b, and m (in the format 'a b m'): ");
    scanf("%d %d %d", &a, &b, &m);

    int x;

    if (findCongruenceSolution(a, b, m, &x)) {
        printf("The solution to %d=%d (mod %d) is x = %d\n", a, b, m, x);
    } else {
        printf("No solution exists for the given congruence.\n");
    }

    return 0;
}
