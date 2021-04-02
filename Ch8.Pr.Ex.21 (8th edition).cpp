#include <iostream>
#include <cmath>

using namespace std;

void generatePrime(int prime_1230[]);
void input(int& t);
bool checkPrime(int n);
void PRIME(const int prime1230[], int n);

int main()
{
    int prime[1230];
    int t;

    generatePrime(prime);
    input(t);
    PRIME(prime, t);

    return 0;
}

bool checkPrime(int n)
{
    bool isPrime = true;

    for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    return isPrime;
}

void generatePrime(int prime_1230[])
{
    int num = 0;

    for(int i = 2; i <= 10007; i++)
        {
            if(checkPrime(i) == true)
            {
                prime_1230[num] = i;
                num++;
            }
        }
}

void input(int& t)
{
    cout << "Please enter a number between 2 and 100,000,000: " << endl;
    cin >> t;
    cout << endl;

    if(t < 2)
    {
        cout << "Wrong number was entered. Result will be incorrect." << endl;
    }
}

void PRIME(const int prime1230[], int n)
{
    bool isPrime = true;

    for(int j = 1; j <= static_cast<int>(sqrt(n)); j++)
    {
        if(n % prime1230[j] == 0)
        {
            isPrime = false;
            cout << endl;
            cout << "Prime factor: " << prime1230[j] << endl;
            break;
        }
    }

    if(isPrime == true)
    {
        for(int i = 0; i < 1230; i++)
        {
            if(prime1230[i] != n)
                {
                isPrime = false;
                }
        }
    }

    if(isPrime == true)
        cout << n << " is a PRIME number." << endl;
    else if(isPrime == false)
        cout << n << " is NOT a PRIME number." << endl;
}

