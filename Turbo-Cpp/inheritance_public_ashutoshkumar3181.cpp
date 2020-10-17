#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee{
private:
char name[25];
long empno;
public: void input(){
cout<<"Enter the employee no and name\n";
cin>>empno;
gets(name);
}
void output(){
cout<<"empno="<<empno<<"name"<<name;
}
protected: float basic;
void getbasic(){
cout<<"\n enter basic salary";
cin>>basic;
}
};
class manager:public employee{
private:
char title[25];
public:
void getdata(){
cout<<"enter the title of department:";
gets(title);
getbasic();
};
void putdata(){
cout<<"\ntitle="<<title;
cout<<"\nbasic="<<basic;
}
};
void main(){
clrscr();
manager o1;
o1.input();
o1.getdata();
o1.output();
o1.putdata();
getch(); }
