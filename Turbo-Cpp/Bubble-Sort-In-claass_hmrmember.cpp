//Program Objective: Bubble Sort In claass

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size 5
class CLASS
{
int id;
char name[20];
public:
void enter()
{ 
cout<<”\n Enter Id”;
cin>>id;
cout<<”\n Enter Name”;
gets(name);
}
Void disp()
{ 
cout<<id<<"_"<<name<<endl;
}
int getid()
{
return id;
}
};
void bubble_CLASS(CLASS str1[size]);
void main()
{
clrscr();
CLASS str1[size];
int j,i;
cout<<"Enter  Value for class:\n";     
for(i=0;i<size;i++)
str1[i].enter();
}
bubble_CLASS(str1);
cout<<”\n displaying sorted class”;
for(int x=0;x<size;x++)
{
str1[x].disp;
}
getch();
}
void bubble_CLASS(CLASS str1[size])
{
int i,j;
CLASS temp;
for(i=0;i<size;i++)     {
for(j=0;j<size-1-i;j++)
{
if(str1[j].getid()>str1[j+1].getid())
{
temp=str1[j];
str1[j]=str1[j+1];
str1[j+1]=temp;
}
}
}
}
