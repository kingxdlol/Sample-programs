//Program Objective: Selection Sort In 1-D Array

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#define max 10

voidselsort(intar[max])
{
inti,j,pos,temp;
for(i=0;i<max;i++)
{
pos=i;
for(j=i+1;j<max;j++)
{
if(ar[j]<ar[pos])
pos=j;
}
temp=ar[pos];
ar[pos]=ar[i];
ar[i]=temp;
}
}

void main()
{
intar[max],i;
clrscr();
cout<<"\n\nSelection Sort in 1-d integer array: ";
cout<<"\n\nEnter 10 elements:\n";
for(i=0;i<max;i++)
{
cout<<"\t\t"<<(i+1)<<". ";
cin>>ar[i];
}
cout<<"\n\nArray before sorting: ";
for(i=0;i<max;i++)
cout<<" "<<ar[i];
selsort(ar);
cout<<"\n\nArray after sorting: ";
for(i=0;i<max;i++)
cout<<" "<<ar[i];
getch();
}
