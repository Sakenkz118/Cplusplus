#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
    double balanceCurrent, balanceAfter, serviceCharge = 0;
    double withdrawal = 0;
    char answer = 0;
    ifstream inData;
    ofstream outData;

    inData.open("c:\\C++\\Ch4_Ex16_Data.txt");
    outData.open("c:\\C++\\Ch4_Ex16_Output.txt");

    inData >> balanceCurrent >> withdrawal;

    cout << "Inputs: " << balanceCurrent << ", " << withdrawal << endl; // checking input(s)

    if (withdrawal <= 500)
    {
        if (balanceCurrent <= 0)
            {
                cout << "ATM cannot process the request!" << endl;
                balanceAfter = balanceCurrent;
            }
        else if (balanceCurrent > 0 && balanceCurrent < withdrawal)
            {
                cout << "Processing Data" << endl;
                cout << "The balance is insufficient. ";
                cout << "Service charge of $25.00 will apply. " << endl;
                cout << endl;
                cout << "Would you like to proceed?(y or n): " ;
                cin >> answer;
                cout << endl;
            }

    switch (answer)
    {
     case 'y':
         {
             if (withdrawal <= 500)
                {
                    if (withdrawal > 300)
                    {
                        serviceCharge = (withdrawal - 300) * 0.04 + 25.00;
                        balanceAfter = balanceCurrent - (withdrawal + serviceCharge + 25.00);
                    }
             else
                {
                    serviceCharge = 25.00;
                    balanceAfter = balanceCurrent - (withdrawal + 25.00);
                }
         }
         break;
     case 'n':
         {
             balanceAfter = balanceCurrent;
             serviceCharge = 0;
         }
         break;

     default:
        cout << "Invalid input!" << endl;

    }
    }
    }
    else if (withdrawal > 500)
    {
        cout << "The withdrawal limit exceeded!" << endl;
        balanceAfter = balanceCurrent;

    }

    outData << "The balance before: $" << fixed << showpoint << setprecision(2) << balanceCurrent << endl;
    outData << "The balance after: $" << fixed << showpoint << setprecision(2) << balanceAfter << endl;
    outData << "The service charge: $" << fixed << showpoint << setprecision(2) << serviceCharge << endl;

    cout << "Outputs: " << fixed << showpoint << setprecision(2) << balanceCurrent << ", " << balanceAfter
         << ", " << serviceCharge << endl; // checking output(s)

    inData.close();
    outData.close();

    return 0;
}
