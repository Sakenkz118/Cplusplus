#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    int counter = 0; //Line 1
    int num;

    ifstream infile;

    infile.open("c:\\C++\\Exp_5_20.txt");

    cout << "Processing data" << endl;

    while (counter < 4) //Line 2
        { //Line 3
            int sum = 0; //Line 4
            infile >> num; //Line 5
            while (num != -999) //Line 6
                { //Line 7
                    sum = sum + num; //Line 8
                    infile >> num; //Line 9
                } //Line 10
        cout << "Line " << counter + 1 << ": Sum = " << sum << endl; //Line 11
        counter++; //Line 12
        }
    infile.close();

    return 0;
}
