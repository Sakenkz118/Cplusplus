#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void convert_names(string& name, ifstream& inFile);

int main()
{
    ifstream infile;
    string name1;

    convert_names(name1, infile);

    return 0;
}

void convert_names(string& name, ifstream& inFile)
{
    string full_name, last_name, rest_name;
    char ch;
    int len, comma, i;

    inFile.open("C:\\Users\\Saken\\Documents\\C++\\Ch7_Ex9Data.txt");

    if(!inFile)
    {
        cout << "Cannot open a file. " << endl;
    }

    while(!inFile.eof())
    {
        do
        {
            inFile.get(ch);
            full_name = full_name + ch;
        }
        while(ch != '\n');

        len = full_name.length();
        full_name.erase(len - 1, 1);
//        cout << full_name << endl;

        len = full_name.length();
        comma = full_name.find(",");
        last_name = full_name.substr(0, comma);
//        cout << "Last name: " << last_name << endl;
        rest_name = full_name.substr(comma + 2, len - comma);
//        cout << "Rest name(s): " << rest_name << endl;

        full_name.erase();
        full_name = rest_name + " " + last_name;
//        cout << "Final: ";
        cout << full_name << endl;

        full_name.clear();
        last_name.clear();
        rest_name.clear();
    }

    inFile.close();
}
