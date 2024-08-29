#include <stdio.h>
#include <string.h>
void reverse_string(char* str);
int main()
{

char string[] = "Sam Edwin";
printf ("before reversing the string: %s \n",string);
reverse_string(string);
printf("Post Reversal:%s \n",string);
return 0;
}

void reverse_string(char *str)
{
int length = strlen(str);
 char *start = str;
char *end = str+length-1;

while(start <end)
{
char temp = *start;
*start =*end;
*end =temp;
start++;
end--;
}
}
