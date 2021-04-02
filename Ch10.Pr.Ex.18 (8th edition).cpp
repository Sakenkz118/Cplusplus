#include <iostream>

using namespace std;

class lineType
{
public:
    void setValues(double, double, double);
    // Function to set values of a, b and c
    // Postcondition: Sets the values of a = A, b = B and c = C

    void printEquation() const;

    double slope() const;
    // Function to determine a slope of a line
    // Postcondition: Returns a slope of a line

    bool isEqual(const lineType&) const;
    // Function to check if two lines are equal
    // Postcondition: Return true (or 1) if both lines are equal;
    // otherwise, returns false

    bool isParallel(const lineType&) const;
    // Function to check if two lines are parallel
    // Postcondition: Return true (or 1) if both lines are in parallel with each other;
    // otherwise, returns false

    bool isPerpendicular(const lineType&) const;
    // Function to check if two lines are perpendicular
    // Postcondition: Return true (or 1) if both lines are perpendicular;
    // otherwise, returns false

    void intersectionPoint(const lineType&) const;
    // Function to determine the coordinates, in Cartesian system, of a point intersection of two lines
    // Postcondition: outputs the X and Y values of a point

    lineType(); // default constructor
    lineType(double, double, double); // constructor with parameters

private:
    double a; // coefficient of x
    double b; // coefficient of y
    double c;
};

int main()
{
    lineType line1;
    lineType line2(8, 0, 18);

    line1.setValues(2, 3, 7);
    line2.setValues(1, 8, 7);

    line1.intersectionPoint(line2);

    return 0;
}

void lineType::setValues(double A, double B, double C)
{
    a = A;
    b = B;
    c = C;
}

void lineType::printEquation() const
{
    if((a == 1.0) && (b != 1.0))
    {
        cout << "2. Equation of a line is: " << endl;
        cout << "x + " << b << "y = " << c << endl;
    }
    else if((a != 1.0) && (b == 1.0))
    {
        cout << "3. Equation of a line is: " << endl;
        cout << a << "x + y = " << c << endl;
    }
    else if((a == 1.0) && (b == 1.0))
    {
        cout << "4. Equation of a line is: " << endl;
        cout << "x + y = " << c << endl;
    }
    else if((a != 1.0) || (b != 1.0))
    {
        cout << "1. Equation of a line is: " << endl;
        cout << a << "x + " << b << "y = " << c << endl;
    }
}

lineType::lineType()
{
    a = 1;
    b = 1;
    c = 1;
}

lineType::lineType(double A, double B, double C)
{
    a = A;
    b = B;
    c = C;
}

double lineType::slope() const
{
    if(b != 0)
    {
        return (-1 * (a / b));
    }
}

bool lineType::isEqual(const lineType& otherLine) const
{
    return ((a == otherLine.a
             && b == otherLine.b
             && c == otherLine.c)
            ||
            ((a / otherLine.a) == (b / otherLine.b)
             && ((b / otherLine.b) == (c / otherLine.c))));
}

bool lineType::isParallel(const lineType& otherLine) const
{
    if(b != 0)
        return (slope() == otherLine.slope());
    else
        return 1;
}

bool lineType::isPerpendicular(const lineType& otherLine) const
{
    if((a == 0 && otherLine.b == 0) || (b == 0 && otherLine.a == 0) || (slope() * otherLine.slope() == -1))
        return 1;
    else
        return 0;
}

void lineType::intersectionPoint(const lineType& otherLine) const
{
    double x, y;

    if(isParallel(otherLine) == 1)
        cout << "Both lines are parallel, there is no point of intersection between them!" << endl;
    else
    {
        x = ((c / b) - (otherLine.c / otherLine.b)) / ((a / b) - (otherLine.a / otherLine.b));
        y = (c / b) - (a / b) * x;

        cout << "Cartesian coordinates for intersecting point: (" << x << ", " << y << ")" << endl;
    }
}
