//Program Objective: Selection Sort In character

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
const int size7;
void selectin_char(char []);
void main()
{
clrscr();
char ch[size]={'n','a','v','b','c','h','d'};
selection_char(ch);
getch();
}
void selection_char(char a[])
{
cout<<"\nSelection sort on character\n"<<endl;
int pos=0;
char temp='\0';
for(int i=0;i<size-1;i++)
{
pos=i;
for(int j=i+1;j<size;j++)
{
if(a[pos]>a[j])
pos=j;
}
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
for(i=0;i<size;i++)
cout<<a[i]<<"\t";
}
