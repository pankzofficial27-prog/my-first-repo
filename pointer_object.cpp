#include<iostream>
#include<string.h>
using namespace std;

// class car
// {   public:
//     string name;
//     string brand;
//     int seats;

// };

// int main()
// {
//     car c1;
//     c1.name= "scarpio";
//     c1.brand =" mahindra";
//     c1.seats=9;
//     car*p=&c1;                    //store the address of c1 in the pointer p
//     cout<<c1.name<<" "<<c1.brand<<" "<<endl;
//     cout<<(*p).name<<" "<<(*p).brand<<" "<<endl;
//     (*p).name = "audi";           //change the data of name using pointer
//     cout<<(*p).name<<endl;

// }


class car
{   public:
    string name;
    string brand;
    int seats;

};
void change(car *c)         //change value using pointer
{
    // (*c).name="alto";
    c->name="maruti";       //*(C).name=c->name

}
void print(car &s)          //change value using ampersand  "much easiar"
{   
    s.name="jaguar";
    cout<<s.name<<" "<<s.brand<<" "<<s.seats<<endl;
}
int main()
{
    car c1;
    c1.name= "scarpio";
    c1.brand =" mahindra";
    c1.seats=9;
    change(&c1);
    print(c1);
    cout<<c1.name<<endl;
    return 0;
}



