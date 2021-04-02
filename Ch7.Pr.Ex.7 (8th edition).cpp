#include <iostream>

using namespace std;

const char SENTINEL = 'q';

void menu(char& operation);
void addFractions(int num1, int den1, int num2, int den2, int& num3, int& den3);
void subtractFractions(int num1, int den1, int num2, int den2, int& num3, int& den3);
void multiplyFractions(int num1, int den1, int num2, int den2, int& num3, int& den3);
void divideFractions(int num1, int den1, int num2, int den2, int& num3, int& den3);
void input(int& num1, int& den1, int& num2, int& den2);

int main()
{
    char choice;
    int numer1, denom1, numer2, denom2, numer3, denom3;

    while(choice != SENTINEL){
    menu(choice);

    switch(choice)
    {
    case '+':
        input(numer1, denom1, numer2, denom2);
        addFractions(numer1, denom1, numer2, denom2, numer3, denom3);
        cout << "Result: " << numer3 << " / " << denom3 << endl;
        cout << endl;
        cout << endl;
        break;
    case '-':
        input(numer1, denom1, numer2, denom2);
        subtractFractions(numer1, denom1, numer2, denom2, numer3, denom3);
        cout << "Result: " << numer3 << " / " << denom3 << endl;
        cout << endl;
        cout << endl;
        break;
    case '*':
        input(numer1, denom1, numer2, denom2);
        multiplyFractions(numer1, denom1, numer2, denom2, numer3, denom3);
        cout << "Result: " << numer3 << " / " << denom3;
        if(numer3 % denom3 == 0)
           cout << " or " << numer3 / denom3 << endl;
        cout << endl;
        cout << endl;
        break;
    case '/':
        input(numer1, denom1, numer2, denom2);
        divideFractions(numer1, denom1, numer2, denom2, numer3, denom3);
        cout << "Result: " << numer3 << " / " << denom3;
        if(numer3 % denom3 == 0)
           cout << " or " << numer3 / denom3 << endl;
        cout << endl;
        cout << endl;
        break;
    case 'q':
        break;
    default:
        cout << "Wrong an operation value entered. Try again!" << endl;
    }
    }
    return 0;
}

void menu(char& operation)
{
    cout << "This mini program lets the user ";
    cout << "perform arithmetic operations on fractions." << endl;

    cout << "Fractions are of the form a / b, ";
    cout << "in which a and b are integers and b != 0." << endl;

    cout << "You can select the operation (+, -, *, or /) and input ";
    cout << "the numerator and denominator of each fraction." << endl;

    cout << endl;

    cout << "Please select an operation (+, -, *, or /) or 'q' to quit: ";
    cin >> operation;
    cout << endl;
}

void input(int& num1, int& den1, int& num2, int& den2)
{
    cout << "Enter first fraction's values (a / b) separated with a space: " << endl;
    cin >> num1 >> den1;
    cout << endl;

    if(den1 == 0)
        cout << "Denominator cannot be zero! Result will be incorrect" << endl;
    else
        {
            cout << "Enter second fraction's values (c / d) separated with a space: " << endl;
            cin >> num2 >> den2;
            cout << endl;
        }

        if(den2 == 0)
           cout << "Denominator cannot be zero! Result will be incorrect" << endl;

}

void addFractions(int num1, int den1, int num2, int den2, int& num3, int& den3)
{
    if(den1 == den2)
    {
        num3 = num1 + num2;
        den3 = den1;
    }
    else if(den1 % den2 == 0)
    {
        num3 = num1 + num2 * (den1 / den2);
        den3 = den1;
    }
    else if(den2 % den1 == 0)
    {
        num3 = num2 + num1 * (den2 / den1);
        den3 = den2;
    }
    else if(den1 != den2)
    {
        den3 = den1 * den2;
        num3 = num1 * (den3 / den1) + num2 * (den3 / den2);
    }
}

void subtractFractions(int num1, int den1, int num2, int den2, int& num3, int& den3)
{
    if(den1 == den2)
    {
        num3 = num1 - num2;
        den3 = den1;
    }
    else if(den1 % den2 == 0)
    {
        num3 = num1 - num2 * (den1 / den2);
        den3 = den1;
    }
    else if(den2 % den1 == 0)
    {
        num3 = num2 - num1 * (den2 / den1);
        den3 = den2;
    }
    else
    {
        den3 = den1 * den2;
        num3 = num1 * (den3 / den1) - num2 * (den3 / den2);
    }
}

void multiplyFractions(int num1, int den1, int num2, int den2, int& num3, int& den3)
{
    num3 = num1 * num2;
    den3 = den1 * den2;
}

void divideFractions(int num1, int den1, int num2, int den2, int& num3, int& den3)
{
    num3 = num1 * den2;
    den3 = den1 * num2;
}
