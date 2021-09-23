#include <stdio.h>
#include <math.h>
int main()
{
  double h,x,y;
  printf(" Vvedite znachenie shaga: ");
  scanf("%lf", &h );
  printf("Vvedite nachalnoe znachenie x:");
  scanf("%lf",&x);
  printf(" x \t f(x) ");
  printf(" \n--------------------- ");

  if (x >= -2 && x <= 0){
    for ( x; x <= 0.0; x=x+ h ){
      printf(" \n %lf ", x);
      y = pow(x, 2) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
      printf(" \t %lf ", y);
    }
  }

  if ( x > 0 && x <= 1 ){
    for ( x; x <= 1;  x=x+h ){
      printf(" \n %lf ", x);
      y = sqrt(x) * cos(2*x);
      printf(" \t %lf ", y);
    }
  }

  return(0);

}
