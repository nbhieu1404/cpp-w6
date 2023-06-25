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
    // ~Student();
};
void Student::input()
{
    cout << "Nhap ma SV: ";
    cin.ignore();
    getline(cin, id);

    cout << "Nhap ho va ten: ";
    getline(cin, name);

    cout << "Nhap diem trung binh: ";
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
    cout << "Nhap thong tin sinh vien 1:" << endl;
    sv1.input();

    cout << "\nNhap thong tin sinh vien 2:" << endl;
    sv2.input();

    cout << "\nThong tin sinh vien vua nhap:" << endl;
    cout << "\nSinh vien 1:" << endl;
    sv1.output();

    cout << "\nSinh vien 2:" << endl;
    sv2.output();

    cout << "\nSinh vien sap xep theo diem trung binh giam dan:" << endl;
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