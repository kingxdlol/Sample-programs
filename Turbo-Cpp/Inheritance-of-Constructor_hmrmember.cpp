//Program Objective: Inheritace of Constructor

#include<iostream.h>
#include<conio.h>
class base1
{
protected:
int a;
public:
base1(int x){a=x;
cout<<"constructing base1\n";
}
~base1(){cout<<"destructing base1\n";}
};
class base2
{
protected:
int b;
public:
base2(int y)
{
b=y;
cout<<"constructing base2\n";
}
~base2()
{
cout<<"destructing base2\n";
}
};
class derived:public base1,public base2
{
protected:
int c;
public:
derived(int i,int j,int k):base2(i),base1(j)
{
c=k;
cout<<"\nconstructing derived.\n";
}
~derived()
{
cout<<"destructing derived:\n";
}
void show()
{
cout<<"1."<<a<<"\t2."<<b<<"\t3."<<c<<"\n";
}
};
void main()
{
clrscr();
derived ob(14,15,16);
ob.show();
getch();
}
