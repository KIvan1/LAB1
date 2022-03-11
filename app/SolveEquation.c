#include <stdio.h>
# include <math.h>
#include <stdlib.h>
#include "SolveEquation.h"

int SolveEq(double a, double b, double c, double* x1, double* x2)
{
    if (a == 0 && b == 0)
    {
        return 1;
    }
    else if (a == 0)
    {
        *x1 = SolveL(b, c);
        return 2;
    }
    else
    {
        double D = pow(b, 2) - 4 * a * c;
        if (D > 0)
        {
            *x1 = FindFR(D, a, b);
            *x2 = FindSR(D, a, b);
            return 0;
        }
        else if (D == 0)
        {
            *x1 = Solve1R(a, b);
            return 2;
        }
        else
        {
            return 1;
        }
    }
}

double SolveL(double b, double c)
{
    return -c / b;
}

double FindFR(double D, double a, double b)
{
     return (-b + sqrt(D)) / (2 * a);
}

double FindSR(double D, double a, double b)
{
    return (-b - sqrt(D)) / (2 * a);
}

double Solve1R(double a, double b)
{
    return -b / (2 * a);
}
