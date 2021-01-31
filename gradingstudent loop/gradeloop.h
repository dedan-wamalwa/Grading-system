#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    string regno;
    int mark[8],i,p[8],total=0,ptotal=0,avg,pavg;
    char grade[8];
public:
    void setname(string);
    void setregno(string);
    void setmark();
    void setgrade();
    void average();
    void diplay();

};
