//Program Objective: Check Palindrome
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num, orig, rev=0, rem;
cout<<"Enter a number : ";
cin>>num;
orig=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(orig==rev)
{
cout<<"PALINDROME";
}
else
{
cout<<"Reverse is not equal to original";
}
getch();
}
