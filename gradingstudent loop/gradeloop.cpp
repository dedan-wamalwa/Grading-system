#include <iostream>
#include "gradeloop.h"
#include <string>
using namespace std;

void student::setname(string n)
{
name=n;
}
void student::setregno(string r)
{
regno=r;
}
void student::setmark()
{
cout<<"enter the marks of the student : "<<endl;
for(i= 0;i < 8;i++)
    {
cin>>mark[i];
total=total+mark[i];
    }

}
void student::setgrade()
{
for (i = 0;i<  8;i++)
{
if (mark[i]<40)
    {
grade[i]='E';
p[i]=1;
    }
else if(mark[i]>=40 && mark[i]<50)
    {
grade[i]='D';
p[i]=2;
    }
else if(mark[i]>=50 && mark[i]<60)
    {
grade[i]='C';
p[i]=3;
    }
else if(mark[i]>=60 && mark[i]<70)
    {
grade[i]='B';
p[i]=4;
    }
else if(mark[i]>=70 && mark[i]<100)
    {
grade[i]='A';
p[i]=5;
    }
else
    {
grade[i]='X';
    }
ptotal=ptotal+p[i];
}
}
void student::average()
{
avg=total/8;
pavg=ptotal/8;
}
void student::diplay()
{
cout<<"name of the student :"<<name<<endl;
cout<<"registration number :"<<regno<<endl;
cout<<"UNIT    MARK   GRADE"<<endl;
for(i= 0;i < 8;i++)
    {
cout<<i+1<<"        "<<mark[i]<<"      "<<grade[i]<<endl;
    }
cout<<"average mark : "<<avg<<endl;
cout<<"average points : "<<pavg;
}
