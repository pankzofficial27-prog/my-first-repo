#include<iostream>
#include<string.h>
using namespace std;
class student
{   public:
    string name;
    int rno;
    student( string n,int r,int m)
    {
        name=n;
        rno=r;
        marks=m;
    }
    void display() ;    // no parameter needed  // declear 
    // {
    //     cout<<name<<endl<<rno<<endl<<marks<<endl;
    // }
    void setmarks(float m)  //change data using setter
    {
         cout<<name<<endl<<rno<<endl<<marks<<endl;
      
    }
    private:
    int marks;


};
     void student ::display()  // define
     {
        
     }
int main ()
{
    student s1("pankaj ",44,100);
    s1.name = "priyanshul";
    cout<<s1.name<<endl;
    s1.setmarks(98.5);
    s1.display();

    return 0;
}