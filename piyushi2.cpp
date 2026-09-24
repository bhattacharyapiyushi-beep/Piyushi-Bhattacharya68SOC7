#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
int rollnumber;
string name;
float marks;
void accept()
{
cout<<"Enter the rollnumber :";
cin>>rollnumber;
cout<<"Enter the name :";
cin>>name;
cout<<"Enter the marks :";
cin>>marks;
}
void result()
{
if(marks>=40)
{
cout<<"Result :Pass"<<endl;
}
else
{
cout<<"Result :Fail"<<endl;
}
}
void display()
{
cout<<"\n STUDENT DETAILS"<<endl;
cout<<"Roll number: "<<rollnumber<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Marks: "<<marks<<endl;
result ();
}
};

int main()
{
Student s;
s.accept();
s.display();
return 0;
}
