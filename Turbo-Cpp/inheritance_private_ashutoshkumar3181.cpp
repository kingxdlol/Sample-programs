#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class Employee {
private:
char name[20];
public:
void getdata(){
cout<<"Enter Name";
gets(name); }
void putdata() {
cout<<"Name :"<<name<<endl;
cout<<"Basic salary:"<<basic<<endl; }
protected:
float basic;
Employee(){basic=0;}
void getbasic() {
cout<<"enter basic";
cin>>basic; }
};
class Manager:private Employee {
private:
char title[20];
public:
void getdata() {
Employee::getdata();
cout<<"enter title:";
gets(title); }
void putdata()
{
Employee::putdata(); }
};
int main() {
clrscr();
Manager m1,m2;
cout<<"manager 1 
\n";
m1.getdata();
cout<<"manager 2 
\n";
m2.getdata();
cout<<" Manager1 Details";
m1.putdata();
cout<<" Manager2 Details";
m2.putdata();
return 0; }
