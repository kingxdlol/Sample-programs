//Program Objective: Insertion Sort  In 1-D Array

#include<iostream.h>
#include<conio.h>

voidinssort(intar[max])
{
ar[0]=INT_MIN;
inti,j,temp;
for(i=1;i<max;i++)
{
temp=ar[i];
j=i-1;
while(temp<ar[j])
{
ar[j+1]=ar[j];
j--;
}
ar[j+1]=temp;
}
}

void main()
{
intar[max],i;
clrscr();
cout<<"\nInsertion Sort in 1-d integer array: ";
cout<<"\n\nEnter 10 elements:\n";
for(i=1;i<max;i++)
{
cout<<"\t\t"<<i<<". ";
cin>>ar[i];
}
cout<<"\n\nArray before sorting: ";
for(i=1;i<max;i++)
cout<<" "<<ar[i];
inssort(ar);
cout<<"\n\nArray after sorting: ";
for(i=1;i<max;i++)
cout<<" "<<ar[i];
getch();
}
