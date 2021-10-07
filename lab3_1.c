#include <stdio.h>
#include <math.h>
int main()
{
  double h,x,y;
  printf(" Vvedite znachenie shaga: ");
  scanf("%lf", &h );
  printf("Vvedite nachalnoe znachenie x:");
  scanf("%lf",&x);
  printf(" x \t \t f(x) ");
  printf(" \n--------------------- ");

    for ( x; x <= 1.0; x=x+ h )
    {
      if (x >= -2 && x <= 0)
      {
        printf(" \n %lf ", x);
        y = pow(x, 2) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
        printf(" \t %lf ", y);
        x=floorf(x*100000000)/100000000;
      }
      if ( x > 0 && x <= 1 )
      {
        printf(" \n %lf ", x);
        y = sqrt(x) * cos(2*x);
        printf(" \t %lf ", y);
        x=floorf(x*100000000)/100000000;
      }

    }

  return(0);

}
