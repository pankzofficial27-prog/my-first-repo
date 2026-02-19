#include<iostream>
#include<string.h>
using namespace std;
class scoote  // parent class
{
  public:
  int milage;
 float topspead;
   private :
   int bootspace;

};
 class bike : public scoote  //child class
 {   public:
     int gears;

 };
 int main ()
 {
    bike s1;
    s1.milage=80;
    s1.gears=6;
    cout<<s1.milage<<" "<<s1.gears<<endl;
    return 0;
 }

// class car
// {
//     int milage ;
//     int topspead;

// };
// class 