#include <iostream>

using namespace std;

struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram; // in GB
    int hardDrive; // in GB
    int yearBuilt;
    double price; // in USD
};

void inputData(computerType& data);
void printData(const computerType& data);

int main()
{
    computerType pc;
    inputData(pc);
    cout << endl;
    printData(pc);

    return 0;
}

void inputData(computerType& data)
{
    cout << "Manufacturer: ";
    cin >> data.manufacturer;
    cout << endl;

    cout << "Model Type: ";
    cin >> data.modelType;
    cout << endl;

    cout << "Processor Type: ";
    cin >> data.processorType;
    cout << endl;

    cout << "RAM size: ";
    cin >> data.ram;
    cout << endl;

    cout << "Hard drive capacity: ";
    cin >> data.hardDrive;
    cout << endl;

    cout << "Year built: ";
    cin >> data.yearBuilt;
    cout << endl;

    cout << "Price: EURO";
    cin >> data.price;
    cout << endl;
}

void printData(const computerType& data)
{
    cout << "Manufacturer: " << data.manufacturer << endl;

    cout << "Model Type: " << data.modelType << endl;

    cout << "Processor Type: " << data.processorType << endl;

    cout << "RAM size: " << data.ram << "GB" << endl;

    cout << "Hard drive capacity: " << data.hardDrive << "GB" << endl;

    cout << "Year built: " << data.yearBuilt << endl;

    cout << "Price: Euro " << data.price << endl;
}
