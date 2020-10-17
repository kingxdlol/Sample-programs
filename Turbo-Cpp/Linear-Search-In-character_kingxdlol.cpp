//Program Objective: Linear Search In character

#include<iostream.h>
#include<conio.h>
#define max 5
void Lsearch(char ar[],char  item)
{
int pos=0,flag=0;
for(int i=0;i<size;i++)
{if(item==ar[i])
{
pos=i+1;
flag=1; 
break;
}
}
if(flag==1)
cout<<”\n Found at <<pos;
else
cout<<”\n not found”;
}
void main()
{
clrscr();
char  ar[max],a; 
for(int i=0;i<max;i++)
cin>>ar[i]; 
cout<<”\n Enter value to be searched”;
cin>>a;
Lsearch(ar,a);
getch();
}
