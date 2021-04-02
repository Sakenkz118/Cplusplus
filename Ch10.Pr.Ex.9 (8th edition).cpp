#include <iostream>

using namespace std;

class clockType
{
public:
    void setTime(int, int, int);
    void setHours(int hours);
    void setMinutes(int minutes);
    void setSeconds(int seconds);
    void getTime(int&, int&, int&) const;
    void getHours(int& hours) const
    {
        hours = hr;
    }
    void getMinutes(int& minutes) const
    {
        minutes = min;
    }
    void getSeconds(int& seconds) const
    {
        seconds = sec;
    }
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();

private:
    int hr;
    int min;
    int sec;
};

int main()
{
    clockType testTime;
    int H, M, S;

    testTime.setHours(23);
    testTime.setMinutes(59);
    testTime.setSeconds(59);

    testTime.printTime();
    testTime.getHours(H);
    testTime.getMinutes(M);
    testTime.getSeconds(S);

    testTime.incrementSeconds();
    cout << endl;
    testTime.printTime();
    cout << endl;
    cout << H << ":" << M << ":" << S << endl;

    return 0;
}

void clockType::setTime(int hours, int minutes, int seconds)
{
    if(0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;

    if(0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if(0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::printTime() const
{
    if(hr < 10)
        cout << "0";
    cout << hr << ":";

    if(min < 10)
        cout << "0";
    cout << min << ":";

    if(sec < 10)
        cout << "0";
    cout << sec;
}
void clockType::incrementHours()
{
    hr++;
    if(hr > 23)
        hr = 0;
}

void clockType::incrementMinutes()
{
    min++;
    if(min > 59)
    {
        min = 0;
        incrementHours();
    }
}

void clockType::incrementSeconds()
{
    sec++;
    if(sec > 59)
    {
        sec = 0;
        incrementMinutes();
    }
}

void clockType::setHours(int hours)
{
    if(0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
}

void clockType::setMinutes(int minutes)
{
    if(0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
}

void clockType::setSeconds(int seconds)
{
    if(0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}
