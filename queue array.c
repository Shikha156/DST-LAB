#include<stdio.h>
#define MAX 50
void push();
void pop();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
main()
{
int choice;
while(1)
{
printf("1. insert element to queue \n");
printf("2. delete element from queue \n");
printf("3. display all elements of queue\n");
printf("4. quit\n");
printf("enter your choice\n");
scanf("%d",choice);
switch(choice)
{
 case 1:push();
 break;
 case 2: pop();
 break;
 case 3:display();
 break;
 case 4: exit(1);
 default: printf("wrong choice\n");
 }
 }
}
 void push()
 {
 int item;
 if(rear==MAX-1)
 printf(" queue overflow\n");
 else
 {
 if(front==-1)
 front=0;
 printf("insert the element in queue:");
 scanf("%d",&item);
 rear=rear+1;
 queue_array[rear]=item;
 }
 }
 void pop()
 {
 if(front==-1||front>rear)
 {
 printf("element deleted from uqeue is:%d\n",queue_array[front]);
 front=front+1;
 }
 }
 void display()
 {
 int i;
 if(front ==-1)
 {
 printf("queue is empty\n");
 }
 else
 {
 printf(" queue is :\n");
 for(i=front;i<=rear;i++)
 printf("%d",queue_array[i]);
 printf("\n");
 }
 }


