#include <iostream>

using namespace std;

class studentType
{
public:
    studentType();
    void set(string firstName, string lastName, int score);
    // Function to set the values of studentFName, studentLName, and testScore.
    // Postcondition: studentFName = firstName; studentLName = lastName; testScore = score;
    void print() const;
    // Function to output the values of studentFName, studentLName, and testScore.
    char Grade();
private:
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

int main()
{
    studentType student1;

    student1.set("Saken", "Dochshanov", 74);
    student1.print();

    return 0;
}

studentType::studentType()
{
    studentFName = "";
    studentLName = "";
    testScore = 0;
    grade = 'F';
}

void studentType::set(string firstName, string lastName, int score)
{
    studentFName = firstName;
    studentLName = lastName;
    testScore = score;
    grade = Grade();
}

void studentType::print() const
{
    cout << "Student's first name: " << studentFName << endl;
    cout << "Student's second name: " << studentLName << endl;
    cout << "Student's test score: " << testScore << endl;
    cout << "Student's test grade: " << grade << endl;
}

char studentType::Grade()
{
    switch(static_cast<int>(testScore) / 10)
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;

        case 7:
            grade = 'C';
            break;

        case 6:
            grade = 'D';
            break;

        default:
            grade = 'F';
    }

    return grade;
}
