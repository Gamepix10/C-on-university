#include <stdio.h>
#include <math.h>
int main()
{
  double i, h, x = -2, y, k = 0;
  int a = -2;
  int b = 1;
  printf(" Vvedite znachenie shaga: ");
  scanf("%lf", &h );
  i = (fabs(a) + fabs(b)) / h;
  printf(" x \t \t f(x) ");
  printf(" \n--------------------- ");

    for ( k; k <= i; k++ )
    {
      if (k <= (2 * i) / 3)
      {
        printf(" \n %lf ", x);
        y = pow(x, 2) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
        printf(" \t %lf ", y);

      }
      else
      {
        printf(" \n %lf ", x);
        y = sqrt(x) * cos(2*x);
        printf(" \t %lf ", y);
      }
    x = x + h;

    }

  return(0);

}
