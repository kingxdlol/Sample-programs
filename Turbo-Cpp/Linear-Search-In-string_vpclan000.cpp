//Program Objective: Linear Search In string

#include<iostream.h>
#include<conio.h>
#define max 5
void Lsearch(char ar[max][],char  item[])
{
int pos=0,flag=0;
for(int i=0;i<size;i++)
{if(strcmp(item,ar[i])==0)
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
char  ar[max][20],a[20]; 
for(int i=0;i<max;i++)
gets(ar[i]); 
cout<<”\n Enter word to be searched”;
gets(a);
Lsearch(ar,a);
getch();
}
