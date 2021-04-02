#include <iostream>

using namespace std;

int one(int x, int y);
double two(int x, double a);

int main()
{
    int num;
    double dec;

    cout << one(2, 1) << endl;
    cout << two(7, 2) << endl;

    return 0;
}

int one(int x, int y)
{
    if (x > y)
        return x + y;
    else
        return x - 2 * y;
}
double two(int x, double a)
{
    int first;
    double z;
    cin >> z;
    z = z + a;
    first = one(6, 8);
    first = first + x;

    if (z > 2 * first)
        return z;
    else
        return 2 * first - z;

}
