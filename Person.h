//
// Created by johne on 16/8/2020.
//

#ifndef LAB03_OPP_PERSON_H
#define LAB03_OPP_PERSON_H
#include <string>
#include <ostream>
#include <sstream>
using namespace std;

class Person {
public:
    Person();
    Person(string,string,int);
    virtual ~Person();
    string getfirstName();
    void setFirstName(string);
    string getlastName();
    void setLastName(string);
    int getdocumentID();
    void setDocumentId(int);
    int getAge();
    void setAge(int age);
    virtual string toString() const;
    virtual double salary() const;

protected:

    string firstName;
    string lastName;
    int documentId;
    int age;


};


#endif //LAB03_OPP_PERSON_H
