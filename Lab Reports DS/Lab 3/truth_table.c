/*Generate truth tables for following compound propositions.
a. (p ᴧ ⌐q ᴠ r) → (⌐p ᴠ r)
b. (p ᴧ ⌐q ᴠ r) ↔ (⌐p ᴠ r)*/
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
    bool a[8] = {true, true, true, true, false, false, false, false};
    bool b[8] = {true, true, false, false, true, true, false, false};
    bool c[8] = {true, false, true, false, true, false, true, false};
    bool x1[8], x[8], y[8], result1[8], result2[8];
    printf("p\tq\tr\tp^!q\tp^!qvr\t!pvr\tp^!qvr -> !pvr\tp^!qvr <-> !pvr");
    for (i = 0; i < 8; i++)
    {
        printf("\n");
        printf("%d\t%d\t%d\t", a[i], b[i], c[i]);
        x1[i] = logicaland(a[i], !b[i]);
        printf("%d\t", x1[i]);
        x[i] = logicalor(x1[i], c[i]);
        printf("%d\t", x[i]);
        y[i] = logicalor(!a[i], c[i]);
        printf("%d\t", y[i]);
        result1[i] = cond(x[i], y[i]);
        printf("%d\t\t", result1[i]);
        result2[i] = bicond(x[i], y[i]);
        printf("%d\t", result2[i]);
    }
    return 0;
}
