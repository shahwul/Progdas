#include "doctorType.h"

void doctorType::print() const
{
    cout << "Doctor's Name : dr.";
    personType::print();
    cout << "\nSpeciality = " << doctorSpeciality;
}

void doctorType::setSpeciality(string speciality){
    doctorSpeciality = speciality;
}

void doctorType::setDrFirstName(string fn)
{
    doctorFirstName = fn;
}

void doctorType::setDrLastName(string ln)
{
    doctorLastName = ln;
}

string doctorType::getSpeciality() const
{
    return doctorSpeciality;
}

string doctorType::getDrFirstName() const
{
    return doctorFirstName;
}

string doctorType::getDrLastName() const
{
    return doctorLastName;
}

string doctorType::getDrName() const
{
    return "dr. " + doctorFirstName + " " + doctorLastName;
}

doctorType::doctorType(string speciality, string fn, string ln)
{
    doctorSpeciality = speciality;
    doctorFirstName = fn;
    doctorLastName = ln;
}
