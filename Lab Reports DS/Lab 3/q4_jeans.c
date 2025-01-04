/*Test the validity of the following argument using truth table.
Premise: If I go to the mall, I will buy new jeans
Premise: If I buy new jeans, I will buy a shirt to go with it.
Conclusion: If I go to the mall, I will buy a shirt.*/
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
    int p[8] = {1, 1, 1, 1, 0, 0, 0, 0};
    int q[8] = {1, 1, 0, 0, 1, 1, 0, 0};
    int r[8] = {1, 0, 1, 0, 1, 0, 1, 0};
    int c = 0;

    int x1[8], x2[8], x[8], y[8], result[8];

    printf("p\tq\tr\tp->q\tq->r\t(p->q)^(q->r)\tp->r\t(p->q)^(q->r)->(p->r)");

    for (i = 0; i < 8; i++)
    {
        printf("\n");

        printf("%d\t", p[i]);
        printf("%d\t", q[i]);
        printf("%d\t", r[i]);

        x1[i] = cond(p[i], q[i]);
        printf("%d\t", x1[i]);

        x2[i] = cond(q[i], r[i]);
        printf("%d\t", x2[i]);

        x[i] = logicaland(x1[i], x2[i]);
        printf("%d\t\t", x[i]);

        y[i] = cond(p[i], r[i]);
        printf("%d\t", y[i]);

        result[i] = cond(x[i], y[i]);
        printf("%d\t\t", result[i]);

        if (result[i] == 0)
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
