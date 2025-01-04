#include <stdio.h>
#include <math.h>
#define max 10

int inv(int a, int b)
{
    int s1 = 0, s2 = 1, t1 = 1, t2 = 0;
    int q, r, s, t;
    while (b != 0)
    {
        q = a / b;
        r = a % b;
        s = s2 - (q * s1);
        t = t2 - (q * t1);
        a = b;
        b = r;
        s2 = s1;
        s1 = s;
        t2 = t1;
        t1 = t;
    }
    return s2;
}

int main()
{
    int a[max], m[max], n, mx[max], s[max], M = 1;
    char dec;
    do
    {
        printf("No of equations: ");
        scanf("%d", &n); // Added & symbol and %d to correctly scan n
        printf("Enter values...\n");
        for (int i = 0; i < n; i++)
        {
            printf("Enter a: ");
            scanf("%d", &a[i]); // Added & symbol and %d to correctly scan a[i]
            printf("Enter m: ");
            scanf("%d", &m[i]); // Added & symbol and %d to correctly scan m[i]
        }
        for (int i = 0; i < n; i++)
        {
            M = M * m[i];
        }
        for (int i = 0; i < n; i++)
        {
            mx[i] = M / m[i];
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = inv(mx[i], m[i]);
        }
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            x = x + a[i] * mx[i] * s[i];
            x = x % M;
        }
        printf("The solution of the given system of equations is: %d %d\n", x, M);

        printf("Do you want to continue? Y/N ");
        scanf(" %c", &dec); // Added & symbol and space before %c to correctly scan dec
    } while (dec == 'y' || dec == 'Y');

    return 0;
}