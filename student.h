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
    array<int, 3> v_DaysToComplete;
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
    //public data
    //the getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    array<int, 3> getDaysToComplete();
    int getDegree();

    //the setters
    void setStudentID(string id);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysToComplete(array<int, 3> daysToComplete);
    void setDegree(int degree);

    //print out
    void print();
};