//c++ program to show unary operator overloading 
#include<iostream>
using namespace std;
class Distance {
    public:
    int feet,inch;
    //constructor to initialize the object's value 
    Distance(int f,int i)
    {
        this->feet = f;
        this->inch = i;
    }
    // overloading(-) opertaor to perform decrement operation of distance object void operator-()
    void operator-()
    {
        feet=feet-3;
        inch--;
        count<< "\nfeet & inches(decrement):"<<
        feet <<""<<inch;
    }

};
//Driver code
int main()
{
    Distance d1(8,9);
    -d1;
    return 0;

}
