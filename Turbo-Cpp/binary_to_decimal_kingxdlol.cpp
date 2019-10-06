#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int binnum, decnum=0, i=1, rem;
cout<<"Enter any binary number : ";
cin>>binnum;
while(binnum!=0){
rem=binnum%10;
decnum=decnum+rem*i;
i=i*2;
binnum=binnum/10;
}
cout<<"Decimal value = "<<decnum;
getch();
Page 19 of 94
}
