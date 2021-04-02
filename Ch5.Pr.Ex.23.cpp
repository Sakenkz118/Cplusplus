#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    ifstream infile;
    string name;
    int num;
    int average;

    infile.open("c:\\C++\\Exp_5_22.txt");

    infile >> name; //Line 1

    while (infile) //Line 2
        { //Line 3
            int sum = 0; //Line 4
            int count = 0; //Line 5
            infile >> num; //Line 6; read the first number

            while (num != -999) //Line 7
                { //Line 8
                    sum = sum + num; //Line 9; update sum
                    count++; //Line 10; update count
                    infile >> num; //Line 11; read the next number
                }

            //find the average

            if (count != 0) //Line 12
                average = sum / count; //Line 13
            else //Line 14
                average = 0; //Line 15
            cout << name << " " << average << endl; //Line 16

            infile >> name; //Line 17; begin processing the next line
        }
    infile.close();

    return 0;
}
