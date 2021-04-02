#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    string student_name, social_security, user_ID, password;
    string output;
    char ch = 'x';
    int l;

    infile.open("C:\\C++\\Ch7_Ex8Data.txt");

    if(!infile)
    {
        cout << "Cannot open the input file." << endl;
        return 1;
    }

    cout << "Processing " << endl;
    cout << ".........." << endl;

    infile >> student_name >> social_security >> user_ID >> password;

    l = password.length();
    password.clear();
    social_security.clear();

    for(int pos = 0; pos < l; pos++)
    {
        password.insert(pos, 1, ch);
    }

    for(int pos = 0; pos < 11; pos++)
    {
        if(pos == 3)
            social_security.insert(pos, 1, '-');
        else if(pos == 6)
            social_security.insert(pos, 1, '-');
        else
            social_security.insert(pos, 1, 'x');
    }

    cout << "Student's name: " << student_name << endl;
    cout << "Social Security Number: " << social_security << endl;
    cout << "User ID: " << user_ID << endl;
    cout << "Password: " << password << endl;

    cout << "Results" << endl;
    cout << student_name.append(" " + social_security.append(" " + user_ID.append(" " + password))) << endl;

    infile.close();

    return 0;
}
