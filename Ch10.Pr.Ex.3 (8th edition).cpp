#include <iostream>

using namespace std;

class houseType
{
public:
    void set(string, int, int, int, int, int, double, double);
    void print() const;
    void setStyle(string);
    string getStyle() const;
    void setNumOfBedrooms(int);
    int getNumOfBedrooms() const;
    void setNumOfBathrooms(int);
    int getNumOfBathrooms() const;
    void setNumOfCarsGarage(int);
    int getNumOfCarsGarage() const;
    void setYearBuilt(int);
    int getYearBuilt() const;
    void setFinishedSquareFootage(int);
    int getFinishedSquareFootage() const;
    void setPrice(double);
    double getPrice() const;
    void setTax(double);
    double getTax() const;

    houseType();

private:
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;
};

int main()
{
    houseType newHouse;

    newHouse.print();
    cout << endl;
    newHouse.set("Monolit", 1, 2, 3, 4, 5, 6, 7);
    newHouse.print();
    newHouse.setPrice(1000);
    newHouse.setNumOfBathrooms(99);
    cout << newHouse.getNumOfBathrooms() << endl;
    newHouse.print();

    return 0;
}

houseType::houseType()
{
    style = "";
    numOfBedrooms = 0;
    numOfBathrooms = 0;
    numOfCarsGarage = 0;
    yearBuilt = 0;
    finishedSquareFootage = 0;
    price = 0;
    tax = 0;
}

void houseType::set(string Style, int nBedrooms, int nBathrooms, int nCarsGarage,
                    int YearBuilt, int finSqFoot, double Price, double Tax)
{
    style = Style;
    numOfBedrooms = nBedrooms;
    numOfBathrooms = nBathrooms;
    numOfCarsGarage = nCarsGarage;
    yearBuilt = YearBuilt;
    finishedSquareFootage = finSqFoot;
    price = Price;
    tax = Tax;
}

void houseType::print() const
{
    cout << "Style: " << style << endl;
    cout << "Bedrooms: " << numOfBedrooms << endl;
    cout << "Bathrooms: " << numOfBathrooms << endl;
    cout << "Cars: " << numOfCarsGarage << endl;
    cout << "Year Built: " << yearBuilt << endl;
    cout << "Finished Square Footage: " << finishedSquareFootage << endl;
    cout << "Price: $" << price << endl;
    cout << "Tax: $" << tax << endl;
}

void houseType::setStyle(string Style)
{
    style = Style;
}

string houseType::getStyle() const
{
    return style;
}

void houseType::setNumOfBedrooms(int bed)
{
    numOfBedrooms = bed;
}

int houseType::getNumOfBedrooms() const
{
    return numOfBedrooms;
}
void houseType::setNumOfBathrooms(int bath)
{
    numOfBathrooms = bath;
}
int houseType::getNumOfBathrooms() const
{
    return numOfBathrooms;
}

void houseType::setNumOfCarsGarage(int cars)
{
    numOfCarsGarage = cars;
}

int houseType::getNumOfCarsGarage() const
{
    return numOfCarsGarage;
}

void houseType::setYearBuilt(int year)
{
    yearBuilt = year;
}

int houseType::getYearBuilt() const
{
    return yearBuilt;
}

void houseType::setFinishedSquareFootage(int sqFoot)
{
    finishedSquareFootage = sqFoot;
}

int houseType::getFinishedSquareFootage() const
{
    return finishedSquareFootage;
}

void houseType::setPrice(double p)
{
    price = p;
}

double houseType::getPrice() const
{
    return price;
}

void houseType::setTax(double Tax)
{
    tax = Tax;
}

double houseType::getTax() const
{
    return tax;
}
