#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int i, j, num=1;
for(i=0; i<5; i++) {
for(j=5; j>i; j--
)
{
cout<<num<<" ";
num++; }
cout<<"
\n";
num=1; }
getch(); }
