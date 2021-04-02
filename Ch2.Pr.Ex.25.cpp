#include <iostream>

using namespace std;

const int METRIC_TON = 2205; // in pounds

int main ()
{
    int weightBag, bags;

    cout << "Please enter the amount of rice, in pounds, in a bag: ";
    cin >> weightBag;
    cout << endl;

    bags = METRIC_TON / weightBag;

    cout << "The number of bags needed to store one metric ton rice is " << bags << endl;

    return 0;
}
