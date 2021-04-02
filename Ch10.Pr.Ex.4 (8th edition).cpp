#include <iostream>

using namespace std;

class counterType
{
public:
void setCounter(int x);
void initializeCounter();
int getCounter() const;
void incrementCounter();
void decrementCounter();
counterType();

private:
    int counter;
};

int main()
{
    counterType num;

    cout << num.getCounter() << endl;

    for(int i = 0; i < 11; i++)
    {
        num.incrementCounter();
    }

    cout << num.getCounter() << endl;

    num.initializeCounter();

    num.setCounter(-99);

    cout << num.getCounter() << endl;

    return 0;
}

void counterType::setCounter(int x)
{
    if(x > 0)
        counter = x;
    else
        counter = 0;
}

void counterType::initializeCounter()
{
    counter = 0;
}

int counterType::getCounter() const
{
    return counter;
}

void counterType::incrementCounter()
{
    counter++;
}

void counterType::decrementCounter()
{
    if(counter > 0)
        counter--;
    else
        counter = 0;
}

counterType::counterType()
{
    counter = 0;
}
