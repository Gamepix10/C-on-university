#include <stdio.h>
#include <math.h>
int main()
{
  long double h,x,y;
  printf(" Vvedite znachenie shaga: ");
  scanf("%Lf", &h );
  printf("Vvedite nachalnoe znachenie x:");
  scanf("%Lf",&x);
  printf(" x \t \t f(x) ");
  printf(" \n--------------------- ");


    do {
      if (x >= -2 && x <= 0)
      {
        printf(" \n %.5Lf ", x);
        y = pow(x, 2) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
        printf(" \t %.5Lf ", y);
        x=floorf(x*10000000)/10000000;
        x = x + h;
      }
      if (x > 0 && x <= 1)
      {
        printf(" \n %.5Lf ", x);
        y = sqrt(x) * cos(2*x);
        printf(" \t %.5Lf ", y);
        x=floorf(x*10000000)/10000000;
        x = x + h;
      }
    }while(x >= -2 && x <= 1);

  return 0;
}
