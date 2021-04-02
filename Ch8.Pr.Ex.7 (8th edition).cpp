#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void getData(string CANDIDATES[], int VOTES[], int& total_shares);
void calculateShares(int VOTES[5], int& total_shares, double SHARES[]);
void print(string CANDIDATES[], int VOTES[], double SHARES[], int& total_shares);
string winner(string CANDIDATES[], int VOTES[]);

int main ()
{
    string candidates[5];
    int votes[5] = {0};
    double shares[5] = {0};
    int total;

    getData(candidates, votes, total);
    calculateShares(votes, total, shares);
    print(candidates, votes, shares, total);

    return 0;
}

void getData(string CANDIDATES[], int VOTES[], int& total_shares)
{
    total_shares = 0;

    cout << "Please enter (max. 5) last names and votes count for candidates: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> CANDIDATES[i] >> VOTES[i];

        total_shares = total_shares + VOTES[i];

        cout << endl;
    }
}

void calculateShares(int VOTES[5], int& total_shares, double SHARES[])
{

    for (int i = 0; i < 5; i++)
    {
       SHARES[i] = (static_cast<double>(VOTES[i])/static_cast<double>(total_shares)) * 100;
    }
}

string winner(string CANDIDATES[], int VOTES[])
{
    string WIN;
    int counter = VOTES[0];

    for (int i = 1; i < 5; i++)
    {
        if (VOTES[i] > counter)
        {
            WIN = CANDIDATES[i];
        }
    }

    return WIN;
}

void print(string CANDIDATES[], int VOTES[], double SHARES[], int& total_shares)
{
    int length;

    cout << fixed << showpoint << setprecision(2);
    cout << endl;

    cout << right;

    cout << "Candidate" <<  setw(21) << "Votes Received" <<  setw(26) << "% of Total Votes" << endl;
    cout << endl;

    for (int j = 0; j < 5; j++)
    {
        length = CANDIDATES[j].size();
        cout << CANDIDATES[j] << setw(26 - length) << VOTES[j] << setw(24) << SHARES[j] << endl;
    }

    cout << "Total" << setw(22) << total_shares << endl;
    cout << endl;
    cout << "The Winner of the Election is " << winner(CANDIDATES, VOTES) << "." << endl;
}
