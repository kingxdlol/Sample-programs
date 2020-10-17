#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class abc{
int a,b;
public :
abc(){cout<<"\n program begins\n";}
~abc(){cout<<"\n object destroyed";}
void get(){
cout<<"enter two integer";
cin>>a>>"">>b;
}
void show(){
cout<<"a="<<a<<"\tb="<<b;
}
};
void main()
{
clrscr();
abc A; A.get( ); A.show( );
abc B; B.get( ); B.show( );
abc C; C.get( ); C.show( );
abc D; D.get( ); D.show( );
abc E; E.get( ); E.show( );
getch();
}
