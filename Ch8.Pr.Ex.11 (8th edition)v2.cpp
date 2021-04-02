#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char num1[20] = {0};
    char num2[20] = {0};
    int len1, len2;
    int temp1, temp2;

    char sum[20] = {0};

    cout << "Please enter two positive numbers to add: " << endl;
    cin >> num1 >> num2;
    cout << endl;

    cout << "Entered numbers are " << num1 << " and " << num2 << endl;

    len1 = strlen(num1);
    len2 = strlen(num2);

    cout << "Length of num1 is " << len1 << endl;
    cout << "Length of num2 is " << len2 << endl;
    cout << endl;

    temp1 = len1;
    temp2 = len2;

    for(int i = 19; i >= 20 - len1; i--)
        {
            num1[i] = num1[temp1 - 1];
            num1[temp1 - 1] = 0;
            temp1--;
        }

    cout << endl;

    for(int i = 19; i >= 20 - len2; i--)
        {
            num2[i] = num2[temp2 - 1];
            num2[temp2 - 1] = 0;
            temp2--;
        }
/*
    for(int j = 19; j >= 20 - len1; j--)
        cout << num1[j];

    cout << endl;

    for(int j = 19; j >= 20 - len2; j--)
        cout << num2[j];

    cout << endl;
*/
    cout << "Total sum of num1 and num2: " << endl;

    int carry = 0;

    for(int k = 19; k >= 0; k--)
    {
        if(((static_cast<int>(num1[k]) + static_cast<int>(num2[k])) - 96) >= 10)
            carry = 1;
        carry = 0;

        if(((static_cast<int>(num1[k]) + static_cast<int>(num2[k])) - 96) <= 9 && ((static_cast<int>(num1[k]) + static_cast<int>(num2[k])) - 96) >= 0)
            sum[k] = (static_cast<int>(num1[k]) + static_cast<int>(num2[k])) - 48 + carry;
        else if(((static_cast<int>(num1[k]) + static_cast<int>(num2[k])) - 96) >= 10)
        {
            sum[k] = (static_cast<int>(num1[k]) + static_cast<int>(num2[k])) - 58;
            num1[k - 1] = static_cast<char>(static_cast<int>(num1[k - 1]) + 1);
        }
        else
        {
            if(len1 > len2)
            {
                if((static_cast<int>(sum[k - 1]) + carry) != 58)
                   sum[k - 1] = static_cast<char>(static_cast<int>(sum[k - 1]) + carry);
                else
                   sum[k - 1] = static_cast<char>(static_cast<int>(sum[k - 1]) + carry - 10);
                sum[k] = num1[k];

            }
            else if(len1 < len2){
                sum[k] = static_cast<char>(static_cast<int>(sum[k - 1])+ carry);
                sum[k] = num2[k];
            }
        }
    }

    for(int k = 0; k <= 19; k++)
        cout << sum[k];

    cout << endl;

    return 0;
}
