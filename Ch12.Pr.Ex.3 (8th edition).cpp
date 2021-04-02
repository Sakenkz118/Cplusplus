#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void getData(string *CANDIDATES, int *VOTES, int& total_shares);
void calculateShares(int *VOTES, int& total_shares, double *SHARES);
void print(string *CANDIDATES, int *VOTES, double *SHARES, int& total_shares);
string winner(string *CANDIDATES, int *VOTES);

int count_canditates;

int main()
{
    cout << "How many candidates are participating?: ";
    cin >> count_canditates;
    cout << endl;

    string *candidates = new string[count_canditates];
    int *votes = new int[count_canditates];
    double *shares = new double[count_canditates];
    int total;

    getData(candidates, votes, total);
    calculateShares(votes, total, shares);
    print(candidates, votes, shares, total);

    return 0;
}

void getData(string *CANDIDATES, int *VOTES, int& total_shares)
{
    total_shares = 0;

    cout << "Please enter last names and votes count for candidates: " << endl;

    for (int i = 0; i < count_canditates; i++)
    {
        cin >> CANDIDATES[i] >> VOTES[i];

        total_shares = total_shares + VOTES[i];

        cout << endl;
    }
}

void calculateShares(int *VOTES, int& total_shares, double *SHARES)
{

    for (int i = 0; i < count_canditates; i++)
    {
       SHARES[i] = (static_cast<double>(VOTES[i])/static_cast<double>(total_shares)) * 100;
    }
}

string winner(string *CANDIDATES, int *VOTES)
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

void print(string *CANDIDATES, int *VOTES, double *SHARES, int& total_shares)
{
    int length;

    cout << fixed << showpoint << setprecision(2);
    cout << endl;

    cout << right;

    cout << "Candidate" <<  setw(21) << "Votes Received" <<  setw(26) << "% of Total Votes" << endl;
    cout << endl;

    for (int j = 0; j < count_canditates; j++)
    {
        length = CANDIDATES[j].size();
        cout << CANDIDATES[j] << setw(26 - length) << VOTES[j] << setw(24) << SHARES[j] << endl;
    }

    cout << "Total" << setw(21) << total_shares << endl;
    cout << endl;
    cout << "The Winner of the Election is " << winner(CANDIDATES, VOTES) << "." << endl;
}
