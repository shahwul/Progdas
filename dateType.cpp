#include "dateType.h"

void dateType::print() const
{
    cout << ";Date of Birth (DD/MM/YYYY) : " << patientDoB << ";Admit Date (DD/MM/YYYY) : " << patientAdmit << ";Discharge Date (DD/MM/YYYY) : " << patientDischarge;
}

void dateType::setDoB(string dob)
{
    patientDoB = dob;
}

void dateType::setAdmit(string admit)
{
    patientAdmit = admit;
}

void dateType::setDischarge(string discharge)
{
    patientDischarge = discharge;
}

string dateType::getDoB() const
{
    return patientDoB;
}

string dateType::getAdmit() const
{
    return patientAdmit;
}

string dateType::getDischarge() const
{
    return patientDischarge;
}

dateType::dateType(string dob, string admit, string discharge)
{
    patientDoB = dob;
    patientAdmit = admit;
    patientDischarge = discharge;
}
