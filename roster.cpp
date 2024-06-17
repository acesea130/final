#include <iostream>
#include <regex>
#include "roster.h"

using namespace std;
//basic requirements
bool isEmailValid(const string email)
{
    const regex pattern("[\\w\\.]+@\\w+\\.\\w+");

    return regex_match(email, pattern);

}

void Roster::add(string studentID,
    string firstName,
    string lastName,
    string emailAddress,
    int age,
    int daysInCourse1,
    int daysInCourse2,
    int daysInCourse3,
    DegreeProgram degreeProgram) {


    auto student = new Student(studentID,
        firstName,
        lastName,
        emailAddress,
        age,
        daysInCourse1,
        daysInCourse2,
        daysInCourse3,
        degreeProgram);

    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] == NULL) {
            v_classRosterArray[i] = student;
            return;
        }
    }
}

void Roster::remove(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (student.getStudentID() == studentID) {
                delete v_classRosterArray[i];
                v_classRosterArray[i] = NULL;
                return;
            }
        }
    }
    cout << "Student ID " << studentID << " not found" << endl << endl;
}

void Roster::printAll() {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            student.print();
        }
    }
    cout << endl;
}

void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (student.getStudentID() == studentID) {
                auto days = student.getDaysToComplete();
                cout << (days[0] + days[1] + days[2]) / 3;
            }
        }
    }
    cout << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (student.getDegree() == degreeProgram) {
                student.print();
            }
        }
    }
    cout << endl;
}

void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (!isEmailValid(student.getEmail())) {
                cout << student.getEmail() << endl;
            }
        }
    }
    cout << endl;
}

Roster::~Roster() {
    for (int i = 0; i < 5; i++) {
        delete v_classRosterArray[i];
        v_classRosterArray[i] = NULL;
    }
}