#include <iostream>
#include <vector>
#include <string>
#include "roster.h"

using namespace std;
//basic requirements

vector <string> split(string str) {
    size_t          pos = 0;
    string          token;
    vector <string> params;
    while ((pos = str.find(',')) != string::npos) {
        token = str.substr(0, pos);
        params.push_back(token);
        str.erase(0, ++pos);
    }
    params.push_back(str);
    return params;
}
//main inputs for table
int main() {
    cout << "Scripting and Programming - Applications C867, C++, 011651547, James Jarzembowski" << endl;
    string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
                            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
                            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
                            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                            "A5,James,Jarzembowski,jjarzem@wgu.edu,25,12,22,33,SOFTWARE" };

    const int len = 5;

    auto classRoster = new Roster;

    for (int i = 0; i < len; ++i) {
        auto params = split(studentData[i]);
        auto studentId = params.at(0).data();
        auto firstName = params.at(1).data();
        auto lastName = params.at(2).data();
        auto email = params.at(3).data();
        auto age = stoi(params.at(4).data());
        auto course1 = stoi(params.at(5));
        auto course2 = stoi(params.at(6));
        auto course3 = stoi(params.at(7));
        auto deg = params.at(8);
        DegreeProgram degree;
        if (deg == "SECURITY") {
            degree = SECURITY;
        }
        else if (deg == "NETWORK") {
            degree = NETWORK;
        }
        else if (deg == "SOFTWARE") {
            degree = SOFTWARE;
        }

        classRoster->add(studentId, firstName, lastName, email, age, course1, course2, course3, degree);
    }
    classRoster->printAll();
    classRoster->printInvalidEmails();

    for (int i = 0; i < 5; ++i) {
        classRoster->printAverageDaysInCourse(classRoster->v_classRosterArray[i]->getStudentID());
    }

    classRoster->printByDegreeProgram(SOFTWARE);
    classRoster->remove("A3");
    classRoster->printAll();
    classRoster->remove("A3");
    //removal of student info
    return 0;
}
