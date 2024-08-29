#include <stdio.h>
#include <stdlib.h>

struct Node* CreateNode(int Newdata);
void PrintList (struct Node* head);
struct Node {
int data;
struct Node* Next;
};

struct Node* CreateNode(int Newdata)
{
 struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = Newdata;
new_node -> Next = NULL;

return new_node;
}
void PrintList(struct Node* head)
{
  struct Node* curr = head;
while(curr !=NULL)
{ 
 printf("%d \n", curr->data);
curr = curr->Next;
}
}

int main()
{
 struct Node* Head = CreateNode(10);
Head->Next  = CreateNode(15);
Head->Next->Next = CreateNode(25);
Head->Next->Next->Next = CreateNode(35);

printf("Original Linked list: \n");
PrintList(Head);
return 0;
}
