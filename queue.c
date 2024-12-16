#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front,rear;
void main()
{
void insertq(int);
int deleteq();
int searchq(int);
int data,opt,ans,tfront;
do
{
printf("\n 1.Insert \n");
printf("2.Delete \n");
printf("3.Search \n");
printf("4.Exit \n");
printf(" option :");
scanf("%d",&opt);
switch(opt)
{
case 1 :printf("Data :");
scanf("%d",&data);
insertq(data);
break;
case 2 :data=deleteq();
printf("Deleted item %d",data);
break;
case 3 :printf("item Searched :");
scanf("%d",&data);
ans=searchq(data);
if(ans==1)
printf("found \n");
else
printf("Not found \n");
break;
case 4 :exit(0);
}
}
while(1);
}

void insertq(int item)
{
if(rear==SIZE-1)
printf("Queue is full \n");
else
queue[++rear]=item;
}

int deleteq()
{
if(front==rear)
{
printf("Queue is empty \n");
exit(1);
}
else
{
front=(front+1)%SIZE;
return queue[front];
}
}

int searchq(int item)
{
int tfront;
tfront=(front+1)%SIZE;
while(tfront!=rear && queue[tfront]!=item)
tfront=(tfront+1)%SIZE;
if(queue[tfront]==item)
return 1;
else
return 0;
}



