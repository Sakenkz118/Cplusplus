#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void longestPipe (double width_1, double width_2, double& pipeLength, double& theta);

int main ()
{
    double width1, width2;
    double pipeMaxLength;
    double angle;

    cout << "Please enter the width of the first hallway (in ft.): ";
    cin >> width1;
    cout << endl;

    cout << "Please enter the width of the second hallway (in ft.): ";
    cin >> width2;
    cout << endl;

    longestPipe (width1, width2, pipeMaxLength, angle);
    cout << endl;

   // cout << fixed << showpoint << setprecision(0);

    cout << "Maximum pipe length (in ft.): " << pipeMaxLength << endl;
    cout << "Angle: " << angle << endl;

    return 0;
}

void longestPipe (double width_1, double width_2, double& pipeLength, double& theta)
{
    double AB = width_1;
    double BC = width_2;
    double maxLength = 1000;
    double maxAngle;

    for (theta = 0.1; theta < 1.5708; theta = theta + 0.001)
    {
        pipeLength = (width_1 / sin(theta)) + (width_2 / cos(theta));
        if (maxLength > pipeLength)
            {
            maxLength = pipeLength;
            maxAngle = theta;
            }
    }
    pipeLength = maxLength;
    theta = maxAngle;
}
