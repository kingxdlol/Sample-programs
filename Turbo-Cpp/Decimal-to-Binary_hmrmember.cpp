//Program Objective: Decimal to Binary

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int decnum, rem, quot;
int binnum[100], i=1, j;
cout<<"Enter any decimal number : ";
cin>>decnum;
quot=decnum;
while(quot!=0)
{
binnum[i++]=quot%2;
quot=quot/2;
}
cout<<"Binary value of "<<decnum<<" :\n";
for(j=i-1; j>0; j--){
cout<<binnum[j];
}

getch();
}
