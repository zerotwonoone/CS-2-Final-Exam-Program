#include "ID.h"

static int currentNumber = 10000000;

ID::ID()
{
    ID_number = ++currentNumber;
    full_ID = 'A' + to_string(ID_number);
}

int ID::getIDNumber() const
{
    return ID_number;
}

string ID::getFullID() const
{
    return full_ID;
}

void ID::setIDNumber(int IDNum)
{
    ID_number = IDNum;
    full_ID = 'A' + to_string(ID_number);
}

void ID::setFullID(const string &FullID)
{
    full_ID = FullID;
    ID_number = stoi(FullID.substr(1));
}

void ID::printName() const
{
    cout << full_ID << endl;
}
