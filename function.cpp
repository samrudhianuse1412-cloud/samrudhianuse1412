//function area() is overloadede three time 
#include<iostream>
//Declaration of function prototypes
int area(int);
int area(int,int);
float area(float);
int main()
{
    std::cout<< " area of the square (side=5) - "<< area(5) <<"\n";
    std::cout<< "area of the recangle (length=5,breath=10)-"<< area(5,10) <<"\n";
    std::cout<< "area of the circle (radius=5.5) -"<< area(5.5f) <<"\n";
    return 0;
}
int area (int side)                       //Area of the square
{
    return(side*side);
}
int area (int length ,int breadth)        //Area of recangle
{
    return(length*breadth);
}
   float area (float radius)              //Area of circle
   {
    return(3.14*radius*radius);
   }