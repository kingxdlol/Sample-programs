//Program Objective: Modification in File

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class student
{
introl;
char name[20];
public:
void input()
{
cout<<"\nEnter Roll no.:";
cin>>rol;
cout<<"Enter Name:";
gets(name);
}


void output()
{
cout<<"\nRoll no.:"<<rol;
cout<<"\nName:"<<name;
}
intgetrol(){return  rol;}
char*getname(){return name;}
};
student s;
void main()
{
clrscr();
fstream fio("student.dat",ios::binary|ios::in|ios::out);
int t;
char flag='n';
cout<<"\nEnter Record No. to be modified\n";
cin>>t;
while(fio.read((char*)&s,sizeof(s)))
{
if(s.getrol()==t)
{
flag='f';
cout<<"\nRecord Found\n";
cout<<"\nEnter Fresh details";
s.input();
fio.seekp(-1*(long)sizeof(s),ios::cur);
fio.write((char*)&s,sizeof(s));
cout<<"\nRecord Updated\n";
break;
}
}
if(flag=='n')
cout<<"\nRecord Not found\n";
else
{
fio.seekg(0);
cout<<"The updated record is\n";
while(fio.read((char*)&s,sizeof(s)))
{
s.output();
}
}
fio.close();
getch();
}
