#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

void input(string& NUM1, string& NUM2);
string sum(string& NUM1, string& NUM2);

int main()
{
    string num1, num2;
    string sum;

    input(num1, num2);

    return 0;
}

void input(string& NUM1, string& NUM2)
{
    cout << "Please enter two positive numbers to add: " << endl;
    cin >> NUM1 >> NUM2;

    reverse(NUM1.begin(), NUM1.end());
    reverse(NUM2.begin(), NUM2.end());

    cout << "NUM1 = " << NUM1 << endl;
    cout << "NUM2 = " << NUM2 << endl;
}

string sum(string& NUM1, string& NUM2)
{
    int len1, len2;

    len1 = NUM1.length();
    len2 = NUM2.length();

}
