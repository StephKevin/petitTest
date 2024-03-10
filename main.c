#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, b, c;
    a = 0;
    for(i=1; i<=10; i++)
    {
      a=a*10+i;
      b=i+1;
      c=a*9+b;
      printf("%d . 9 + %d = %d\n",a,b,c);
    }
    return 0;
}
