#include<iostream>
using namespace std;

class Time
{
    private:
    int hour,min,sec;

    public:
    Time(int h=0,int m=0,int s=0):hour(h),min(m),sec(s){}

    Time add(const Time &t)
    {
        return Time(hour+t.hour,min+t.min,sec+t.sec);
    }

    Time subtract(const Time &t)
    {
        return Time(hour-t.hour,min-t.min,sec-t.sec);
    }

    void display()const
    {
        cout<<hour<<"h "<<min<<"m "<<sec<<"s"<<endl;
    }
};

int main()
{
    Time t1(4,30,20),t2(2,15,10);

    Time sum=t1.add(t2);
    Time diff=t1.subtract(t2);

    cout<<"First Time: ";t1.display();
    cout<<"Second Time: ";t2.display();
    cout<<"Addition: ";sum.display();
    cout<<"Subtraction: ";diff.display();

    return 0;
}