#ifndef H_patientType
#define H_patientType
    #include "doctorType.h"
    #include "dateType.h"
    #include "billType.h"

class patientType: public doctorType, public dateType, public billType
{
public: 
    void print() const;
    void setId(string id);
    string getId() const;
    void setAge(string age);
    string getAge() const;
    patientType(string id = "", string age = "");

private:
    string patientId, patientAge;
};


#endif