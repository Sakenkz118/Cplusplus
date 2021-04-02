#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void getInput(double&, double&, double&);
void calculateInflation(double&, double&, double&, double&, double&);
void printResults(double, double);

int main()
{
    double itemPrice;
    double firstYear, secondYear;
    double inflationRate1, inflationRate2;

    getInput(itemPrice, firstYear, secondYear);
    calculateInflation(itemPrice, firstYear, secondYear, inflationRate1, inflationRate2);
    cout << fixed << showpoint << setprecision(2);
    printResults(inflationRate1, inflationRate2);

    return 0;
}

void getInput(double& currPrice, double& firstYearPrice, double& secondYearPrice)
{
    cout << "Please enter current price for an item: $";
    cin >> currPrice;
    cout << endl;

    cout << "Enter price for the 1st year for the item: $";
    cin >> firstYearPrice;
    cout << endl;

    cout << "Enter price for the 1st year for the item: $";
    cin >> secondYearPrice;
    cout << endl;
}

void calculateInflation(double& initialPrice, double& first, double& second, double& rate1, double& rate2)
{
    rate1 = (initialPrice - first) / initialPrice;
    rate2 = (first - second) / first;
}

void printResults(double inflation1, double inflation2)
{
    cout << "The inflation rate for 1st year: " << abs(inflation1) << ", or " << abs(inflation1 * 100) << "%" << endl;
    if (inflation1 < 0)
        cout << "The inflation is increasing." << endl;
    else if (inflation1 > 0)
        cout << "The inflation is decreasing." << endl;
    else
        cout << "No inflation." << endl;

    cout << endl;

    cout << "The inflation rate for 2nd year: " << abs(inflation2) << ", or " << abs(inflation2 * 100) << "%" << endl;

    if (inflation2 < 0)
        cout << "The inflation is increasing." << endl;
    else if (inflation2 > 0)
        cout << "The inflation is decreasing." << endl;
    else
        cout << "No inflation." << endl;
}
