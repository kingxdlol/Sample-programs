//Program Objective: Selection Sort In structure

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
const int size=6;
struct stur
{
int id;
char name[20];
}
void selection_structure(stur str[size]);
void main()
{clrscr();
stur str[size]={
                      {1,"ganesh"},{5,"akash"},{6,"saurav"},{3,"rakesh"},{2,"bablu"},{4,"vikas"}
                      };
selection_structure(str);
getch();
}
void selection_structure(stur a[size])
{
stur str[size],temp[size];
int pos=0;
cout<<"\nSelection sort on Struture\n"<<endl;
for(int i=0;i<size-1;i++)
{pos=i;
 for(int j=i+1;j<size;j++)
 {if(a[pos].id>a[j].id)         
pos=j;}
temp=a[i]
a[i]=a[pos];
a[pos]=temp;
}
for(i=0;i<size;i++)
{cout<<a[i].id<<”_”<<a[i].name;
cout<<endl;}
}
