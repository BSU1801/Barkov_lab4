#include <math.h> 
void f(const double* x, double* result)
{
    *result = sqrt(pow((*x) * 3 + 2, 2) - 24 * (*x)) / (3 * sqrt((*x)) - (2 / sqrt((*x))));
}