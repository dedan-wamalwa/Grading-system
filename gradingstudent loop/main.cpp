#include <iostream>
#include "gradeloop.h"
#include <string>

using namespace std;

int main()
{
string n,r;
cout<<"enter the name of the student"<<endl;
getline(cin,n);
cout<<"enter the reg number of the student"<<endl;
cin>>r;

student s1;
s1.setname(n);
s1.setregno(r);
s1.setmark();
s1.setgrade();
s1.average();
s1.diplay();

return 0;
}
