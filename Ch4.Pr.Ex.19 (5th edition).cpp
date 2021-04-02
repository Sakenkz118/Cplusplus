#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double bodyWeight;
    double wrist, waist, hip, forearm;
    double bodyFat, bodyFatPercentage;
    double A1, A2, A3, A4, A5, B;
    char gender;

    cout << "Please enter the gender (f, F or m, M): ";
    cin >> gender;
    cout << endl;

    switch (gender)
    {
    case 'f':
    case 'F':
        {
            cout << "Please enter body weight: ";
            cin >> bodyWeight;
            cout << endl;

            cout << "Wrist measured: "; // at fullest point
            cin >> wrist;
            cout << endl;

            cout << "Waist measured: "; // at navel
            cin >> waist;
            cout << endl;

            cout << "Hip measured: "; // at fullest point
            cin >> hip;
            cout << endl;

            cout << "Forearm measured: "; // at fullest point
            cin >> forearm;
            cout << endl;

            A1 = (bodyWeight * 0.732) + 8.987;
            A2 = wrist / 3.140;
            A3 = waist * 0.157;
            A4 = hip * 0.249;
            A5 = forearm * 0.434;

            B = A1 + A2 - A3 - A4 + A5;

            bodyFat = bodyWeight - B;
            bodyFatPercentage = (bodyFat * 100) / bodyWeight;

            cout << "Body Fat: " << fixed << showpoint << setprecision(2) << bodyFat << endl;
            cout << "Body fat percentage: " << fixed << showpoint << setprecision(2) << bodyFatPercentage << "%" << endl;
        }
        break;
    case 'm':
    case 'M':
        {
            cout << "Please enter body weight: ";
            cin >> bodyWeight;
            cout << endl;

            A1 = (bodyWeight * 1.082) + 94.42;

            cout << "Wrist measured: ";
            cin >> wrist;
            cout << endl;

            A2 = wrist * 4.15;
            B = A1 - A2;

            bodyFat = bodyWeight - B;
            bodyFatPercentage = (bodyFat * 100) / bodyWeight;

            cout << "Body Fat: " << bodyFat << fixed << showpoint << setprecision(2) << endl;
            cout << "Body fat percentage: " << fixed << showpoint << setprecision(2) << bodyFatPercentage << "%" << endl;
        }
        break;

    default:
        cout << "Incorrect data entered for gender!" << endl;
    }

    return 0;
}
