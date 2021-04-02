#include <iostream>

using namespace std;

class temporary
{
public:
    void set(string, double, double);
    void print();
    double manipulate();
    void get(string&, double&, double&);
    void setDescription(string);
    void setFirst(double);
    void setSecond(double);
    string getDescription() const;
    double getFirst() const;
    double getSecond() const;

    temporary(string = "", double = 0.0, double = 0.0)
    {
        set("", 0.0, 0.0);
    }

private:
    string description;
    double first;
    double second;
};

int main()
{
    temporary test;
    string st;
    double First, Second;

    cout << "Please enter info inside of a class (three values in a row): ";
    cin >> st >> First >> Second;
    cout << endl;

    test.set(st, First, Second);
    test.print();

    return 0;
}

void temporary::set(string descr, double f, double s)
{
    description = descr;
    first = f;
    second = s;
}

double temporary::manipulate()
{
    if(description == "rectangle")
    {
        return first * second;
    }
    else if(description == "circle")
    {
        return 3.14 * first * first;
    }
    else if(description == "sphere")
    {
        return (4.0 / 3.0) * 3.14 * first * first * first;
    }
    else if(description == "cylinder")
    {
        return 3.14 * first * first * second;
    }
    else
        return -1;
}

void temporary::print()
{
    if(description == "rectangle")
    {
        cout << description << ": length = " << first;
        cout << ", width = " << second << ", area = " << manipulate() << endl;
    }
    else if(description == "circle")
    {
        cout << description << ": radius = " << first;
        cout << ", area = " << manipulate() << endl;
    }
    else if(description == "sphere")
    {
        cout << description << ": radius = " << first;
        cout << ", volume = " << manipulate() << endl;
    }
    else if(description == "cylinder")
    {
        cout << description << ": radius = " << first;
        cout << ", height = " << second << ", volume = " << manipulate() << endl;
    }
}

void temporary::get(string& descr, double& f, double& s)
{
    description = descr;
    first = f;
    second = s;
}

void temporary::setDescription(string d)
{
    description = d;
}

void temporary::setFirst(double f)
{
    first = f;
}

void temporary::setSecond(double s)
{
    second = s;
}

string temporary::getDescription() const
{
    return description;
}

double temporary::getFirst() const
{
    return first;
}

double temporary::getSecond() const
{
    return second;
}
