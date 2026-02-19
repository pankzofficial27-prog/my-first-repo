#include <iostream>
using namespace std;

// class student
// {
// public:
//     string name; // name and rno are the atributes of the class
//     float rno;
// };
// void print(student s)
// {
//     cout << s.name << " " << s.rno << " " << endl;
// }
// void change(student &c) //&pass by value (passing the object in the change function )
// {
//     c.name = "ramesh";
// }
// int main()
// {
//     student s1; // declaration of the object
//     s1.name = "mukesh";  //initilazation
//     s1.rno = 33;
//     // cout << s1.name << " " << s1.rno << endl;
//     print(s1);
//     change(s1);
//     print(s1);
//     return 0;

// } //%%class(student ) describe what an object(s1) will contain







// *****************************************************
// constructor

class person
{
public:
    string name;
    int age;
    int members;
    person() // default constructer having no parameter making of initilization objects atributes normally
    {        // it is always exist if no constructer exist
    }
    person(string n, int a, int m) // parameterised constructer =function having no return type
    {
        name = n;
        age = a;
        members = m;
    }
};
void print(person p)
{
    cout << p.name << " " << p.age << " " << p.members << " " << endl;
}
void change(person &p)
{
    p.name = "pankaj";
}
int main()
{
    person p1("pamesh", 29, 6);
    person p2("ramesh", 25, 7);
       p1.members=3; // overwrite 
    person p3;
    p3.name = "rampal";
    p3.age = 44;
    p3.members = 7;

    person p4=p1;  // copy constructer
    person p5(p2);//deep copy 

    print(p1);
    print(p2);
    print(p3);
    change(p2);
    cout << endl;
    print(p1);
    print(p2);
    print(p3);
    print(p4);
    print(p5);
    return 0;
}

// *******************************************













// class person
// {
// public:
//     int age;
//     string name;
//     int hight;
//     float weight;
//     int selery;
//     public:

// };
//  void print(person p){
//         cout<<p.name<<" "<<p.hight<<" "<<p.weight<<" "<<p.selery<<endl;
//     }
// int main()
// {
//     // class student
//     // { public :
//     //     int age ;
//     //     string name;
//     //     string school ;
//     //     float marks ;
//     //     int hight;
//     //     void print(student s){
//     //         cout<<s.age<<" "<<s.name<<" "<<s.school<<s.hight<<" "<<s.school<<endl;
//     //     }
//     // };
//     person p1;
//     // p1.hight=6.2;
//     cin>>p1.hight;
//     // p1.hight=6.2;

//     p1.age=19.899;
//     p1.weight= 90.788;
//     p1.name="raghav";
//     // cout<<p1.name<<" "<<p1.age<<" "<<p1.hight<<" "<<p1.weight<<endl;
//     // student s1;
//     // s1.name="pankaj ";
//     // s1.age= 19;
//     // s1.school="brij bharti school ";
//     // s1.marks=59;

//     // print(s1);
//     print(p1);
//     print(p1);
//     print(p1);
//     return 0;

// }

// ******************************use of this ***************

//  class cars
// {
// public:
//     string name;
//     int seats;
//     int model;
//     string brand;
//     string eng;
//     cars( int seats ,string name, int model, string brand, string eng)   //constructer
//     {
//    this-> name = name;
//    this-> seats = seats;
//    this-> model = model;// here this is use  when constracter parameter and class variable have same name
//    this-> brand = brand;
//    this-> eng = eng;
//     }
//        void print(int seats ){  // function inside the class
//        cout <<this -> name << " " << this ->seats << " " <<this-> model << " " <<this-> brand << " " <<this-> eng << endl;
//        }

//     //    void print(string name){
//     //     cout<<name<<" "<<seats<<" "<<model<<" "<<brand<<" "<<eng<<endl;
//     //    }
// };
//     // void print(cars c){
//     // cout << c.name << " " << c.seats << " " <<c. model << " " <<c. brand << " " << c.eng << endl;
//     // }
// int main()
// {
//     cars c1( 5,"scarpion ",  2022, "suv", "v8");
//     cars c2(8,"audi",2021,"luxary","v9");
//      c1.print();
//      c2.print();
//     return 0;
// }

// ************************************************

// class cricketer
// {   public:
//     string name ;
//     int runs;
//     float average;
//     cricketer(string s, int r, float avg)
//     {
//         name =s ;
//         runs=r;
//         average = avg;
//     }

//     // void print(string name)     // we can also change the argument value
//     void print()

//     {
//         cout<<name<<" "<<runs<<" "<<average<<" "<<endl;
//     }
// };

// int main ()
// {
//     cricketer c1("virat kholi",25000,46.6);
//     cricketer c2("rohit sharma",18000,30.6);
//     // c1.print( "ms dhoni");    // change the argument value
//     c1.print( );
//     c2.print();
//     return 0;

// }

// *****************************************************************

// ****************************** function inside the class **********
// class car{

// public:
//     string name;
//     int seats;
//     int model;
//     string brand;
//     string eng;
//     car(int t, string s, int u, string v, string w) // constructer define order must be same when calling the constructor
//     {
//         name = s;
//         seats = t;
//         model = u;
//         brand = v;
//         eng = w;
//     }
//     void print()//functino inside the class
//     {
//         cout << name << " " << seats << " " << model << " " << brand << " " << eng << endl;
//     }
// };

// int main()
// {
//     car c1(5, "scarpion ", 2022, "suv", "v8");//calling constructor
//     car c2(8, "audi", 2021, "luxary", "v9");//calling constructor

//     c1.print();//calling function
//     c2.print();//calling function

//     return 0;
// }

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// object pointer

// class employ
// {    public:
//     string name ;
//     float salery;
//     employ(string n, float s)
//     {
//       name=n;
//        salery=s;
//     }
//     void print()
//     {
//         cout<<name<<" "<<salery<<" "<<endl;
//     }

// };
// int main ()
// {
//     employ e1("mukesh", 5000000);
//     cout<<e1.name<<" "<<e1.salery<<endl;
//      employ *p=&e1;
//     p->print();
//     return 0;

// }