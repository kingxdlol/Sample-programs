//Program Objective: Selection Sort In string

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
const int size=7;
void selection_string(char [][size]);
void main()
{
clrscr();
char str[][size]={"ganesh","akash","saurav","rakesh","bablu","vikas"};
selection_string(str);
getch();
}
void selection_string(char a[][size])
{
char str[size]=" ",temp[size]=" ";
int pos=0;
cout<<"\nSelection sort on String\n"<<endl;
for(int i=0;i<size-1;i++)
{
pos=i;
for(int j=i+1;j<size;j++)
{
if((strcmp(a[pos],a[j])>0))
pos=j;
}
strcpy(temp,a[i]);
strcpy(a[i],a[pos]);
strcpy(a[pos],temp);
}
for(i=0;i<size;i++)
{
puts(a[i]);
cout<<endl;
}
}
