#include <iostream>
#include <string>

using namespace std;

class romanType
{
public:
    void getRoman(); // step a.
    void print() const; // step c.
    int convert(); // step b.

    romanType(); // default constructor

private:
    int ArabicNumeral;
    string RomanNumeral;
};

int main()
{
    romanType roman2num;

    roman2num.getRoman();
    roman2num.print();

    return 0;
}

void romanType::getRoman()
{
    string roman;

    cout << "Please enter a Roman numeral to convert: ";
    cin >> roman;
    cout << endl;

    RomanNumeral = roman;
    ArabicNumeral = convert();
}

void romanType::print() const
{
    int choice;

    cout << "Please choose format to display: " << endl;
    cout << "1: Roman Numeral" << endl;
    cout << "2: Arabic Numeral" << endl;
    cout << "Choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
       cout << "Entered Roman numeral is " << RomanNumeral << endl;
       break;
    case 2:
        cout << "Converted value is " << ArabicNumeral << endl;
        break;
    default:
        cout << "Wrong input entered!" << endl;
        break;
    }
}

int romanType::convert()
{
    int length;

    length = RomanNumeral.length();

    for(int i = length - 1; i >= 0; i--)
    {
        switch(RomanNumeral[i])
        {
        case 'M':
            ArabicNumeral += 1000;
            break;
        case 'D':
            ArabicNumeral+=500;
            break;
        case 'C':
            if((RomanNumeral[i + 1] == 'M') || (RomanNumeral[i + 1] == 'D'))
                ArabicNumeral-=100;
            else
                ArabicNumeral+=100;
            break;
        case 'L':
            if((RomanNumeral[i + 1] == 'M') || (RomanNumeral[i + 1] == 'D') || (RomanNumeral[i + 1] == 'C'))
                ArabicNumeral-=50;
            else
                ArabicNumeral+=50;
            break;
        case 'X':
            if((RomanNumeral[i + 1] == 'M') || (RomanNumeral[i + 1] == 'D') || (RomanNumeral[i + 1] == 'C') || (RomanNumeral[i + 1] == 'L'))
                ArabicNumeral-=10;
            else
                ArabicNumeral+=10;
            break;
        case 'V':
            if((RomanNumeral[i + 1] == 'M') || (RomanNumeral[i + 1] == 'D') || (RomanNumeral[i + 1] == 'C') || (RomanNumeral[i + 1] == 'L') || (RomanNumeral[i + 1] == 'X'))
                ArabicNumeral-=5;
            else
                ArabicNumeral+=5;
            break;
        case 'I':
            if((RomanNumeral[i + 1] == 'M') || (RomanNumeral[i + 1] == 'D') || (RomanNumeral[i + 1] == 'C') || (RomanNumeral[i + 1] == 'L') || (RomanNumeral[i + 1] == 'X') || (RomanNumeral[i + 1] == 'V'))
                ArabicNumeral-=1;
            else
                ArabicNumeral+=1;
            break;
        default:
            ArabicNumeral+=0;
            break;
        }
    }

    return ArabicNumeral;
}

romanType::romanType()
{
    ArabicNumeral = 0;
    RomanNumeral = "";
}
