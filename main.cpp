#include <iostream>
#include "interval.h" // including the header file required

using namespace std;


//------------------------------------------First Task-----------------------
/*
class interval;
//-----------------------------------------------------------------------
class interval
{
public:

// constructor from 2 value
    interval(float _Max,float _Min);

// constructor from 1 value
    interval(float _Max);

// empty constructor
    interval();

//copy constructor
    interval(const interval& I);

//operating function
    interval& operator=(const interval& I);

//destructor
    ~interval() {}

// getters function
    float get_Max()
    {
        return (Max);
    }
    float get_Min()
    {
        return (Min);
    }

// setters function
    void set_Max(float _Max)
    {
        Max=_Max;
    }
    void set_Min(float _Min)
    {
        Min=_Min;
    }

// Member Functions

    //void print();

private:
    float Max;
    float Min;

};
//---------------------------------------------------------------------------
// constructor from 2 value
interval::interval(float _Max,float _Min):Max(_Max),Min(_Min) {}

// constructor from 1 value
interval::interval(float _Max):Max(_Max),Min(0.) {}

// empty constructor
interval::interval():Max(0.),Min(0.) {}

//copy constructor
interval::interval(const interval& I):Max(I.Max),Min(I.Min) {}

//operating function
interval& interval::operator=(const interval& I)
{
    if(this==&I) return(*this);
    Max=I.Max;
    Min=I.Min;
    return(*this);
}


// function to calculate interval  arithmetic

// void interval::print();


int main()
{
    interval x; // Default initialisation
    interval y(3.0,3.1); // Initialisation from complete data
    interval z(7); // Sensible (?) initialisation from a single float
    interval a(x);
    a=x;
    // constructor initialised dynamically
    interval *intptr=new interval[4];
    delete[] intptr;
}
//----------------------------------------------------------------------------------
*/

int main()
{

    interval x(3.0,3.1); // Initialisation from complete data
    interval y(7); // Sensible (?) initialisation from a single float
    interval a=x+y; // implementing plus operator overloading
    interval b=x-y; // implementing minus operator overloading
    interval c=x*y; // implementing multiplication operator overloading
    interval d=x/y; // implementing division operator overloading

    // cout<<d.get_Max()<<endl;

    interval p(x); // Request that p should be created and initialised as a clone of x

    p+=a; // implementing  plus equal operator
    // cout<<p.get_Max();

    cout<<d; // to display value of d
    cin>>a;  // to take the value of a from user
    float f(5.); // giving value to f
    interval g=a+f; //implementing the addition of object to float
     //cout<<g;
    interval h=f+a;

}
