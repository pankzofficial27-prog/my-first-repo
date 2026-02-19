#include<iostream>
using namespace std;
// int main ()
// {
//    int i,j;
//    for(i=0;i<=5;i++)
// {
//     for(j=0;j<=5;j++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
// return 0;
   
// }

// int main ()
// {
//    int i,j;
//    for(i=1;i<=5;i++)
// {
//     for(j=1;j<=5;j++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// return 0;
   
// }


// int main ()
// {
//    int i,j;
//    for(i=1;i<=5;i++)
// {
//     for(j=1;j<=5;j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
   
// }

// int main ()
// {
//    int i,j;
//    for(i=1;i<=5;i++)
// {
//     for(j=5;j>=1;j--)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
   
// }

// int main ()
// {
//    int i,j;
//    for(i=1;i<=5;i++)
// {
//     for(j=1;j<=5;j++)
//     {
//         cout<<j*j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
   
// }

// int main ()
// {
//    int i,j;
//    for(i=1;i<=5;i++)
// {
//     for(j=1;j<=5;j++)
//     {
//         cout<<'a'+(i-1)<<" ";
//     }
//     cout<<endl;
// }
// return 0;
   
// }

 // int main ()
// {
//     int i;
//     char j;
//     for (i=1;i<=5;i++)
//     {
//         for(j='a';j<='e';j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main ()
// {
//     int i;
//     int j;
//      int count =1;
//     for (i=1;i<=5;i++)
//     {
//         for(j=1;j <=5;j ++)
//         {
//             // cout<<count<<" ";
//             // count=count+1;
//             cout<<(i-1)*5+j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// } 

// int main ()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j<=i;j++)
//         {
//             cout<<"*";

//         }
//         cout<<endl; 
//     }
// }

int main ()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-(i-1);j=j+1)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}