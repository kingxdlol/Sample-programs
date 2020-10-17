//Program Objective: Insert operation in a file

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class stu
{
int rollno;
char name[25];
char Class[4];
float marks;
char grade;
public:
void getdata()
{
cout<<"Roll No.:"; cin>>rollno;
cout<<"Name:"; gets(name);
cout<<"Class:"; gets(Class);
cout<<"Marks:"; cin>>marks;
if(marks>=75) grade='A';
else if(marks>=60) grade='B';
else if(marks>=50) grade='C';
else if(marks>=40) grade='D';
else grade='F';
}
void putdata()
{
cout<<name<<",roll no."<<rollno;
cout<<" has"<<marks<<"% marks and";
cout<<grade<<"grade."<<endl;
}
int getrno()
{return rollno;}
}s1,stud;
void main()
{
clrscr();
ifstream fi("stu.dat",ios::in|ios::binary|ios::nocreate);
ofstream fo("temp.dat",ios::out);
char last='y';
cout<<"Enter inserted record\n";
s1.getdata();
while(!fi.eof())
{
fi.read((char*)&stud,sizeof(stud));
if(s1.getrno()<=stud.getrno())
{
fo.write((char*)&s1,sizeof(s1));
last='n';
break;
}
else
fo.write((char*)&stud,sizeof(stud));
}
if(last=='y')
fo.write((char*)&s1,sizeof(s1));
else if(!fi.eof())
{
while(!fi.eof())
{
fi.read((char*)&stud,sizeof(stud));
fo.write((char*)&stud,sizeof(stud));
}
}
fi.close();
fo.close();
remove("stu.dat");
rename("temp.dat","stu.dat");
fi.open("stu.dat",ios::in|ios::binary);
cout<<"File now contains\n";
while(!fi.eof())
{
fi.read((char*)&stud,sizeof(stud));
if(fi.eof())
break;
stud.putdata();
}
fi.close();
getch();
}
