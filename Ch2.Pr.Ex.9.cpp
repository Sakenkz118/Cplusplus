#include <iostream>

using namespace std;

int main ()
{
    double test1 = 0, test2 = 0, test3 = 0, test4 = 0, test5 = 0, averageTestScore = 0;

    cout << "Please enter 5 test scores separately: ";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    cout << endl;

    averageTestScore = (test1 + test2 + test3 + test4 + test5) / 5;

    cout << "The average test score is equal to " << averageTestScore << endl;


    return 0;
}
