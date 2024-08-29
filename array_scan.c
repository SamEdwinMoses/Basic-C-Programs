/******** Program to search nth of an array **********/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
int FindElement(int *arr,int size,int element);
int main()
{
 int  Size=0, i=0,j=0,Key=0, UArray[MAXSIZE];
  printf("Enter the Capacity of Array \n");
  scanf("%d",&Size);
  printf("Enter the Array Elements \n");
 for(i =0; i<Size;i++)
  {
   scanf("%d",(UArray+i));
  }
 printf("Enter Element for scanning \n");
 scanf("%d",&Key);
 int n = FindElement(UArray,Size,Key);

(n==-1)?printf("Element is not found \n"):printf("Element is found in %d position \n",n);

    return 0;
}

int FindElement (int *arr,int size, int element)
{

 for (int j=0;j<size;j++)
  {
   if (*(arr+j)== element)
	return j;
  }
return -1;
}
