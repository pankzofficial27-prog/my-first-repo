// #include<iostream>
// using namespace std;
// class customer
// {
    
// }



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,i,fact=1;
  cin>>n;
  for(i=n;i>=1;i--)
  {   fact=fact*i;
  }
  cout<<"factorial of n is "<<fact<<endl;
    return 0;
}