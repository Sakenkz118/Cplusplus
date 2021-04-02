#include <iostream>
#include <iomanip>

using namespace std;

void displayInfo();
void getInfo(char&, int&, int&);
void calculateMembershipCost (char, int, int);

int main ()
{
    char seniorMember;
    int noOfMonths;
    int noOfSessions;

    displayInfo();

    do
    {
        getInfo(seniorMember, noOfMonths, noOfSessions);
        cout << fixed << showpoint << setprecision(2);
        calculateMembershipCost(seniorMember, noOfMonths, noOfSessions);
    } while (seniorMember == 'y' || seniorMember == 'Y' || seniorMember == 'n' || seniorMember == 'N');

    return 0;
}

void displayInfo()
{
    cout << "Welcome to Saken Fitness Center." << endl;
    cout << "We are the best in our field!" << endl;
    cout << "For $1000 you receive access to the state-of-the-art facilities all year around." << endl;
    cout << "Our fitness center also provides discounts as part of the loyalty program." << endl;
    cout << "For subscriptions paid in advance (12m.+) will get 15% discount." << endl;
    cout << "Get 20% discount on personal training sessions if more than 5 sessions are bought and paid for." << endl;
    cout << endl;
}

void getInfo(char& answer, int& months, int& sessions)
{
    cout << "Please spend time to answer the following questions. " << endl;
    cout << "This will give us chance to provide you better offers currently available." << endl;
    cout << endl;

    cout << "Are you a senior citizen (y, Y or n, N): ";
    cin >> answer;
    cout << endl;

    cout << "How many months were already been paid in advance: ";
    cin >> months;
    cout << endl;

    cout << "If personal training are taken. Provide how many sessions paid and bought: ";
    cin >> sessions;
    cout << endl;
}

void calculateMembershipCost(char response, int m, int s)
{
    double membershipCost = 0;

    switch(response)
    {
        case 'y':
        case 'Y':
            if (m <= 12)
                membershipCost = 0.7 * (1000 * (static_cast<double>(m) / 12.0));
            else if (m > 12)
                membershipCost = 0.7 * (1000 * (static_cast<double>(m) / 12.0) * 0.85);
            if (s <= 5)
                membershipCost = membershipCost + 50 * s;
            else if (s > 5)
                membershipCost = membershipCost + 50 * s * 0.8;
            break;
        case 'n':
        case 'N':
            if (m <= 12)
                membershipCost = 1000 * (static_cast<double>(m) / 12.0);
            else if (m > 12)
                membershipCost = 1000 * (static_cast<double>(m) / 12.0) * 0.85;
            if (s <= 5)
                membershipCost = membershipCost + 50 * s;
            else if (s > 5)
                membershipCost = membershipCost + 50 * s * 0.8;
            break;
        default:
            cout << "Wrong input entered!" << endl;
    }

    cout << "Total membership cost: $" << membershipCost << endl;
}
