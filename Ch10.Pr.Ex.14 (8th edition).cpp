#include <iostream>
#include <iomanip>

using namespace std;

const double ANNUAL_MEMBERSHIP_FEE = 10.00; // in USD
const double DISCOUNT = 5; // in %

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

class bookType
{
public:
    void displayTitle() const;
    void setTitle(string);
    bool checkTitle(string) const;

    void showStock() const;
    void setStock(int);
    void updateStock(int);
    int getStock() const;

    void displayPublisher() const;
    void setPublisher(string);
    bool checkPublisher(string) const;

    void displayISBN() const;
    void setISBN(string);
    bool checkISBN(string) const;
    string getISBN() const;

    void displayPrice() const;
    void setPrice(double);
    void updatePrice(double);
    double getPrice() const;

    void displayAuthors(string []) const;
    void setAuthors(string []);

    bookType();
    bookType(string Title, string Authors[], string Publisher, string ISBN_new, double price_new, int stockCount, int authorsCount);

private:
    string title;
    string authors[4];
    string publisher;
    string ISBN;
    double price;
    int noOfCopiesInStock;
    int noOfAuthors;
};

void showSelection();

int main()
{
    bookType bookstore_lib[1000]; // up to 1,000 book titles
    memberType bookstore_members[500]; // up to 500 members

    double total_sales_made = 0; // total sales, in USD
    int total_books_sold = 0; // count books sold
    int choice;
    int i;
    string name;

    showSelection();

    // Assume that hereafter every customer is member of a bookstore for simplicity.
    do
    {
        i = 0;
        cout << "Please enter your name as in ID document: ";
        cin >> name;
        cout << endl;
        bookstore_members[i].setName(name);
        bookstore_members[i].showName();
        cout << "Choice: ";
        cin >> choice;
        i++;

    } while(choice != -99);

    return 0;
}

void showSelection()
{
    cout << "....Welcome to the Taraz's finest bookstore BUKINIST...." << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "We have long history of record for selling books from variety of genres." << endl;
    cout << "Also provide customers with membership schemes which gives 5% discount on every purchase made." << endl;
    cout << "Discount system is cumulative, for every 11th purchase we average your last 10 purchases and provide it as discount!" << endl;
    cout << "Hurry up as the stock amount is limited." << endl;
    cout << endl;
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

void bookType::displayTitle() const
{
    cout << "Title: " << title << endl;
}

void bookType::setTitle(string Title)
{
    title = Title;
}

bool bookType::checkTitle(string Title) const
{
    return title == Title;
}

void bookType::showStock() const
{
    cout << "Book count in Stock: " << noOfCopiesInStock << endl;
}

void bookType::setStock(int stockCount)
{
    noOfCopiesInStock = stockCount;
}

void bookType::updateStock(int stockUpd)
{
    noOfCopiesInStock += stockUpd;
}

int bookType::getStock() const
{
    return noOfCopiesInStock;
}

void bookType::displayPublisher() const
{
    cout << "Publisher: " << publisher << endl;
}

void bookType::setPublisher(string Publisher)
{
    publisher = Publisher;
}

bool bookType::checkPublisher(string Publisher) const
{
    return publisher == Publisher;
}

void bookType::displayISBN() const
{
    cout << "ISBN: " << ISBN << endl;
}

void bookType::setISBN(string ISBN_new)
{
    ISBN = ISBN_new;
}

bool bookType::checkISBN(string ISBN_check) const
{
    return ISBN == ISBN_check;
}

string bookType::getISBN() const
{
    return ISBN;
}

void bookType::displayPrice() const
{
    cout << "Price: $" << price << endl;
}

void bookType::setPrice(double price_new)
{
    price = price_new;
}

void bookType::updatePrice(double priceUpd)
{
    price += priceUpd;
}

double bookType::getPrice() const
{
    return price;
}

void bookType::displayAuthors(string []) const
{
    for(int i = 0; i < noOfAuthors; i++)
    {
        cout << authors[i] << endl;
    }
}

void bookType::setAuthors(string Authors[])
{
    for(int i = 0; i < noOfAuthors; i++)
    {
        cin >> Authors[i];
    }
}

bookType::bookType()
{
    title = "";
    for(int i = 0; i < 4; i++)
        authors[i] = "";
    publisher = "";
    ISBN = "";
    price = 0.0;
    noOfCopiesInStock = 0;
    noOfAuthors = 0;
}

bookType::bookType(string Title, string Authors[], string Publisher, string ISBN_new, double price_new, int stockCount, int authorsCount)
{
    title = Title;
    authors[authorsCount];
    publisher = Publisher;
    ISBN = ISBN_new;
    price = price_new;
    noOfCopiesInStock = stockCount;
    noOfAuthors = authorsCount;
}
