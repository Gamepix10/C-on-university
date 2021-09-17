#include <stdio.h>
#include <math.h>
float sravn(float a, float b);
float sravn2(float a, float b);
int main()
{
    float e1, e2, e3, n1, n2, n3, minparam, sum, min;
    printf(" Enter e1 -> ");
    scanf("%f", &e1);
    printf(" Enter e2 -> ");
    scanf("%f", &e2);
    printf(" Enter e3 -> ");
    scanf("%f", &e3);

    minparam = sravn(e1, sravn(e2, e3));

    if (minparam == e1)
        n1 = 1;
    if (minparam == e2)
        n2 = 2;
    if (minparam == e3)
        n3 = 3;

    sum = e1 + e2 + e3;
    min = sravn2(n1, sravn2(n2, n3));

    if (sum > 0)
        printf("%f",min / sum);
    else
        printf("%f",sum / min);

    return 0;

}
float sravn(float a,float b)
{
    if (a > b)
        return b;
    else
        return a;
}
float sravn2(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}
