#ifndef H_dateType
#define H_dateType
    #include <iostream>
    #include <string>
    using namespace std;

class dateType
{
private:
    string patientDoB, patientAdmit, patientDischarge;
public:
    void print() const;
    void setDoB(string dob);
    void setAdmit(string admit);
    void setDischarge(string discharge);
    string getDoB() const;
    string getAdmit() const;
    string getDischarge() const;
    dateType(string dob = "", string admit = "", string discharge = "");
};


#endif