//Program Objective: Linear Search In 1-D Integer Array

#include<iostream.h>
#include<conio.h>
voidlsearch(intar[], int size, int item)
{
char flag='n';
intpos;
for(int i=0;i<size;i++)
if(ar[i]==item)
{
flag='y';
pos=i+1;
break;
}
if(flag=='y')
cout<<"\n\nElement found at "<<pos;
cout<<" position!!";
else
cout<<"\n\nElement not found!!";
}
