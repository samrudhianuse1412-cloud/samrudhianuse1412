#include<iostream>
#include <iomanip> //for setw
using namespace std;
int main()
{
    int basic = 950, allowanc=95, total  =1045;
    std::cout<< setw(10) << "basic"<< setw(10) << basic << endl
             << setw(10) << "allowanc" << setw(10) << allowanc <<endl
             << setw(10) << "total" << setw(10) << total <<endl;
    return 0;          
}