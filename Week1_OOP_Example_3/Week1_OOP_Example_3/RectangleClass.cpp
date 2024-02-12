/*
 Program Name: RectangleClass.cpp
 Programmer: Moris
 Date: Saturday 02/10/2024
 Version Control: 1.0
 About: Week 1, CSCI 2.
 Description: Write class Rectangle w/ 2 private members width and
 length using constructor protoypes. calculate area of rectangle.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;
    
public: //use prototypes:
    //constructors declaration:
    Rectangle(); //default constructor.
    Rectangle(double, double); //note: missing body of constructor.
    
    //setters declaration:
    void setWidth(double); //mutator/setter.
    void setLength(double); //mutator/setter.
    
    //getters declaration:
    double getWidth() const; //setter. **const??
    double getLength() const; //setter. **const??
    
    //other functions:
    double getArea() const; //note: const to not change privates.
    void display();
}; //end class


Rectangle::Rectangle() //define default constructor.
{
    width = 0.0;
    length = 0.0;
}

Rectangle::Rectangle(double w, double l) //define 2 arguments constructor.
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double l)
{
    length = l;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const //if try to change width (private member) inside this function, cannot bc of const.
{
    return width * length;
}

void Rectangle::display()
{
    cout << "area: " << getArea() << endl;
}


//driver for class Rectangle
int main()
{
    //handle user input:
    double w, l;
    cout << "for rec1:" << endl;
    cout << "enter width: ";
    cin >> w;
    cout << "enter length: ";
    cin >> l;
    
    //create objects based off user input:
    //using constructor w/ 2 arguments:
    Rectangle rec1(w, l);
    rec1.display();
    cout << "-------" << endl;
    
    //using constructor w/ 0 arguments:
    Rectangle rec2;
    rec2.setWidth(3.8);
    rec2.setLength(20.4);
    cout << "for rec2:" << endl;
    rec2.display();
    cout << "-------" << endl;
    
    cout << "width of rec1 is: " << rec1.getWidth() << endl;
    return 0;
}

//inline constructor functions: person
//versus outline prototypes: rectangle
