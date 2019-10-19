#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int i, j, k, decr=8, count=64, temp;
char ch='A';
for(i=0; i<5; i++) {
for(k=0; k<decr; k++) {
cout<<" "; }
for(j=0; j<i+1; j++) {
count++; }
ch = count;
temp = ch;
for(j=0; j<i+1; j++) {
cout<<ch--<<" "; }
cout<<"
\n";
ch = temp;
decr=decr
-2;
}
getch(); }
