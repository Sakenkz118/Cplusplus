#include <iostream>

using namespace std;

class memberType
{
public:
    void setName(string);
    void modifyName(string);
    void showName() const;
    string getName() const;

    void setMemberID(string);
    void showID() const;
    string getMemberID() const;

    void setNoBooks(int);
    void modifyNoBooks(int);
    void displayNoBooks() const;
    int getNoBooks() const;

    void setAmount(double);
    void modifyAmount(double);
    void displayAmount() const;
    double getAmount() const;

    memberType(); // default constructor
    memberType(string, string, int, double);
private:
    string personName; // first name
    string memberID;
    int noOfBooksBought;
    double amountSpent; // in USD
};

int main()
{
    memberType test("Saken","08101086", 4, 345);

    test.setMemberID("01455");
    test.showID();

    return 0;
}

memberType::memberType()
{
    personName = "";
    memberID = "";
    noOfBooksBought = 0;
    amountSpent = 0.0;
}

memberType::memberType(string name, string id, int booksCount, double amount)
{
    personName = name;
    memberID = id;
    noOfBooksBought = booksCount;
    amountSpent = amount;
}

void memberType::setName(string name)
{
    personName = name;
}

void memberType::modifyName(string name_modified)
{
    personName = name_modified;
}

void memberType::showName() const
{
    cout << "Name: " << personName << endl;
}

string memberType::getName() const
{
    return personName;
}

void memberType::setMemberID(string ID)
{
    memberID = ID;
}

void memberType::showID() const
{
    cout << "Member ID: " << memberID << endl;
}

string memberType::getMemberID() const
{
    return memberID;
}

void memberType::setNoBooks(int nBooks)
{
    noOfBooksBought = nBooks;
}

void memberType::modifyNoBooks(int modBooks)
{
    noOfBooksBought += modBooks;
}

void memberType::displayNoBooks() const
{
    cout << "No. of Books bought: " << noOfBooksBought << endl;
}

int memberType::getNoBooks() const
{
    return noOfBooksBought;
}

void memberType::setAmount(double amount)
{
    amountSpent = amount;
}

void memberType::modifyAmount(double modAmount)
{
    amountSpent += modAmount;
}

void memberType::displayAmount() const
{
    cout << "Amount spent: $" << amountSpent << endl;
}

double memberType::getAmount() const
{
    return amountSpent;
}
