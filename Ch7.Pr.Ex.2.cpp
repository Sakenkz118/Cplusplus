#include <iostream>
#include <string>
using namespace std;
void getScore(int& score);
string calculateGrade(int score);
int main()
{
int courseScore;
cout << "Line 1: Based on the course score, \n"
<< " this program computes the "
<< "course grade." << endl; //Line 1
getScore(courseScore); //Line 2
cout << "Line 7: Your grade for the course is " << calculateGrade(courseScore); //Line 3

return 0;
}
void getScore(int& score)
{
cout << "Line 4: Enter course score: "; //Line 4
cin >> score; //Line 5
cout << endl << "Line 6: Course score is "
<< score << endl; //Line 6
}
string calculateGrade(int cScore)
{
if (cScore >= 90) //Line 8
return "A.";
else if (cScore >= 80)
return "B.";
else if(cScore >= 70)
return "C.";
else if (cScore >= 60)
return "D.";
else
return "F.";
}

