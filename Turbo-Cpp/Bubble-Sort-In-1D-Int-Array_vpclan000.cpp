//Program Objective: Bubble Sort In 1-D Integer Array

#include<iostream.h>
#include<conio.h>

voidbsort(intar[], int size)
{
inttemp,i,j;
cout<<"\n\nSorted array: ";
for(i=0;i<size;i++)
for(j=0;j<(size-1)-i;j++)
{
if(ar[j]>ar[j+1])
{
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
}

void main()
{
intar[50];
int size;
clrscr();
cout<<"\nBubble Sort in 1-d integer array: ";
cout<<"\n\nEnter size of array(max 50): ";
cin>>size;
if(size<50)
{
cout<<"\n\nEnter elements:\n";
for(int i=0;i<size;i++)
{
cout<<"\t\t"<<(i+1)<<". ";
cin>>ar[i];
}
bsort(ar,size);
for(i=0;i<size;i++)
{
cout<<"\n\t\t"<<(i+1)<<". "<<ar[i];
}
getch();
}
else
{
cout<<"\n\nWrong array size entered. ";
getch();
}
}
