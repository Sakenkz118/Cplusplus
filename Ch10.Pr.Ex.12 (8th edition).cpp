#include <iostream>

using namespace std;

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

int main()
{
    bookType books[100];
    string s = "Saken";

    for(int i = 0; i < 100; i++)
    {
        books[i].setISBN("PP010122");
    }

    books[10].setISBN("Saken");

    for(int i = 0; i < 100; i++)
    {
        cout << i + 1 << " ";
        books[i].displayISBN();
    }

    for(int i = 0; i < 100; i++)
    {
        if(books[i].checkISBN(s))
        {
            cout << i + 1 << " ";
            books[i].displayTitle();
        }

    }

    return 0;
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
