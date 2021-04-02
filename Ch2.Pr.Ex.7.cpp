#include <iostream> //include statement(s)
#include <string>

using namespace std; //using namespace statement

const int SECRET = 11;
const double RATE = 12.50;

int main()
{
int num1, num2, newNum; //variable declaration
string name;
double hoursWorked, wages;


cout << "Please enter two integers separately: "; // Step e
cin >> num1 >> num2;
cout << endl;

cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl; // Step f
//executable statements

newNum = num1 * 2 + num2; // Step g

cout << "New Number: " << newNum << endl;

newNum = newNum + SECRET; // Step h

cout << "New Number after adding value of SECRET: " << newNum << endl;

cout << "Please enter the last name: "; // Step i
cin >> name;
cout << endl;

cout << "Please enter the decimal number between 0 and 70: "; // Step j
cin >> hoursWorked;

wages = RATE * hoursWorked; // Step k

cout << "Name: " << name << endl; //output the value of the variable name
cout << "Pay Rate: $" << RATE << endl; //output the value of the variable rate
cout << "Hours Worked: " << hoursWorked << endl; //output the value of the variable
                                                 //hoursWorked
cout << "Salary: $" << wages << endl; //output the value of the variable wages

cout << endl;
cout << endl;
cout << "num1 = " << num1 << ", num2 =" << num2 << ";" << " name = \"" << name << "\";" << " hoursWorked = " << hoursWorked;

return 0; //return statement

}
