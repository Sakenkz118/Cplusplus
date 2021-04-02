#include <iostream> //include statement(s)
#include <string>

using namespace std; //using namespace statement

int main()
{
double studyHours; //variable declaration
string name;

cout << "Please enter your name and studied hours separated with space" << endl;
cin >> name >> studyHours;

cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << "hours for the exam." << endl; //executable statements

return 0; //return statement
}
