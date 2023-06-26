#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    Person()
    {
        name = "";
        age = 0;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void output()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};
class Student : public Person
{
private:
    float avgScore;

public:
    Student()
    {
        name = "";
        age = 0;
        avgScore = 0;
    }
    void inputStudent()
    {
        cout << "Enter student's name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter student's age: ";
        cin >> age;
        cout << "Enter student's average score: ";
        cin >> avgScore;
    }
    bool isExcellentStudent()
    {
        return (avgScore > 9.5);
    }
    void output()
    {
        Person::output();
        cout << "\nAverage score: " << avgScore;
    }
};
class Professor : public Person
{
private:
    int numPublications;

public:
    Professor()
    {
        name = "";
        age = 0;
        numPublications = 0;
    }

    void inputProfessor()
    {
        cout << "Enter professor's name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter professor's age: ";
        cin >> age;
        cout << "Enter number of publications: ";
        cin >> numPublications;
    }

    bool isExcellentProfessor()
    {
        return (numPublications >= 100);
    }
    void output()
    {
        Person::output();
        cout << "\nNumber of publications: " << numPublications;
    }
};
int main()
{
    int n;
    cout << "How many people are there?: ";
    cin >> n;
    Student student[100];
    Professor professor[100];
    int s = 0, p = 0;
    for (int i = 0; i < n; ++i)
    {
        bool check;
        cout << "\nPerson " << i+1 << endl;
        cout << "1: Student\n0: Professor\nAnswer: ";
        cin >> check;
        if (check == 0)
        {
            professor[p].inputProfessor();
            p++;
        }
        else
        {
            student[s].inputStudent();
            s++;
        }
    }
    cout << "\nInformation professors excellent: \n";
    for (int i = 0; i < p; i++)
    {
        if (professor[i].isExcellentProfessor())
        {
            professor[i].output();
        }
    }

    cout << "\n\nInformation students excellent: ";
    for (int i = 0; i < s; i++)
    {
        if (student[i].isExcellentStudent())
        {
            student[i].output();
        }
    }
}