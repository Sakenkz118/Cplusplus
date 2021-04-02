#include <iostream>
#include "circleType.h"

using namespace std;

class cylinderType: public circleType
{
public:
    double cylinderVolume() const;
    // Function to calculate cylinder volume
    // Postcondition: cylinder volume is calculated and returned

    double cylinderSurfaceArea() const;
    // Function to calculate surface area of a cylinder
    // Postcondition: surface area of a cylinder is calculated and returned

    void setHeight(double h);
    // Function to set cylinder height as a given parameter
    // Postcondition: cylinder height is set as height = h

    void setBaseRadius(double r);
    // Function to set cylinder base radius as a given parameter
    // Postcondition: cylinder base radius is set as radius = r

    void setCenter(double x, double y);
    // Function to set cylinder's base center
    // Postcondition: cylinder's base center  is set as xCoordinate = x,
    // yCoordinate = y

    void print() const;
    // Function to print cylinder's height, base radius, base area and base circumference
    // Postcondition: cylinder's height, base radius, base area and base circumference are printed

    cylinderType(); // default constructor

private:
    double height;
    double xCoordinate;
    double yCoordinate;
};

int main()
{
    cylinderType cylinder;

    cylinder.setHeight(10);
    cylinder.setBaseRadius(1);
    cylinder.setCenter(56.33, 34.65);
    cylinder.print();
    cout << endl;
    cylinder.cylinderVolume();
    cout << endl;
    cylinder.cylinderSurfaceArea();
    cout << endl;

    return 0;
}

cylinderType::cylinderType()
{
    setRadius(0);
    height = 0;
    xCoordinate = 0;
    yCoordinate = 0;
}

void cylinderType::print() const
{
    circleType::print();
    cout << "Cylinder height: " << height << endl;
    cout << "Volume of a cylinder is " << cylinderVolume() << endl;
    cout << "Surface area of a cylinder is " << cylinderSurfaceArea() << endl;
    cout << "Cylinder's base center is at: (" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double cylinderType::cylinderVolume() const
{
    return height * area();
}

double cylinderType::cylinderSurfaceArea() const
{
    return 2 * area() + height * circumference();
}

void cylinderType::setHeight(double h)
{
    if(h > 0)
        height = h;
    else
        height = 0;
}

void cylinderType::setBaseRadius(double r)
{
    if(r > 0)
        setRadius(r);
    else
        setRadius(0);
}

void cylinderType::setCenter(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}
