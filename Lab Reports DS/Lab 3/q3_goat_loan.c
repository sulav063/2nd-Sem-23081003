/*Test the validity of the following argument using truth table.
I will buy a new goat or a used Yugo.
If I buy both a new goat and a used Yugo, I will need a loan.
I bought a used Yugo and I don't need a loan.
Therefore, I didn't buy a new goat.*/
#include <stdio.h>
#include <stdbool.h>

bool logicaland(bool x, bool y)
{
    bool result = x && y;
    return result;
}

bool logicalor(bool x, bool y)
{
    bool result = x || y;
    return result;
}

bool cond(bool x, bool y)
{
    if (y || !x)
    {
        bool result = true;
        return result;
    }
    else
    {
        bool result = false;
        return result;
    }
}

bool bicond(bool x, bool y)
{
    if (x == y)
    {
        bool result = true;
        return result;
    }
    else
    {
        bool result = false;
        return result;
    }
}

int main()
{
	int i;
    bool p[8] = {true, true, true, true, false, false, false, false};
    bool q[8] = {true, true, false, false, true, true, false, false};
    bool r[8] = {true, false, true, false, true, false, true, false};
    bool x1[8], x2[8], x3[8], x[8], y[8], result[8];
    int c = 0;
    printf("p\tq\tr\t!p\t!r\tp^q\t(p^q)->r\t q^!r\t(p^q)->r)^(q^!r)\t((p^q)->r)^(q^!r))->!p");

    for (i = 0; i < 8; i++)
    {
        printf("\n");
        printf("%d\t", p[i]);
        printf("%d\t", q[i]);
        printf("%d\t", r[i]);
        printf("%d\t", !p[i]);
        printf("%d\t", !r[i]);
        x1[i] = p[i] && q[i];
        printf("%d\t", x1[i]);
        x2[i] = x1[i] ? r[i] : 0;
        printf("%d\t\t", x2[i]);
        x3[i] = q[i] && !r[i];
        printf("%d\t\t", x3[i]);
        x[i] = x2[i] && x3[i];
        printf("%d\t\t", x[i]);
        y[i] = x[i] ? !p[i] : 0;
        printf("%d\t", y[i]);
        if (y[i] == 0)
        {
            c = c + 1;
        }
    }
    if (c == 0)
    {
        printf("\n\nStatement is valid.");
    }
    else
    {
        printf("\n\nStatement is not valid.");
    }
    return 0;
}
