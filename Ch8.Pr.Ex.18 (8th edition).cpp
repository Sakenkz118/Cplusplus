#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

void fill_deck(int deck[][4]);

int main()
{
    int deck_4x4[4][4] = {0};
    int duplicate[4][4] = {0};

    fill_deck(duplicate);

    return 0;
}

void fill_deck(int deck[][4])
{
    int counter[8] = {0};
    int delta[8] = {0};
    int delta_sum = 0;
    int temp, temp1;
    bool found = false;

    srand(time(0));

    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            temp = rand() % 8 + 1;
            if(counter[temp - 1] < 2)
            {
                deck[row][col] = temp;
                counter[deck[row][col] - 1]++;
            }
            cout << deck[row][col] << " ";
        }
        cout << endl;
        }

    cout << endl;

    cout << "Number: ";
    cout << "1 2 3 4 5 6 7 8" << endl;
    cout << "Occurr: ";
    for(int i = 0; i < 8; i++)
    {
        cout << counter[i] << " ";
        delta[i] = counter[i] - 2;
        delta_sum = delta_sum + delta[i];
    }
    cout << endl;
    cout << "Delta: ";
    for(int i = 0; i < 8; i++)
    {
        cout << delta[i] << " ";
        delta_sum = delta_sum + abs(delta[i]);
    }
    cout << endl;

    cout << "Delta sum: " << delta_sum << endl;

    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            if(deck[row][col] == 0)
            {
                while(!found)
                {
                    int i = 0;
                    if(counter[i] < 2)
                    {
                        deck[row][col] = counter[i] + 1;
                        counter[i]++;
                        found = true;
                    }
                    else
                    i++;
                }
            }
        }
    }

    cout << endl;

    cout << "Number: ";
    cout << "1 2 3 4 5 6 7 8" << endl;
    cout << "Occurr: ";
    for(int i = 0; i < 8; i++)
    {
        cout << counter[i] << " ";
        delta[i] = counter[i] - 2;
        delta_sum = delta_sum + delta[i];
    }
    cout << endl;
    cout << "Delta: ";
    for(int i = 0; i < 8; i++)
    {
        cout << delta[i] << " ";
        delta_sum = delta_sum + abs(delta[i]);
    }
    cout << endl;

    cout << "Delta sum: " << delta_sum << endl;


}

