//
// Created by johne on 16/8/2020.
//
#include <sstream>
using std::stringstream;
#include "Person.h"

Person::Person(){
    firstName = "";
    lastName = "";
    documentId = 0;
    age = 0;
}

Person::Person(string firstName, string lastName, int documentID){
    this->firstName = firstName;
    this->lastName = lastName;
    documentId = documentID;
    age = age;
}

Person::~Person(){

}

string Person::getfirstName(){
    return firstName;
}

void Person::setFirstName(string firstName){
    this->firstName = firstName;
}

string Person::getlastName(){
    return lastName;
}

void Person::setLastName(string lastName){
    this->lastName = lastName;
}

int Person::getdocumentID(){
    return documentId;
}

void Person::setDocumentId(int documentID){
    documentId = documentID;
}
int Person::getAge(){
    return age;
}

void Person::setAge(int age){
    age = age;
}

double Person::salary() const{
    //double netsalary;
    //return netsalary;
}


string Person::toString() const{
    //stringstream s;
    //s<<firstName<<" "<<lastName<<endl;
    //s<<"Doc Id: "<<documentId<<","<<endl;
    //s<<"Age: "<<age<<","<<endl;
    //return s.str();
}