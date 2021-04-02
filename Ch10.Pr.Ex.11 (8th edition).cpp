#include <iostream>

using namespace std;

class personType
{
public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.
    void setName(string first, string last);
    //Function to set firstName and lastName according to the parameters.
    //Postcondition: firstName = first; lastName = last
    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.
    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.
    personType(string first = "", string last = "", string middle = "");
    //Constructor
    //Sets middleName, firstName and lastName according to the parameters.
    //The default values of the parameters are null strings.
    //Postcondition: firstName = first; lastName = last; middleName = middle
    void setFName(string first);
    //Function to set firstName a according to the parameter.
    //Postcondition: firstName = first
    void setLName(string last);
    //Function to set lastName according to the parameter.
    //Postcondition: lastName = last
    void setMName(string middle);
    //Function to set middleName according to the parameter.
    //Postcondition: middleName = middle
    bool checkFirst(string first);
    //Function to check whether a given last name is the same as the last name of this person
    //Postcondition: return a logical value: 1 = true, 0 = false
    bool checkLast(string last);
    //Function to check whether a given last name is the same as the last name of this person
    //Postcondition: return a logical value: 1 = true, 0 = false
private:
    string firstName; //variable to store the first name
    string lastName; //variable to store the last name
    string middleName; // variable to store the middle name
};

int main()
{
    personType myName("Saken","Dochshanov", "Arstanbekovich");

    myName.print();

    myName.setFName("Nurdaulet");
    myName.setLName("Arstanbek");
    myName.setMName("Sakenuly");

    myName.print();

    cout << myName.checkLast("Arstanbek") << endl;

    return 0;
}

void personType::print() const
{
    cout << firstName << " " << lastName << " " << middleName;
    cout << endl;
}
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}
string personType::getFirstName() const
{
    return firstName;
}
string personType::getLastName() const
{
    return lastName;
}
//constructor
personType::personType(string first, string last, string middle)
{
    firstName = first;
    lastName = last;
    middleName = middle;
}

void personType::setFName(string first)
{
    firstName = first;
}

void personType::setLName(string last)
{
    lastName = last;
}

void personType::setMName(string middle)
{
    middleName = middle;
}

bool personType::checkFirst(string first)
{
    return first == firstName;
}

bool personType::checkLast(string last)
{
    return last == lastName;
}
