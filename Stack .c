#include<stdio.h>
#include<stdlib.h>
#define maxsize 4
int push(int s[],int *top) 
{
int ele;
if(*top==(maxsize-1))
}
printf("\n\nstack is overflow");
return;
}
else
{
printf("\n enter a element to be pushed :");
scanf("%d",&ele);
s[++(*top)]=ele;
}
}
int pop(int s[],int *top)
{
int ele;
ele=s[(*top)--];
return ele;
}
void palindrome(int v[],int top)
{
int flag=0,i;
for(i=0;i<(top+1);i++)
{
if(v[i]==pop(v,&top))
flag=1;
else
{
flag=0;
break;
}
}
if(flag)
printf("stack contents are palindrome");
else
printf("stack contents are not palindrome");
}
void display(int s[],int top)
{
int i;
if(top==-1)
{
printf("\n stack is empty");
return;
}
else
{
printf("\n the stack contents are");
for(i=top;i>=0;i--)
{
printf("\n[%d]",s[i]);
printf("\n");
}
}
}
void main()
{
int s[maxsize],ele;
int ch,top=-1;
while(1)
{
printf("\n----------->MAIN MENU<----------\n");
printf("\n1---------->PUSH into the stack<------");
printf("\n2---------->POP from the stack<------");
printf("\n3---------->PALINDROME check using stack<----");
printf("\n4----------> DISPLAY<-----------");
printf("\n5---------->EXIT<------");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push(s,&top);
 display(s,top);
 break;
case 2:if(top==-1)
{
 printf("\n stack under flow");
}
else
{
 ele=pop(s,&top);
 printf("\n popped element is %d",ele);
 
}
break;
case 3:palindrome (s,top);
 
break;
case 4:display(s,top);
 break;
case 5:exit(0);
 
 break;
 
default:printf("\n enter a valid choice");
break;
}
}
}
