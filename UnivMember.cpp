#include "UnivMember.h"

UnivMember::UnivMember() {}

UnivMember::UnivMember(const string& fullName, const string& id, const string& role)
    : univName(fullName), univID(), role(role)
{
    univID.setFullID(id);
}

UnivMember::~UnivMember() {}

string UnivMember::getName() const
{
    return univName.getFirstName() + " " + univName.getLastName();
}

string UnivMember::getID() const
{
    return univID.getFullID();
}

string UnivMember::getRole() const
{
    return role;
}

void UnivMember::setName(const string& fullName)
{
    size_t pos = fullName.find(",");
    if (pos != string::npos)
    {
        univName.setFirstName(fullName.substr(0, pos));
        univName.setLastName(fullName.substr(pos + 1));
    }
}

void UnivMember::setID(const string& id)
{
    univID.setFullID(id);
}

void UnivMember::setRole(const string& role)
{
    this->role = role;
}

void UnivMember::printInfo() const
{
    cout << role << ": " << getName() << endl;
    cout << "ID: " << getID() << endl << endl;
}
