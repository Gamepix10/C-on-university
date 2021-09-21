#include <stdio.h>
#include <math.h>
int main()
{
  double h,x,y;
  printf(" Vvedite znachenie shaga: ");
  scanf("%lf", &h );
  printf("Vvedite nachalnoe znachenie x:");
  scanf("%lf",&x);
  printf(" x                f(x) ");
  printf(" --------------------- ");
  do {
    printf(" \n %lf ", x);
    y = pow(x, 2) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
    printf(" \n %lf ", y);
    x=+k;
  }while(x >= -2 && x <= 0)

  do{
    printf(" \n %lf ", x);
    y = sqrt(x) * cos(2*x);
    printf(" \n %lf ", y);
    x=+k;
  }while( x > 0 && x <= 1 );

  return 0;
}
