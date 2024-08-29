
/*****************Program to Sort an Array using pointers *******************/
#include <stdio.h>
#include <stdlib.h>
int  sort_array(int *arr, int size);
void display_array(int *arr, int size);
int main()
{
 int Max,i=0,j=0;
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
sort_array(array,Max);
display_array(array,Max);
free(arr_ptr); 
 }
 return 0;
}

int sort_array(int *arr, int size)
{
  int  k=0,temp=0;
for(int i=0;i<size;i++) // scans the entire array
{
 for(k=i+1;k<size;k++) // sorts the array
  {
   if(*(arr+i) > *(arr+k))
	{
		temp = *(arr+i);
		*(arr+i) = *(arr+k);
		*(arr+k) =temp;

	}
  }
}
}

void display_array(int *arr,int size)
{
for(int j=0;j< size;j++)
 {
	printf("A[%d]:%d\n",j,*(arr+j));
 }
}
