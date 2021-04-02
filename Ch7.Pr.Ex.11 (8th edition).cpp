#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string word;
    int sum = 0;
    int length;

    cout << "Please enter a string: ";
    cin >> word;
    cout << endl;

    length = word.length();

    for(int i = 0; i < length; i++)
    {
        cout << static_cast<int>(word[i]) << " + ";
        sum = sum + word[i];
    }

    cout << " = " << sum << endl;

    return 0;
}
