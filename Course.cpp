#include "Course.h"

using namespace std;

// Default Constructors
Course::Course() 
    : subject(""), courseNumber(""), section(""), description(""), hours(0),
      CRN(""), term(""), instructor(), meetingTimes(""), time("") {}

// Constructors
Course::Course(const string& sub, const string& num, const string& sec, 
               const string& desc, int hrs, const string& crn, 
               const string& trm, const UnivMember& instr, const string& meet, const string& tm)
    : subject(sub), courseNumber(num), section(sec), description(desc), hours(hrs),
      CRN(crn), term(trm), instructor(instr), meetingTimes(meet), time(tm) {}

//overloading <<
ostream& operator<<(ostream& os, const Course& course) {
    // If instructor name is empty or contains only spaces, use "TBD"
    string instructorName = course.instructor.getName();
    if (instructorName.empty() || all_of(instructorName.begin(), instructorName.end(), ::isspace)) {
        instructorName = "TBD";
    }

    os << "Course: " << course.subject << " " << course.courseNumber << ", Section: " << course.section
       << "\nDescription: " << course.description << ", Hours: " << course.hours
       << "\nCRN: " << course.CRN << ", Term: " << course.term
       << "\nInstructor: " << instructorName
       << "\nMeeting Times: " << course.meetingTimes << ", Time: " << course.time << endl;
    return os;
}
