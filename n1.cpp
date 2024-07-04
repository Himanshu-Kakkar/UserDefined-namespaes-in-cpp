#include<iostream>

using namespace std;

namespace n1 // UserDefined NameSpace
{ 
    class output{
        public:
            ostream& operator<<(char* a); 
            ostream& operator<<(char& a);
            // to override << (excertion) operator

    }Hout; // work as cout object

    class input{
        public:
            istream& operator>>(char& a);
            // to override >> (insertion) operator

    }Hin; // work as cin object

}

// Here I define two types overloading for excertion << operator 
// and single overloading for insertion >> operator

ostream& n1::output::operator<<(char* a)
{
    cout<<a;
    return cout;
}

ostream& n1::output::operator<<(char& a)
{
    cout<<a;
    return cout;
}

istream& n1::input::operator>>(char& a)
{  
    cin>>a;
    return cin;
}