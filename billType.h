#ifndef H_billType
#define H_billType
    #include <iostream>
    #include <string>
    using namespace std;

class billType
{
private:
    string patientId;
    double med, doc, room;

public:
    void print() const;
    void setId(string id);
    void setCharges(double m, double d, double r);
    void getCharges() const;
    double getMedicineCharges() const;
    double getDoctorFee() const;
    double getRoomCharges() const;
    double getTotalCharges() const;
    string getId() const;
    billType(string id = "", double m = 0, double d = 0, double r = 0);
};

#endif