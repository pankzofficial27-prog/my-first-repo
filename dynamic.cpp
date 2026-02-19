#include<iostream>
#include<string.h>
using  namespace std;


// int main  ()
// {
//     int*x=new int(3434); //allocation memory and store data
//     cout<<*x;   //print data not the address 
//     return 0;
// }
 


 class account
 {  public:
    string name;
    int balance;
    account ( string n, int m)
    {
        name =n;
    balance=m;
    }
 };
 int main ()
 {
    account *a1=new account( "pankaj chauhan ",200000);
    cout<<a1->name;
    return 0;
 }