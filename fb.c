#include <stdio.h>
#define DIV3 a%3 ==0
int main()
{

int a = 0;
printf("Enter the Desired Number\n");

scanf("%d",&a);

if((DIV3)&&(a%5==0))
 {
  printf("FizzBuzz \n");
 }
else if((a%3==0)&&(a%5!=0))
 {
  printf("Fizz \n");
 }
else if((a%5==0)&&(a%3!=0))
printf("Buzz \n");
else
printf("%d",a);

return 0;
}


