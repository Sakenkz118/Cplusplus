#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

class doctorType: public personType
{
private:
    string speciality;
};

class billType
{
private:
    double chargesFarmacy;
    double chargesDoctorFee;
    double chargesRoom;
};

class patientType: public personType
{

};

int main()
{
    return 0;
}
