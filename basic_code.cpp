#include <iostream>

using namespace std;
int main() {
  int n,i,fact=1;
  cin>>n;
  for(i=n;i>=1;i--)
    //  for (i=1;i<=n;i++)
  {   fact=fact*i;
  }
  cout<<"factorial of n is "<<fact<<endl;
    return 0;
}


// some of n natural no.
// int main ()
// {
//     int n,i,sum=0;
//      cin>>n;
//      for(i=0;i<=n;i++){
//         sum= sum+i;
//      }
//     //  cout<<(n*(n+1))/2;
//     cout<<sum;
//      return 0;
// }