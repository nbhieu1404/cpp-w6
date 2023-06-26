#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    person()
    {
        name = "null";
        age = 0;
    }
    void input1()
    {
        cout << "Enter the name: ";
        getline(cin, name);
        cout << "Enter the age: ";
        cin >> age;
        cin.ignore();
    }
    void output1()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

class student : public person
{
public:
    string major;
    string schoolName;
    string getname()
    {
        return name;
    };
    string getSchoolName()
    {
        return schoolName;
    }
    student()
    {
        name = "null";
        age = 0;
        major = "null";
        schoolName = "null";
    }
    student(string name, int age, string major, string schoolName)
    {
        this->name = name;
        this->age = age;
        this->major = major;
        this->schoolName = schoolName;
    }
    void input2()
    {
        input1();
        cout << "Enter the major: ";
        getline(cin, major);
        cout << "Enter the schoolName: ";
        getline(cin, schoolName);
    }
    void output2()
    {
        output1();
        cout << "\nMajor: " << major;
        cout << "\nSchoolName: " << schoolName;
    }
};

int main()
{
    int n;
    cout << "Enter the quantity of students: ";
    cin >> n;
    cin.ignore();
    const int soLuong = n;
    student st[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the student's information number " << i + 1 << ": " << endl;
        st[i].input2();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent's information number " << i + 1 << ": " << endl;
        st[i].output2();
    }
    cout << "\n\nStudents with schoolName 'HNUE': ";
    for (int i = 0; i < n; i++)
    {
        if (st[i].getSchoolName() == "HNUE")
        {
            cout << st[i].getname() << " ";
        }
    }
    cout << endl;
    return 0;
}
