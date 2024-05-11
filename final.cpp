#include "Course.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<Course> readCourses(const string& filename)
{
    vector<Course> courses;
    ifstream file(filename);
    if (!file)
    {
        cout << "Cannot open file: " << filename << endl;
        return courses;
    }

    string line, sub, num, sec, desc, crn, term, instrName, meet, time;
    int hours;
    // Skip first line
    getline(file, line);

    while (getline(file, line))
    {
        stringstream ss(line);
        getline(ss, sub, '\t');
        getline(ss, num, '\t');
        getline(ss, sec, '\t');
        getline(ss, desc, '\t');
        ss >> hours; ss.ignore();
        getline(ss, crn, '\t');
        getline(ss, term, '\t');
        getline(ss, instrName, '\t');
        getline(ss, meet, '\t');
        getline(ss, time, '\t');
        UnivMember instructor(instrName, crn, "Professor");
        courses.push_back(Course(sub, num, sec, desc, hours, crn, term, instructor, meet, time));
    }

    file.close();
    return courses;
}

int main() {
    vector<Course> courses = readCourses("CoursesFall2023Tab.txt");
    
    ofstream outFile("output.txt");
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;  // Return with error code 1
    }

    // Write course details to the file
    for (size_t i = 0; i < courses.size(); i++)
    {
        outFile << courses[i] << endl;
    }

    // Close the file
    outFile.close();

    cout << "Data written to output.txt successfully." << endl;

    return 0;
}
