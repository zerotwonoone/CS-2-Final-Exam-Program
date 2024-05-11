#ifndef ID_H
#define ID_H

#include<iostream>
#include <string>

using namespace std;

class ID {
public:
    ID();

    int getIDNumber() const;
    string getFullID() const;

    void setIDNumber(int IDNum);
    void setFullID(const string &FullID);
    void printName() const;

private:
    int ID_number;
    string full_ID;
};

#endif // ID_H
