//Program Objective: Bubble Sort In structures

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size 5
Struct structure
{
Int id;
Char name[20];
};
void bubble_stru(structure str1[size]);
void main()
{
clrscr();
structure str1[size];
int j,i;
cout<<"Enter  Value for structure:\n";
for(i=0;i<size;i++)
{
cin>>str1[i].id;
gets(str1[i].name);
}
bubble_stru(str1);
cout<<”\n displaying sorted structure”;
for(int x=0;x<size;x++)
{
cout<<str1[x].id<<"_"<<str1[x].name<<endl;
}
getch();
}
void bubble_stru(structure str1[size])
{
int i,j;
structure temp;
for(i=0;i<size;i++)
{
for(j=0;j<size-1-i;j++)
{
if(str1[j].id>str1[j+1].id)
{
temp=str1[j];
str1[j]=str1[j+1];
str1[j+1]=temp;
}
}
}
}
