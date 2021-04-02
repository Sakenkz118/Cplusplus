#include <iostream>

using namespace std;

const double ONE_CUBIC_FEET = 7.48052; // gallons

class swimmingPool
{
public:
    double fillAmountPool(double) const; // cubic feet
    double fillTime(double) const; // in minutes
    double drainTime(double) const; // in minutes
    double waterAdd(double) const; // in minutes
    double waterDrain(double) const; // in minutes
    void print() const;
    swimmingPool(double l = 0, double w = 0, double d = 0, double fRate = 0, double dRate = 0);
private:
    double length; // in feet
    double width; // in feet
    double depth; // in feet
    double fillingRate; // in gallons per minute
    double drainingRate; // in gallons per minute
};

int main()
{
    swimmingPool myPool(75, 17, 10, 1.2, 0.25);

    myPool.print();
    cout << endl;

    cout << "Volume of swimming pool: " << myPool.fillAmountPool(750) << " cubic feet." << endl;
    cout << "Fill time: " << myPool.fillTime(750) << "min." << endl;
    cout << "Drain time: " << myPool.drainTime(10000) << "min." << endl;
    cout << "Water filled: " << myPool.waterAdd(1) << "cub.ft" << endl;
    cout << "Water drained: " << myPool.waterDrain(2) << "cub.ft" << endl;

    return 0;
}

swimmingPool::swimmingPool(double l, double w, double d, double fRate, double dRate)
{
    if(l > 0)
        length = l;
    else
        length = 0;

    if(w > 0)
        width = w;
    else
        width = 0;

    if(d > 0)
        depth = d;
    else
        depth = 0;

    if(fRate > 0)
        fillingRate = fRate;
    else
        fillingRate = 0;

    if(dRate > 0)
        drainingRate = dRate;
    else
        drainingRate = 0;
}

double swimmingPool::fillAmountPool(double amount) const
{
    return length * width * depth - amount;
}

double swimmingPool::fillTime(double amount) const
{
    return (ONE_CUBIC_FEET * (length * width * depth - amount)) / fillingRate;
}

double swimmingPool::drainTime(double amount) const
{
    return (ONE_CUBIC_FEET * (length * width * depth - amount)) / drainingRate;
}

double swimmingPool::waterAdd(double time) const
{
    return time * fillingRate;
}

double swimmingPool::waterDrain(double time) const
{
    return time * drainingRate;
}

void swimmingPool::print() const
{
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Depth: " << depth << endl;
    cout << "Fill rate: " << fillingRate << endl;
    cout << "Drain rate: " << drainingRate << endl;
}
