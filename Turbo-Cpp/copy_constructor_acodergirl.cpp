#include<iostream.h>
#include<conio.h>
class number{
int x,y,z;
public:
number(){x=y=z=1;}
number(number&k) {
x=k.x;
y=k.y;
z=k.z; }
void show() {
cout<<"
\nx="<<x;
cout<<"
\ny="<<y;
cout<<"
\nz="<<z;
}
};
void main()
{
clrscr();
number n1;
number n2=n1;
number n3(n2);
n1.show();
n2.show();
n3.show();
getch();
}
