#include "billType.h"


void billType::print() const
{
    cout << "Id : " << patientId << "\nCharges (med, doc, room) : " << med << "," << doc << "," << room;
}

void billType::setId(string id)
{
    patientId = id;
}

void billType::setCharges(double m, double d, double r)
{
    med = m;
    doc = d;
    room = r;
}

void billType::getCharges() const
{
    cout << "Charges (Med, Doc, Room) : (" << med << "," << doc << "," << room << ")";
}

billType::billType(string id, double m, double d, double r)
{
    patientId = id;
    med = m;
    doc = d;
    room = r;
}

double billType::getTotalCharges() const
{
    return med + doc + room;
}

double billType::getMedicineCharges() const
{
    return med;
}

double billType::getDoctorFee() const
{
    return doc;
}

double billType::getRoomCharges() const
{
    return room;
}

string billType::getId() const
{
    return patientId;
}
