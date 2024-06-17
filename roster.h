#pragma once
#include <iostream>
#include <string>
#include <array>
#include "student.h"
#include "degree.h"

using namespace std;
//basic requirements
class Roster
{
public:
    Student* v_classRosterArray[5]{};
    ~Roster();
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
};