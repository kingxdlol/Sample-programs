//Program Objective: Bubble Sort In character

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size 5
void bubble_char(char str2[size]);
void main()
{
clrscr();
char str2[size];
int j,i;
cout<<"Enter  Value for character :\n";
for(i=0;i<size;i++)
cin>>str2[i];
bubble_char(str2);
cout<<”\n displaying sorted character”;
for(x=0;x<size;x++)
{
cout<<str2[x]<<"_";
}
getch();
}
void bubble_char(char str2[size])
{
int i,j;
char temp;
for(i=0;i<size;i++)
{
for(j=0;j<size-1-i;j++)
{
if(str2[j]>str2[j+1])
{
temp=str2[j];
str2[j]=str2[j+1];
str2[j+1]=temp;
}
}
}
}
