//Program Objective: Binary Search In 1-D Integer Array

#include<iostream.h>
#include<conio.h>

voidbsearch(intar[], int size, int item)
{
intmid,beg,last,temp,pos;
char flag='n';
beg=0;
last=(size-1);
while(beg<=last)
{
mid=(beg+last)/2;
if(ar[mid]==item)
{
flag='y';
pos=mid+1;
break;
}
else if(item>ar[mid])
beg=mid+1;
else
last=mid-1;
}
if(flag=='y')
cout<<"\n\nElement found at "<<pos;
cout<<" position!!";
else
cout<<"\n\nElement not found!!";
}

void main()
{
intar[50];
intitem,size;
clrscr();
cout<<"\nBinary Search in 1-d integer array: ";
cout<<"\n\nEnter size of array(max 50): ";
cin>>size;
if(size<50)
{
cout<<"\n\nEnter elements:\n";
for(int i=0;i<size;i++)
{
cout<<"\t\t"<<i+1<<". ";
cin>>ar[i];
}
cout<<"\n\nEnter element to be search: ";
cin>>item;
bsearch(ar,size,item);
getch();
}
else
{
cout<<"\n\nWrong array size entered. Program terminating...";
getch();
}
}
