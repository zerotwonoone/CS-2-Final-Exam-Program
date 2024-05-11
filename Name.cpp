#include "Name.h"

Name::Name() : fname("First"), lname("Last") {}

Name::Name(const string &str)
{
    size_t pos = str.find(",");
    if (pos != string::npos)
    {
        fname = str.substr(0, pos);
        lname = str.substr(pos + 1);
    }
}

string Name::getFirstName() const
{
    return fname;
}

string Name::getLastName() const
{
    return lname;
}

void Name::setFirstName(const string& firstName)
{
    fname = firstName;
}

void Name::setLastName(const string& lastName)
{
    lname = lastName;
}

void Name::printName() const
{
    cout << fname << " " << lname << endl;
}
