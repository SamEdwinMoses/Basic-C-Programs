#include <stdio.h>
#include <stdlib.h>
int main()
{
 int Max=0,i=0,j=0;
 int array[Max],*arr_ptr;
 printf("Enter the No of array elements \n");
 scanf("%d",&Max);
 printf("Max Element: %d \n",Max);
arr_ptr=(int*)malloc(Max*sizeof(int));

if(arr_ptr==NULL)
{
 printf ("No Memory Allocated\n");
} 
else
{
printf("Enter the Array Elements \n");

  for( i =0; i< Max; i++)
    {
      scanf("%d",(array+i));
    }
  for( j=0;j<Max;j++)
    {
       printf("array[%d]:%d \n",j,*(array+j));
    }
 return 0;
}
}
