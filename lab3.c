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


    do {
      if (k <= (2 * i) / 3)
      {
        y = (x * x) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
        printf(" \n %.5lf ", x);
        printf(" \t %.5lf ", y);
      }
      else
      { y = sqrt(x) * cos(2*x);
        printf(" \n %.5lf ", x);
        printf(" \t %.5lf ", y);
      }
        x = x + h;
        k++;

    }while(k <= i);

  return 0;
}
