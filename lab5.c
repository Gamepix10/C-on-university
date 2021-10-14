#include <stdio.h>
#include <math.h>

unsigned int sum1(unsigned int a, unsigned int b);
unsigned int sum2(unsigned int a, unsigned int b);

int main()
{
  unsigned int x,y;
  printf(" Vvedite znachenie x: ");
  scanf(" %u ", &x);
  printf(" Vvedite znachenie y: ");
  scanf(" %u ", &y);
  printf(" Cycle= %u ", sum1( x , y ));
  printf(" Recursia= %u ", sum2( x , y ));
}

unsigned int sum1(unsigned int a, unsigned int b) {
    for(unsigned int i=0;i<a;i++)
      b++;
    return b;
}

unsigned int sum2(unsigned int a, unsigned int b) {
    return ( b > 0 ) ? sum2(++a, --b) : ( b < 0 ) ? sum2(--a, ++b) : a;
}
