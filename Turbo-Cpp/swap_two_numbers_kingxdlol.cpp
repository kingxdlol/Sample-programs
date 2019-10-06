#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num1, num2, swap;
cout<<"Enter two number : ";
cout<<"\nFirst Number : ";
cin>>num1;
cout<<"Second Number : ";
cin>>num2;
swap=num1;
num1=num2;
num2=swap;
cout<<"The value of first and second number after swapping is \n";
cout<<"First Number = "<<num1<<"\n"<<"Second Number = "<<num2;
getch();
}
