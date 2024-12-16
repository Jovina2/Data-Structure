#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int sp=-1;
void main()
{
int opt,data;
void push(int);
int pop();
void display();
do
{
printf("\n1.Push \n");
printf("2.Pop \n");
printf("3.Display \n");
printf("4.Exit \n");
printf("your choice ");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("data :");
scanf("%d",&data);
push(data);
break;
case 2:data=pop();
printf("popped item=%d",data);
break;
case 3:display();
break;
case 4:exit(0);
}
}
while(1);
}
void push(int data)
{
if(sp==size-1)
printf("Full stack");
else
stack[++sp]=data;
}
int pop()
{
if(sp==-1)
printf("Empty stack");
else
return stack[sp--];
}
void display()
{
int tsp=sp;
printf("stack contents : \n");
while(tsp!=-1)
{
printf("%d ," ,stack[tsp]);
tsp--;
}
}


