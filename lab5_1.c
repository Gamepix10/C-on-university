#include <stdio.h>
#include <math.h>

int sum1( int a, int b);
int sum2( int a, int b);

int main()
{
  int x,y;
  printf(" Vvedite znachenie x: ");
  scanf("%u",&x);
  printf(" Vvedite znachenie y: ");
  scanf("%u",&y);
  printf(" Cycle= %u ", sum1( x , y ));
  printf(" Recursia= %u ", sum2( x , y ));
  return 0;
}
int sum1(int a, int b) {
    for( int i=0;i<a;i++)
    b++;
    return b;
}

int sum2 ( int a, int b) {
   return ( b > 0 ) ? sum2(++a, --b) : ( b < 0 ) ? sum2(--a, ++b) : a;
}
