#include "interval.h" //the  header file required
#include <iostream> // required for cout

using namespace std; // required for cout
class interval; // class prototype declaration
//-----------------------------------------------------------------------

// constructors to be called whenever an instance of an object is created .
// declaring  constructor passing 2 values(max,min)
interval::interval(float _Max,float _Min):Max(_Max),Min(_Min) {}


//declaring  constructor passing 1 value
interval::interval(float _Max):Max(_Max),Min(0.) {}

// declaring empty constructor
interval::interval():Max(0.),Min(0.) {}


//copy constructor to construct a new instance
// and initialise it by copying an existing instance
interval::interval(const interval& I):Max(I.Max),Min(I.Min) {}


//operating function to overwrite the data of
//one existing instance with a copy of the
// data of another existing
interval& interval::operator=(const interval& I)
{
    if(this==&I) return(*this);
    Max=I.Max;
    Min=I.Min;


    return(*this);
}

//destructor have been defined  in header file



//-----------------------------------------------------------------
  /// Note: in this project sets and gets are not needed however this
  /// was implemented to ensure robust design
// getters function to get the object value when needed
    float interval::get_Max()
    {
        return (Max);
    }
    float interval::get_Min()
    {
        return (Min);
    }

// setters function to set the object when needed
    void interval::set_Max(float _Max)
    {
        Max=_Max;
    }
    void interval::set_Min(float _Min)
    {
        Min=_Min;
    }
//---------------------------------------------------------------------


 // Plus operator to add 2 member variables of the class  to each other
 //and storing the sum into new objects for Max  and Min and return it
 interval interval::operator +(const interval& I2)
 {
     float _Max=Max+I2.Max;
     float _Min=Min+I2.Min;
    return interval(_Max,_Min)  ;
 }


 // Minus operator to subtract 2 member variables of the class  to each other
 //and storing the subtraction into new objects for Max  and Min and return it
 interval interval::operator -(const interval& I2)
 {
     float _Max=Max-I2.Max;
     float _Min=Min-I2.Min;
       return interval(_Max,_Min)  ;
 }

 // Multiplication overloading operator to multiply 2 member variables of the class  to each other
 //and storing the result into new objects for Max  and Min and return it
 interval interval::operator *(const interval& I2)
 {
     float _Max=Max*I2.Max;
     float _Min=Min*I2.Min;
       return interval(_Max,_Min)  ;
 }

 //Division Overloading operator to divide  2 member variables of the class  to each other
 //and storing the result  into new objects for Max  and Min and return it
 interval interval::operator /(const interval& I2)
 {
    float _Max=Max/I2.Max;
    float _Min=Min/I2.Min;
    return interval(_Max,_Min)  ;
 }

 // Plus equel operator to add the value of  member variable to the first member variable
 //of the class and storing the result into new objects for Max  and Min and return it
  interval interval::operator +=(const interval& I2)
 {
     float _Max=Max+=I2.Max;
     float _Min=Min+=I2.Min;

       return interval(_Max,_Min);
 }

  // Plus operator to add 1 member variable of the class  to a constant float
 //and storing the sum into new variable for Max  and Min and return it
   interval interval::operator +(const float& I2)
 {
    float _Max=Max+I2;
    float _Min=Min+I2;
    return interval(_Max,_Min)  ;
}

// redefining the stream operator required for interval class

//Cout overloading stream operators
ostream& operator<<(ostream& out, interval &c)
{

    out<<"("<<c.Max<<","<< c.Min<<")";

              return(out);
}



// Cin  overloading stream operators
   istream& operator>>(istream& in, interval &c)
{

    in>>c.Max>>c.Min;

    return(in);
}


