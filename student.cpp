#include <iostream>
#include "student.h"
#include "degree.h"
//basic requirements
//constructor
Student::Student(string studentID,
    string firstName,
    string lastName,
    string emailAddress,
    int age,
    int daysInCourse1,
    int daysInCourse2,
    int daysInCourse3,
    int degreeProgram) {
    v_Age = age;
    v_DaysToComplete = { daysInCourse1, daysInCourse2, daysInCourse3 };
    v_Email = emailAddress;
    v_FirstName = firstName;
    v_LastName = lastName;
    v_StudentId = studentID;
    v_Degree = degreeProgram;

}

//the getters
string Student::getStudentID() {
    return v_StudentId;
}

string Student::getFirstName() {
    return v_FirstName;
}

string Student::getLastName() {
    return v_LastName;
}

string Student::getEmail() {
    return v_Email;
}

int Student::getAge() {
    return v_Age;
}

array<int, 3> Student::getDaysToComplete() {
    return v_DaysToComplete;
}

int Student::getDegree() {
    return v_Degree;
}

//the setters
void Student::setStudentID(string id) {
    v_StudentId = id;
}

void Student::setFirstName(string firstName) {
    v_FirstName = firstName;
}

void Student::setLastName(string lastName) {
    v_LastName = lastName;
}

void Student::setEmail(string email) {
    v_Email = email;
}

void Student::setAge(int age) {
    v_Age = age;
}

void Student::setDaysToComplete(array<int, 3> daysToComplete) {
    v_DaysToComplete = daysToComplete;
}

void Student::setDegree(int degree) {
    v_Degree = degree;
}

//print out
void Student::print() {
    cout << "Student ID: ";
    cout << v_StudentId;
    cout << "\t First Name: ";
    cout << v_FirstName;
    cout << "\t Last Name: ";
    cout << v_LastName;
    cout << "\t Email Address: ";
    cout << v_Email;
    cout << "\t Age: ";
    cout << to_string(v_Age);
    cout << "\t daysInCourse: ";
    cout << "{";
    for (int i = 0; i < v_DaysToComplete.size(); i++) {
        cout << to_string(v_DaysToComplete[i]);
        if (i < v_DaysToComplete.size() - 1)
            cout << ",";

    }
    cout << "} ";
    //days and degrees
    cout << " Degree Program: ";
    switch (v_Degree) {
    case SOFTWARE:
        cout << "SOFTWARE";
        break;
    case SECURITY:
        cout << "SECURITY";
        break;
    case NETWORK:
        cout << "NETWORK";
        break;
    }
    cout << endl;

}