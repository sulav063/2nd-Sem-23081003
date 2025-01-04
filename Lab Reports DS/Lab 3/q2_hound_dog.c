/*Use a truth table to test the validity of the following argument using truth table.
If you are a hound dog, then you howl at the moon.
You don't howl at the moon.
Therefore, you aren't a hound dog.*/
// Q.no.2
#include <stdio.h>

int logicaland(int x, int y)
{
    int result = x && y;
    return result;
}

int logicalor(int x, int y)
{
    int result = x || y;
    return result;
}

int cond(int x, int y)
{
    if (y || !x)
    {
        int result = 1;
        return result;
    }
    else
    {
        int result = 0;
        return result;
    }
}

int bicond(int x, int y)
{
    if (x == y)
    {
        int result = 1;
        return result;
    }
    else
    {
        int result = 0;
        return result;
    }
}

int main()
{
	int i;
    int p[4] = {1, 1, 0, 0};
    int q[4] = {1, 0, 1, 0};
    int x1[4], x[4], y[4];
    int c = 0;
    printf("p\tq\t!p\t!q\tp->q\t(p->q)^!q\t(p->q)^!q -> !p");
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        printf("%d\t", p[i]);
        printf("%d\t", q[i]);
        printf("%d\t", !p[i]);
        printf("%d\t", !q[i]);
        x1[i] = cond(p[i], q[i]);
        printf("%d\t", x1[i]);
        x[i] = logicaland(x1[i], !q[i]);
        printf("%d\t\t", x[i]);
        y[i] = cond(x[i], !p[i]);
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
