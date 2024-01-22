//-----------------------------------------------------------
// header file of the project having all declarations required
//copyright  Habibatallah Abouelseoud
//-----------------------------------------------------------

#ifndef INTERVAL_H
#define INTERVAL_H

#include <iostream> // Required for cout

using namespace std; // using namespace std for cin/cout
//----------------------------------------------------------------------
// class prototype declaration
class interval;
//-----------------------------------------------------------------------
class interval
{
public: //grants read and write access to all the member variables

// constructors to be called whenever an instance of an object is created .
// declaring  constructor passing 2 values(max,min)
    interval(float _Max,float _Min);

//declaring  constructor passing 1 value
    interval(float _Max);

// declaring empty constructor
    interval();

//copy constructor to construct a new instance
// and initialise it by copying an existing instance
    interval(const interval& I);

//operating function to overwrite the data of
//one existing instance with a copy of the
// data of another existing
    interval& operator=(const interval& I);

//destructor to be called whenever the object is destroyed
    ~interval(){}
//-----------------------------------------------------------------
  /// Note: in this project sets and gets are not needed however this
  /// was implemented to ensure robust design
// getters function to get the object value when needed
    float get_Max();

    float get_Min();

// setters function to set the object when needed
    void set_Max(float _Max);

    void set_Min(float _Min);

//-----------------------------------------------------------------
// Operator Overloading to provide sensible functionality for the class

    // Plus operator to add 2 objects class to each other
    interval operator +(const interval& I2);

    // Minus operator to subtract 2 objects class from each other
    interval operator -(const interval& I2);

    // Multiplication operator  overloading to multiply 2 objects class to each other
    interval operator *(const interval& I2);

    //Division operator overloading to divide 2 objects class
    interval operator /(const interval& I2);

    // plus equal operator overloading  to add value of object 2  to object 1
    interval operator +=(const interval& I2);

    //operator overloading  to add object and float
    interval operator +(const float& I2);

    //Cout operator in order to display the values
    friend ostream& operator<<(ostream&, interval&);

    // Cin operator in order to take the values from user
    friend istream& operator>>(istream&, interval&);




private:
  // protected variable cant be accessed except by using friend and member functions
    float Max; // private member variable
    float Min; // private member variable

};

#endif // INTERVAL_H
