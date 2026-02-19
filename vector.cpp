#include <iostream>
#include <vector>
using namespace std;

// vector is just like a array having dymaic size

//  int main ()
//  {
//     vector<int>vec={1,2,3,4,5,6,7};
//     for(int i:vec)
//     {
//         cout<<i<<" ";
//     }
//     return 0;

//  }
int main()
// {
//     vector<char> vec = {
//         'a',
//         'b',
//         'c',
//         'd',
//     };
//     for (char val : vec)
//     {
//         cout << val << " " << endl;
//     }
//     return 0;
// }

// vector function
//  size
// push_back
// pop_back
//  fornt
// at
// back

//   {
//       vector<char> vec={'a','b','c','d','3'};
//       cout<<"vec size="<<" "<<vec.size()<<endl;

//   }

{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(7);
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl<<"after push back size is" << vec.size() << endl;
    cout<<"last element is"<<vec.back()<<endl;
    cout<<vec.at(2)<<endl;


    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    cout << "after pop back size is" << vec.size() << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout<<"front element is "<<vec.front();
}
