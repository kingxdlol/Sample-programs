#include <iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i, space, rows, k=0;
cout<<"Enter the number of rows : ";
cin>>rows;
for(i=1; i<=rows; i++){
for(space=1; space<=(rows-i); space++){
cout<<" ";
}
Page 21 of 94
while(k!=(2*i
-1)){
cout<<"* ";
k++; }
k=0;
cout<<"
\n";
}
getch(); }
