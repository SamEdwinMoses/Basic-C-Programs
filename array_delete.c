/******** Program to Delete element in  nth position of an array **********/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
int FindElement(int *arr,int size,int element);
int DelElement (int *arr, int element, int size);
void printarray(int *array, int n);
int main()
{
 int  Size=0, i=0,j=0,Key=0, UArray[MAXSIZE], newelement=0;
  printf("Enter the Capacity of Array \n");
  scanf("%d",&Size);
  printf("Enter the Array Elements \n");
 for(i =0; i<Size;i++)
  {
   scanf("%d",(UArray+i));
  }
printf("Array before Delete \n");
printarray(UArray, Size);
printf("\n Enter the Element to Delete \n");
scanf("%d",&newelement);
int newsize= DelElement(UArray,newelement,Size);
printf("\n Array after Delete \n");
printarray(UArray,newsize);
printf("\n");
    return 0;
}

int DelElement( int *arr, int element, int size)
{
	int pos = FindElement(arr,size,element);
        if(pos ==-1)
        {
          printf("\nElement not Found !!! \n");
          return size;
         }

    for (int i=pos;i<size -1;i++)
    {
        *(arr+i)= *(arr+i+1);
    }
return size -1;
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
 void printarray(int *array, int n)
{
 for (int i=0;i<n;i++)
	printf("%d ",*(array+i));
}
