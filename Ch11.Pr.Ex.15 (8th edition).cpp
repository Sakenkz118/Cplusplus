#include <iostream>
#include "pointType-lineType.h"

using namespace std;

int main()
{
    lineType testLine1(21, 3, 1, -16);
    lineType testLine2(21, 3, 1, -16);

    testLine1.printSlope();
    testLine1.lineInfo();
    testLine2.printSlope();
    testLine2.lineInfo();
    cout << endl;
    testLine1.intersectionPoint(testLine2);

    return 0;
}
