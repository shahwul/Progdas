#ifndef H_doctorType
#define H_doctorType
    #include "personType.h"

class doctorType: public personType
{
private:
    string doctorSpeciality, doctorFirstName, doctorLastName;
public:
    void print() const;
    void setSpeciality(string speciality);
    void setDrFirstName(string fn);
    void setDrLastName(string ln);
    string getDrFirstName() const;
    string getDrLastName() const;
    string getSpeciality() const;
    string getDrName() const;
    doctorType(string speciality = "", string fn = "", string ln = "");
};


#endif