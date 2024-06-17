#include <string>
#include <array>

using namespace std;
//basic requirements
class Student
{
private:
    //private data
    string v_StudentId;
    string v_FirstName;
    string v_LastName;
    string v_Email;
    int v_Age;
    int daysToCompleteCourse[3];
    int v_Degree;

public:
    Student(string studentID,
        string firstName,
        string lastName,
        string emailAddress,
        int age,
        int daysInCourse1,
        int daysInCourse2,
        int daysInCourse3,
        int degreeProgram);
    static const int SIZE = 3;
    //public data
    //the getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* GetDaysToCompleteCourse();
    int getDegree();

    //the setters
    void setStudentID(string id);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void SetDaysToCompleteCourse(int* daysToCompleteCourse);
    void setDegree(int degree);

    //print out
    void print();
};
