#include <iostream>
#include <cstdlib>

using namespace std;

void fill_deck(int deck[][4]);

int main()
{
    int deck_4x4[4][4] = {0};

    fill_deck(deck_4x4);

    return 0;
}

void fill_deck(int deck[][4])
{
    int check[4][4] = {0};

    for(int i = 1; i <= 8; i++)
    {
        int x1, y1;
        int x2, y2;

        x1 = rand() % 4;
        y1 = rand() % 4;
        x2 = rand() % 4;
        y2 = rand() % 4;

        if(check[x1][y1] != 1)
            deck[x1][y1] = i;
        else
        {
            x1 = rand() % 4;
            y1 = rand() % 4;
        }

        if(check[x2][y2] != 1)
            deck[x2][y2] = i;
        else
        {
            x2 = rand() % 4;
            y2 = rand() % 4;
        }

       for(int row = 0; row < 4; row++)
        {
            for(int col = 0; col < 4; col++)
                {
                    if(deck[row][col] == i)
                       check[row][col] = 1;
                }
        }
    }

    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout << deck[row][col] << " ";
        }
        cout << endl;
    }
}


