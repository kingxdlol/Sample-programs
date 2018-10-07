//Program Objective: Check Armstrong

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, nu, num=0, rem;
cout<<"Enter any positive number : ";
cin>>n;
nu=n;
while(nu!=0){
rem=nu%10;
num=num + rem*rem*rem;
nu=nu/10;
}
if(num==n){
cout<<"Armstrong Number";
}
else{
cout<<"Not Armstrong Number";
}
getch();
}
