/******** Program to insert element in  nth position of a sorted array **********/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
int FindElement(int *arr,int size,int element);
int insertElement (int *arr, int element, int CurrCap, int size);
void printarray(int *array, int n);
void bubblesort( int *arr, int  m);
int main()
{
 int  Size=0, i=0,j=0,Key=0, UArray[MAXSIZE], Capacity=0,newelement=0;
  printf("Enter the Capacity of Array \n");
  scanf("%d",&Size);
  printf("Enter the Array Elements \n");
 for(i =0; i<Size;i++)
  {
   scanf("%d",(UArray+i));
  }
Capacity = sizeof(UArray)/sizeof(UArray[0]);
printf("Array before Insert \n");
printarray(UArray, Size);
printf("\n Enter the Newelement \n");
scanf("%d",&newelement);
int newsize= insertElement(UArray,newelement,Capacity,Size);
bubblesort(UArray,newsize);
printf("\n Array after insert \n");
printarray(UArray,newsize);
printf("\n");
    return 0;
}

int insertElement( int *arr, int element, int CurrCap, int size)
{
	if(size > CurrCap)
	  return size;

	*(arr+size) = element;
    return  size+1;
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

void bubblesort( int* arr,int m)
{
 for(int k =0; k < m ; k++)
  {
    for(int i =k+1;i< m; i++)
      {
        if(*(arr+k)>*(arr+i))
          {
            int temp = *(arr+k);
	       *(arr+k) = *(arr+i);
              *(arr+i) = temp;
           }
       }
   
  }
}
