//C++ Task: Function Overloading
#include <iostream>
#include <cmath>      //for square root function sqrt

using namespace std;

//Function for calculating area of a circle
float area(float radius)
{
    cout << "Area of circle is: " << (22.0/7)*radius*radius << " units";
}

//Function for calculating area of a rectangle
float area(float length, float breadth)
{
    cout << "Area of rectangle is: " << length * breadth << " units";
}

//Function for calculating area of a triangle
float area(float side1, float side2, float side3)
{
    float s;
    s = (side1 + side2 + side3)/2;   //semi perimeter of triangle
    cout << "Area of triangle is: " << sqrt(s*(s-side1)*(s-side2)*(s-side3)) << " units";
}

int main()
{
    int shape;
    cout << "Please choose the shape among - 1-circle, 2-rectangle, 3-triangle: ";  //type 1 for circle or 2 for rectangle or 3 for triangle
    cin >> shape;

    if(shape == 1)
    {
        float r;
        cout << "Enter the radius of circle: ";
        cin >> r;
        cout <<"\n";
        area(r);
    }

    else if(shape == 2)
    {
        float l, b;
        cout << "Enter the length of rectangle: ";
        cin >> l;
        cout <<"\n";
        cout << "Enter the breadth of rectangle: ";
        cin >> b;
        cout <<"\n";
        area(l, b);
    }
    else
    {
        float s1, s2, s3;
        cout << "Enter side 1 of triangle: ";
        cin >> s1;
        cout <<"\n";
        cout << "Enter side 2 of triangle: ";
        cin >> s2;
        cout <<"\n";
        cout << "Enter side 3 of triangle: ";
        cin >> s3;
        cout <<"\n";
        area(s1, s2, s3);
    }
    return 0;
}
