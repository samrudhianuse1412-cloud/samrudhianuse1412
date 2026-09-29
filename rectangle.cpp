#include<iostream>
class rectangle{
    private:
    double length; 
    double width;
    public:
    //constructor with default values (1 for both length and width)
    Rectangle() : length(1.0),width(1.0) {}
    //Constructor with custom values
    Rectangle(double len, double wid) : length(len), width(wid) {}
    Destructor (optional, but good practice) 
    ~Rectangle(){
    std::cout << "Rectangle object destroyed." << std::endl; }  
    //Getter methods for length and width 
     double getLength() const { 
    return length; } 
    double getWidth() const { 
    return width; 
    }
    //Setter methods for length and width 
    void setlength(double len) {
        length=len;
    }
    




}