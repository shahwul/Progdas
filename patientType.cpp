#include "patientType.h"

void patientType::print() const
{
    cout << "Patient's ID : " << patientId << "\nAge : " << patientAge;
}

void patientType::setId(string id)
{
    patientId = id;
}

void patientType::setAge(string age)
{
    patientAge = age;
}

string patientType::getId() const
{
    return patientId;
}

string patientType::getAge() const
{
    return patientAge;
}

patientType::patientType(string id, string age)
{
    patientId = id;
    patientAge = age;
}
