#include <iostream>

using namespace std;

class productType //Line 1
{ //Line 2
public: //Line 3
    productType(); //Line 4
    productType(int, double, double); //Line 5
    productType(string, int, double, double); //Line 6
    productType(string, string, string, int, double, double); //Line 7

    void set(string, string, string, int, double, double); //Line 8
    void print() const; //Line 9
    void setQuantitiesInStock(int x); //Line 10
    void updateQuantitiesInStock(int x); //Line 11
    int getQuantitiesInStock() const; //Line 12
    void setPrice(double x); //Line 13
    double getPrice() const; //Line 14
    void setDiscount(double d); //Line 15
    double getDiscount() const; //Line 16

private: //Line 17
    string productName; //Line 18
    string id; //Line 19
    string manufacturer; //Line 20
    int quantitiesInStock; //Line 21
    double price; //Line 22
    double discount; //Line 23
}; //Line 24

int main()
{
    productType tv;
    tv.set("LCD TV","KDL49", "Sony", 1, 49, 5.7);

    tv.setQuantitiesInStock(10);
    tv.updateQuantitiesInStock(6);
    tv.setPrice(79);
    tv.setDiscount(0);
    tv.print();
    cout << tv.getDiscount() << endl;
    cout << tv.getPrice() << endl;

    return 0;
}

productType::productType()
{
    productName = "";
    id = "";
    manufacturer = "";
    quantitiesInStock = 0;
    price = 0.0;
    discount = 0.0;
}

productType::productType(int qStock, double p, double disc)
{
    productName = "";
    id = "";
    manufacturer = "";

    if(qStock > 0)
        quantitiesInStock = qStock;
    else
        quantitiesInStock = 0;

    if(p > 0)
        price = p;
    else
        price = 0;

    if(disc > 0)
        discount = disc;
    else
        discount = 0;
}

productType::productType(string ID, int qStock, double p, double disc)
{
    productName = "";
    id = ID;
    manufacturer = "";

    if(qStock > 0)
        quantitiesInStock = qStock;
    else
        quantitiesInStock = 0;

    if(p > 0)
        price = p;
    else
        price = 0;

    if(disc > 0)
        discount = disc;
    else
        discount = 0;
}

productType::productType(string Name, string ID, string Manufacturer, int qStock, double p, double disc)
{
    productName = Name;
    id = ID;
    manufacturer = Manufacturer;

    if(qStock > 0)
        quantitiesInStock = qStock;
    else
        quantitiesInStock = 0;

    if(p > 0)
        price = p;
    else
        price = 0;

    if(disc > 0)
        discount = disc;
    else
        discount = 0;
}

void productType::set(string Name, string ID, string Manufacturer, int qStock, double p, double disc)
{
    productName = Name;
    id = ID;
    manufacturer = manufacturer;

    if(qStock > 0)
        quantitiesInStock = qStock;
    else
        quantitiesInStock = 0;

    if(p > 0)
        price = p;
    else
        price = 0;

    if(disc > 0)
        discount = disc;
    else
        discount = 0;
}

void productType::print() const
{
    cout << productName << " " << id << " " << manufacturer;
    cout << " " << quantitiesInStock << " " << price << " " << discount << endl;
}

void productType::setQuantitiesInStock(int x)
{
    quantitiesInStock = x;
}

void productType::updateQuantitiesInStock(int x)
{
    quantitiesInStock += x;
}

int productType::getQuantitiesInStock() const
{
    return quantitiesInStock;
}

void productType::setPrice(double x)
{
    price = x;
}

double productType::getPrice() const
{
    return price;
}

void productType::setDiscount(double d)
{
    discount = d;
}

double productType::getDiscount() const
{
    return discount;
}
