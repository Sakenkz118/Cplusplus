#include <iostream>

using namespace std;

int main ()
{
    int no_students; // the number of students in the elementary school
    double daily_calories; // the number of calories required for each student from the mixture
    double calories_nuts; // the number of calories in each pound of nuts
    double nuts, dried_fruits; // the amount of nuts and dried fruit needed for the students
    double nuts_student, dried_fruits_student; // the amount of nuts and dried fruit needed for one student

    cout << "Please enter the number of students in the elementary school: ";
    cin >> no_students;
    cout << endl;

    cout << "Enter the number of calories required for each student from the mixture: ";
    cin >> daily_calories;
    cout << endl;

    cout << "Enter the number of calories in each pound of nuts: ";
    cin >> calories_nuts;
    cout << endl;

    nuts_student = daily_calories / 1.7;
    dried_fruits_student = nuts_student * 0.7;

    nuts = nuts_student * no_students;
    dried_fruits = dried_fruits_student * no_students;

    cout << "The amount of nuts and dried fruit needed for the students: " << endl;
    cout << "Nuts: " << nuts << " pounds" << "; " << "Dried Fruits: " << dried_fruits << " pounds";
    cout << endl;

    return 0;
}
