#include <stdio.h>
#include <math.h>

int sum1( int a, int b);
int sum2( int a, int b);

int main()
{
  int x,y;
  printf(" Vvedite znachenie x: ");
  scanf(" %u ", &x);
  printf(" Vvedite znachenie y: ");
  scanf(" %u ", &y);
  printf(" Cycle= %u ", sum1( x , y ));
  //printf(" Recursia= %u ", sum2( x , y ));
  return 0;
}

int sum1( int a, int b) {
    for( int i=0;i<fabs(a);i++)
    {
      if(b>0)
      {
        if (a>0)
          b++;
        else if (a<0)
          b--;
        else
          b=b;
      }
      if(b<0)
      {
        if(a>0)
          ++b;
        else if(a<0)
          --b;
        else
          b=b;
      }
    }

    return b;
}
//int sum2( int a, int b) {
  //  return ( b > 0 ) ? sum2(++a, --b) : ( b < 0 ) ? sum2(--a, ++b) : a;
//}
