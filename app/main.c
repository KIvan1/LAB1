#include <stdio.h>

#include "SolveEquation.h"

int main()
{
    double x1 = 0, x2 = 0;
    int p = SolveEq(1, 2, 3, &x1, &x2);
    if (!p)
        printf("%f, %f\n", x1, x2);
    else if (p == 1)
        printf("No roots\n");
    else
        printf("%f\n", x1);
}