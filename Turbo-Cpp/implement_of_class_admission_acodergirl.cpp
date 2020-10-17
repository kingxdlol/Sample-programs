#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
class admission
{
char name[20];
int ad_no;
int cls;
float fees;
public:
void read_data()
{
cout<<"\nName: ";gets(name);
cout<<"\nAdmission No: ";cin>>ad_no;
cout<<"\nClass: ";cin>>cls;
cout<<"\nFees: ";cin>>fees;
}
void display()
{
cout<<"\nName: ";puts(name);
cout<<"\nAdmission No: "<<ad_no;
cout<<"\nClass: "<<cls;
cout<<"\nFees: "<<fees;
}
void draw_nos();
}ar[5];
void main()
{
clrscr();
admission t;
for(int i=0;i<5;i++)
ar[i].read_data();
for(i=0;i<5;i++)
ar[i].display();
getch();
}
