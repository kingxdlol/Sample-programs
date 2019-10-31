#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class student {
int roll,marks;
public:
void input() {
cout<<"Roll:";cin>>roll;
cout<<"Marks:";cin>>marks; }
void display() {
cout<<"Roll:"<<roll<<endl;
cout<<"Marks:"<<marks<<endl; }
int retroll() {
return roll; }
};
void writerec() {
student a;
ofstream fout ("student.dat",ios::binary);
for (int x = 1 ; x<=3 ; x++) {
a.input();
fout.write((char*)&a,sizeof(a)); }
fout.close(); }
void readrec() {
student a;
ifstream fin ("student.dat",ios::binary);
while(fin.read((char*)&a,sizeof(a))) {
a.display(); }
fin.close(); }
void deleterec(int r) {
student a;
ofstream fout ("temp.dat",ios::binary);
ifstream fin ("student.dat",ios::binary);
while(fin.read((char*)&a,sizeof(a)))
if(a.retroll()!=r)
fout.write((char*)&a,sizeof(a));
fin.close();
fout.close();
remove("student.dat");
rename("temp.dat","student.dat"); }
void main() {
student a;
int k;
writerec();
cout<<”
\n Enter rollno to be deleted:”;
cin>>k;
deleterec(k);
cout<<"Record Deleted
\n";
readrec();
getch(); }
