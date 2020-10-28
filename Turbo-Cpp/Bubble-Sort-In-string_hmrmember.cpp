//Program Objective: Bubble Sort In string

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size 5
void bubble_string(char str[size][20]);
void main()
{
clrscr();
char str[size][20];
int j,i;
cout<<"Enter  Value for string :\n";
for(i=0;i<size;i++)
cin>>str[i];
bubble_int(str);
cout<<”\n displaying sorted string”;
for(x=0;x<size;x++)
{
cout<<str[x]<<"_";
}
getch();
}
void bubble_string(char str[size][20])
{
Char temp[20];
int i,j;
for(i=0;i<size;i++)
{
for(j=0;j<size-1-i;j++)
{
If(strcmp(str[j],str[j+1])>0)
{
strcpy(temp,str[j]);
strcpy(str[j],str[j+1]);
strcpy(str[j+1],temp);
}
}
}
}
