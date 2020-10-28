//Program Objective:Transpose of a Matrix

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[20][20],b[20][20],i,j,m,n;
cout<<"Input rows and col. of matrix-A\n";
cin>>m>>n;
cout<<"\nInput matrix-A\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nMATRIX-A\n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<" "<<a[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
b[i][j]=a[i][j];
}
cout<<"\nTranspose of matrix is\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<" "<<b[i][j];
cout<<"\n";
}
