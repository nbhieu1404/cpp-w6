#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string id, name;
    double avgScore;

public:
    Student() : id(""), name(""), avgScore(0) {}
    Student(string id, string name, double avgScore) : id(id), name(name), avgScore(avgScore) {}
    double getAvgScore()
    {
        return avgScore;
    }
    void input();
    void output();
    ~Student(){}
};
void Student::input()
{
    cout << "Student ID: ";
    cin.ignore();
    getline(cin, id);

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter average: ";
    cin >> avgScore;
}
void Student::output()
{
    cout << "Student id: " << id << endl;
    cout << "Student name: " << name << endl;
    cout << "Student average: " << avgScore << fixed << setprecision(1) << endl;
}
int main()
{
    Student sv1, sv2;
    cout << "Enter informatinon student 1:" << endl;
    sv1.input();

    cout << "\nEnter informatinon student 2:" << endl;
    sv2.input();

    cout << "\nInformatinon student:" << endl;
    cout << "\nStudent 1:" << endl;
    sv1.output();

    cout << "\nnStudent 2:" << endl;
    sv2.output();

    cout << "\nDesc Average:" << endl;
    if (sv1.getAvgScore() >= sv2.getAvgScore())
    {
        sv1.output();
        sv2.output();
    }
    else
    {
        sv2.output();
        sv1.output();
    }
}