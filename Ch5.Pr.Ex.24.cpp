#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    ifstream infile;
    int sum, num, ID;
    char ch;
    string name;

    infile.open("c:\\C++\\Exp_5_23.txt");

    infile >> ID; //Line 1
    while (infile) //Line 2
        { //Line 3
            infile.get(ch); //Line 4
            getline(infile, name); //Line 5
            sum = 0; //Line 6
            infile >> num; //Line 7; read the first number
            while (num != -999) //Line 8
                { //Line 9
                    sum = sum + num; //Line 10; update sum
                    infile >> num; //Line 11; read the next number
                }

            cout << "Name: " << name << ", Votes: " << sum << endl; //Line 12

            infile >> ID; //Line 13; begin processing the next line
}
    infile.close();

    return 0;
}
