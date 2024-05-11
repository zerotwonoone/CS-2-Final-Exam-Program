#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

#include <string>
#include <iostream>
#include "Name.h"
#include "ID.h"

using namespace std;

class UnivMember {
private:
    Name univName;
    ID univID;
    string role;

public:
    UnivMember();
    UnivMember(const string& fullName, const string& id, const string& role);
    virtual ~UnivMember();

    string getName() const;
    string getID() const;
    string getRole() const;

    void setName(const string& fullName);
    void setID(const string& id);
    void setRole(const string& role);

    void printInfo() const;
};

#endif
