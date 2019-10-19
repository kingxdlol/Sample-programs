#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int i, j;
char ch='A';
for(i=0; i<5; i++){
for(j=0; j<=i; j++){
cout<<ch<<" "; }
cout<<"
\n";
ch++; }
getch(); }
