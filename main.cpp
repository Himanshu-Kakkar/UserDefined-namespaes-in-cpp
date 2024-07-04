#include<iostream>
#include"n1.cpp" // including file that contains namespace defination

using namespace n1; //syntax to use my own namespace

int main()
{
    char a;
    Hout<<"Enter a character :: "; // n1::Hout
    Hin>>a;     //n1::Hin
    Hout<<a<<endl;
    Hout<<"Namaste Bharat"<<endl;
    return 0;
}
