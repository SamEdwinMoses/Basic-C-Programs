#include <stdio.h>

int main()
{
 unsigned int a = 15,b = 3,c=0;
c = a & (a-b);
 printf("%u %u \n",c,a|b);
return 0;
}
