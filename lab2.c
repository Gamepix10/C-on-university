#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf(" Enter x { 1.0 <= x >= 10.0 } -> ");
    scanf("%lf",&x);
    if (1.0 <= x && x <= 10.0)
    {
        double y = asin(log10 (x));
        double z = (y + fabs(y)) * sqrt(y *(sin(M_PI * y) * sin(M_PI * y)));
        printf(" y(x) = %lf \n z(y) = %lf \n ", y, z);
    }
    else
        printf(" x value is incorrect! \n ");
    return 0;
 }
