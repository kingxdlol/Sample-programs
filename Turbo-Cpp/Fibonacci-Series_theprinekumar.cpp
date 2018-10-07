//Program Objective: Print Fibonacci Series

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=0, b=1, c=0, limit;
cout<<"Upto How many term ? ";
cin>>limit;
cout<<"Fibonacci Series : "<<a<<" "<<b<<" ";  
c=a+b;
limit=limit-2;
while(limit)
{
cout<<c<<" ";
a=b;
b=c;
c=a+b;
limit--;
}
getch();
}
