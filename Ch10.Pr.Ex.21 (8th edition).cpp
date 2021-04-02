#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class bankAccount
{
public:
    void setParameters(string name, int accNo, string accType, double Balance, double rate);
    // Function to set account parameters as formal parameters
    // Postcondition: holderName = name, accountNumber = accNo, accountType = accType,
    // balance = Balance, interestRate = rate

    void setName(string name);
    // Function to set holder's name
    // Postcondition: Holder's name is set as holderName = name

    string getName() const;
    // Function to return holder's name
    // Postcondition: holder's name is returned

    void setAccountNo(int AccNo);
    // Function to set account number as given by formal parameter
    // Postcondition: account number is set as accountNumber = AccNo

    int getAccountNo() const;
    // Function to return account number
    // Postcondition: account number is returned

    void setAccountType(string accType);
    // Function to set account type as given by formal parameter
    // Postcondition: account type is set as accountType = accType

    string getAccountType() const;
    // Function to return account type
    // Postcondition: account type is returned

    void setBalance(double b);
    // Function to set account balance as given by formal parameter
    // Postcondition: balance is set as balance = b

    double getBalance() const;
    // Function to return account balance
    // Postcondition: account balance is returned

    void setAccountRate(double rate);
    // Function to set account rate as given by formal parameter
    // Postcondition: rate is set as interestRate = rate

    double getAccountRate() const;
    // Function to return account rate
    // Postcondition: account rate is returned

    void printAccountInfo() const;
    // Function to display general info of an account
    // Postcondition: display of info

    bankAccount(); // default constructor
    bankAccount(string, int); // constructor with default parameters for account type, balance, and rate
    bankAccount(string, int, string, double, double); // constructor with parameters

private:
    string holderName;
    int accountNumber;
    string accountType;
    double balance;
    double interestRate;
};

int main()
{
    bankAccount KaspiBank[10];

    for(int i = 0; i < 10; ++i)
    {
        KaspiBank[i].setName("Client");
        KaspiBank[i].setAccountType("saving");
        KaspiBank[i].setAccountNo(rand() % 100);
        KaspiBank[i].setBalance(rand() % 10000 + rand() * 0.01);
        KaspiBank[i].setAccountRate(rand() % 10 / 100.00);
    }

    for(int i = 0; i < 10; ++i)
    {
        KaspiBank[i].printAccountInfo();
        cout << endl;
    }

    return 0;
}

bankAccount::bankAccount()
{
    holderName = "";
    accountNumber = 0;
    accountType = "";
    balance = 0.0;
    interestRate = 0.0;
}

bankAccount::bankAccount(string name, int accNo)
{
    holderName = name;
    accountNumber = accNo;
    accountType = "checking";
    balance = 0.0;
    interestRate = 0.0;
}

bankAccount::bankAccount(string name, int accNo, string accType, double bal, double rate)
{
    holderName = name;
    if(accNo > 0)
        accountNumber = accNo;
    else
        accountNumber = 0;

    if(accType == "checking" || accType == "saving")
        accountType = accType;
    else
        accountType = "";

    if(bal > 0)
        balance = bal;
    else
        balance = 0;

    if(rate > 0)
        interestRate = rate;
    else
        interestRate = 0;
}

void bankAccount::setParameters(string name, int accNo, string accType, double Balance, double rate)
{
    holderName = name;

    if(accNo > 0)
        accountNumber = accNo;
    else
        accountNumber = 0;

    if(accType == "checking" || accType == "saving")
        accountType = accType;
    else
        accountType = "";

    if(Balance > 0)
        balance = Balance;
    else
        balance = 0;

    if(rate > 0)
        interestRate = rate;
    else
        interestRate = 0;
}

void bankAccount::setName(string name)
{
    holderName = name;
}

string bankAccount::getName() const
{
    return holderName;
}

void bankAccount::setAccountNo(int AccNo)
{
    if(AccNo > 0)
        accountNumber = AccNo;
    else
        accountNumber = 0;
}

int bankAccount::getAccountNo() const
{
    return accountNumber;
}

void bankAccount::setAccountType(string accType)
{
    if(accType == "checking" || accType == "saving")
        accountType = accType;
    else
        accountType = "";
}

string bankAccount::getAccountType() const
{
    return accountType;
}

void bankAccount::setBalance(double b)
{
    if(b > 0)
        balance = b;
    else
        balance = 0;
}

double bankAccount::getBalance() const
{
    return balance;
}

void bankAccount::setAccountRate(double rate)
{
    if(rate > 0)
        interestRate = rate;
    else
        interestRate = 0;
}

double bankAccount::getAccountRate() const
{
    return interestRate;
}

void bankAccount::printAccountInfo() const
{
    cout << "Holder's name: " << holderName << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Account type: " << accountType << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Balance: $" << balance << endl;
    cout << "Account interest rate: " << interestRate << " or " << interestRate * 100 << "%" << endl;
}
