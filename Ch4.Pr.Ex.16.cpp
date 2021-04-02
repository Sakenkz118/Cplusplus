#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double basePriceColonial, basePriceSplitEntry, basePriceSingleStory; // in USD
    double finishedAreaColonial, finishedAreaSplitEntry, finishedAreaSingleStory; // in square feet
    double a, b, c, leastPrice;

    cout << "Enter base prices for colonial, split-entry, and single-story: $" << endl;
    cin >> basePriceColonial >> basePriceSplitEntry >> basePriceSingleStory;
    cout << endl;

    cout << "Enter total area, in sq. feet, for colonial, split-entry, and single-story: " << endl;
    cin >> finishedAreaColonial >> finishedAreaSplitEntry >> finishedAreaSingleStory;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    a = basePriceColonial / finishedAreaColonial;
    b = basePriceSplitEntry / finishedAreaSplitEntry;
    c = basePriceSingleStory / finishedAreaSingleStory;

    if (b < a && c < b)
        cout << "Single-story is the cheapest." << endl;
        else if (a < b && c > b)
            cout << "Colonial is the cheapest." << endl;
        else if (b < a && c > a)
            cout << "Split-entry is the cheapest." << endl;
        else if (b < a && a > c && b < c)
            cout << "Split-entry is the cheapest." << endl;
        else if (b > a && a < c && b < c)
            cout << "Colonial is the cheapest." << endl;
        else
            cout << "All prices are equal!" << endl;

    return 0;
}

