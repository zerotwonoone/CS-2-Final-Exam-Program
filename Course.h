#ifndef COURSE_H
#define COURSE_H

#include "UnivMember.h"
#include <iostream>
#include <string>

using namespace std;

class Course {
public:
    string subject;
    string courseNumber;
    string section;
    string description;
    int hours;
    string CRN;
    string term;
    UnivMember instructor;
    string meetingTimes;
    string time;

    Course();
    Course(const string& sub, const string& num, const string& sec,
           const string& desc, int hrs, const string& crn,
           const string& trm, const UnivMember& instr, const string& meet, const string& tm);

    friend ostream& operator<<(ostream& os, const Course& course);
};

#endif
