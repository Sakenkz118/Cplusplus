#include <iostream>
#include <cmath>

using namespace std;

bool isNumPalindrome(int num);

int main ()
{
    int num;

    cout << "Please enter a non-negative number: ";
    cin >> num;
    cout << endl;

    if (num < 0)
        cout << "Negative number entered! Try again. " << endl;
    else
    {
    if (isNumPalindrome(num) == true)
        cout << num << " is a palindrome number." << endl;
    else if (isNumPalindrome(num) == false)
        cout << num << " is NOT a palindrome number." << endl;
    }
    return 0;
}


bool isNumPalindrome(int num)
{
    int pwr = 0;

    if (num < 10) //Step 1
        return true;
    else //Step 2
        {//Step 2.a
        while (num / static_cast<int>(pow(10.0, pwr)) >= 10)
        pwr++;
    while (num >= 10) //Step 2.b
        {
            int tenTopwr = static_cast<int>(pow(10.0, pwr));
    if ((num / tenTopwr) != (num % 10))
        return false; //Step 2.b.1
    else //Step 2.b.2
        {
            num = num % tenTopwr; //Step 2.b.2.1
            num = num / 10; //Step 2.b.2.1
            pwr = pwr - 2; //Step 2.b.2.
        }
        }//end while
        return true;
}//end else
}
