#include <iostream>
using namespace std;

class Cylinder
{
public :
    double base_radius ;
    double height ;
    
public :
    double volume()
    {
        return 3.14 * base_radius * height;
    }
};

class circle
{
public :
    double radius;

public :
    double area() 
    {
        return 3.14 * (radius*radius);
    }
};

int main()
{
    Cylinder cylinder1 {5,10};

    cout << "volume of cylinder is " << cylinder1.volume() << endl;

    circle circleA {5};

    cout << "area of the circle is " << circleA.area();

    return 0;
};