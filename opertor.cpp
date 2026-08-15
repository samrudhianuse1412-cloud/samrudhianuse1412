#include <iostream>
using namespace std;
int main()
{
    int *arr;
    int size;
    std::cout<<"Enter the size of integer array :";
    std::cin>>size;
    std::cout<<"creating array of size"<<size<<"..";
    arr =new int[size];
    std::cout<<"\nDynamic allocation of memory for array arr is succrssful.";
    delete[] arr;
    return 0;

}