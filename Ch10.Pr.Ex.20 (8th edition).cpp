#include <iostream>
#include <iomanip>

using namespace std;

class stockType
{
public:
    void print();
    // Function to output the instance variables
    // Postcondition: output with appropriate titles

    void setStockName(string Name);
    // Function to set the stock name
    // Postcondition: name is set as name = Name;

    string getName() const;
    // Function to return the stock name
    // Postcondition: stock name is returned

    void setSymbol(string Symbol);
    // Function to set the stock symbol
    // Postcondition: stock symbol is set as symbol = Symbol

    string getSymbol() const;
    // Function to return the stock symbol
    // Postcondition: stock symbol is returned

    void setCurrentPrice(double currPrice);
    // Function to set the current price of the stock
    // Postcondition: the current stock price is set as currentPrice = currPrice

    double getCurrentPrice() const;
    // Function to return stock's current price
    // Postcondition: stock's current price is returned

    void setLowPriceOfTheDay(double lowPrice);
    // Function to set stock's lowest price of the day
    // Postcondition: stock's lowest price of the day is set as lowPriceOfTheDay = lowPrice

    double getLowPriceOfTheDay() const;
    // Function to return stock's lowest price of the day
    // Postcondition: stock's lowest price of the day is returned

    void setHighPriceOfTheDay(double highPrice);
    // Function to set the stock's highest price of the day
    // Postcondition: stock's highest price of the day is set as highPriceOfTheDay = highPrice

    double getHighPriceOfTheDay() const;
    // Function to return stock's highest price of the day
    // Postcondition: stock's highest price of the day is returned

    void setPreviousDayClosingPrice(double prevDayPrice);
    // Function to set the stock's previous day closing price
    // Postcondition: stock's previous day closing price is set as previousDayClosingPrice = prevDayPrice

    double getPreviousDayClosingPrice() const;
    // Function to return stock's closing price of the previous day
    // Postcondition: stock's closing price of the previous day is returned

    void setFiftyTwoWeeksHigh(double high_52);
    // Function to set the stock's fifty two weeks highest price
    // Postcondition: stock's fifty two weeks highest price is set as fiftyTwoWeeksHigh = high_52

    double getFiftyTwoWeeksHigh() const;
    // Function to return stock's fifty two weeks highest price
    // Postcondition: stock's fifty two weeks highest price is returned

    void setFiftyTwoWeeksLow(double low_52);
    // Function to set the stock's fifty two weeks lowest price
    // Postcondition: stock's fifty two weeks lowest price is set as fiftyTwoWeeksLow = low_52

    double getFiftyTwoWeeksLow() const;
    // Function to return stock's fifty two weeks lowest price
    // Postcondition: stock's fifty two weeks lowest price is returned

    double percentGainLoss() const;
    // Function to determine the percentage gain or loss
    // between the current price and previous day closing price
    // Postcondition: gain percentage wise is returned

    stockType(); // default constructor

private:
    string name;
    string symbol;
    double currentPrice;
    double lowPriceOfTheDay;
    double highPriceOfTheDay;
    double previousDayClosingPrice;
    double fiftyTwoWeeksHigh;
    double fiftyTwoWeeksLow;
};

int main()
{
    stockType myStock;

    myStock.setStockName("Jilstroy");

    myStock.print();

    return 0;
}

void stockType::print()
{
    cout << "Name: " << name << endl;
    cout << "Symbol: " << symbol << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Current Price: $" << currentPrice << endl;
    cout << "Lowest price of the day: $" << lowPriceOfTheDay << endl;
    cout << "Highest price of the day: $" << highPriceOfTheDay << endl;
    cout << "Previous day closing price: $" << previousDayClosingPrice << endl;
    cout << "Fifty two weeks high: $" << fiftyTwoWeeksHigh << endl;
    cout << "Fifty two weeks low: $" << fiftyTwoWeeksLow << endl;
}

void stockType::setStockName(string Name)
{
    name = Name;
}

string stockType::getName() const
{
    return name;
}

void stockType::setSymbol(string Symbol)
{
    symbol = Symbol;
}

string stockType::getSymbol() const
{
    return symbol;
}

void stockType::setCurrentPrice(double currPrice)
{
    currentPrice = currPrice;
}

double stockType::getCurrentPrice() const
{
    return currentPrice;
}

void stockType::setHighPriceOfTheDay(double highPrice)
{
    highPriceOfTheDay = highPrice;
}

double stockType::getHighPriceOfTheDay() const
{
    return highPriceOfTheDay;
}

void stockType::setPreviousDayClosingPrice(double prevDayPrice)
{
    previousDayClosingPrice = prevDayPrice;
}

double stockType::getPreviousDayClosingPrice() const
{
    return previousDayClosingPrice;
}

void stockType::setFiftyTwoWeeksHigh(double high_52)
{
    fiftyTwoWeeksHigh = high_52;
}

double stockType::getFiftyTwoWeeksHigh() const
{
    return fiftyTwoWeeksHigh;
}

void stockType::setFiftyTwoWeeksLow(double low_52)
{
    fiftyTwoWeeksLow = low_52;
}

double stockType::getFiftyTwoWeeksLow() const
{
    return fiftyTwoWeeksLow;
}

double stockType::percentGainLoss() const
{
    double gain;

    if(currentPrice < previousDayClosingPrice)
    {
        gain = -(previousDayClosingPrice - currentPrice) / previousDayClosingPrice;
    }
    else if (currentPrice > previousDayClosingPrice)
    {
        gain = (previousDayClosingPrice - currentPrice) / previousDayClosingPrice;
    }
    else
        gain = 0;

    return gain;
}

stockType::stockType()
{
    name = "";
    symbol = "";
    currentPrice = 0;
    lowPriceOfTheDay = 0;
    highPriceOfTheDay = 0;
    previousDayClosingPrice = 0;
    fiftyTwoWeeksHigh = 0;
    fiftyTwoWeeksLow = 0;
}
