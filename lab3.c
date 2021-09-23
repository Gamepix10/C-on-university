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

  
    do {
      printf(" \n %lf ", x);
      y = pow(x, 2) * sin( sqrt(pow (x, 1.0 / 3)) - 3);
      printf(" \t %lf ", y);
      x = x + h;
    }while(x >= -2.0 && x <= 0.0);



    do{
      printf(" \n %lf ", x);
      y = sqrt(x) * cos(2*x);
      printf(" \t %lf ", y);
      x = x + h;
    }while( x > 0.0 && x <= 1.0 );


  return 0;
}
