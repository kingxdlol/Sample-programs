#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i, j, num=1;
for(i=0; i<5; i++)
{
num=1;
for(j=0; j<=i; j++)
{
cout<<num<<" ";
num++;
}
cout<<"\n";
}
getch();
}
