#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
};
void Print(struct Node* n)
{
while(n!=NULL)
{
printf("%d",n->data);
n=n->next;
}
}
int main(void)
{

struct Node* node1=NULL;
struct Node* node2=NULL;
struct Node* node3=NULL;
node1=(struct Node*)malloc(sizeof(struct Node));
node2=(struct Node*)malloc(sizeof(struct Node));
node3=(struct Node*)malloc(sizeof(struct Node));
node1->data=1;//data
node1->next=node2; //address of node2
node2->data=2;
node2->next=node3;
node3->data=3;
node3->next=NULL;
Print(node1);
}
