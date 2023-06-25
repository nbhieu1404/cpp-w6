#include <bits/stdc++.h>
using namespace std;
class Circle
{
private:
    float x, y, r;

public:
    Circle()
    {
        x = 0;
        y = 0;
        r = 0;
    }
    Circle(float x, float y, float r)
    {
        this->x = x;
        this->y = y;
        this->r = r;
    }
    void input()
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << "r = ";
        cin >> r;
    }
    void output()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "r = " << r << endl;
    }
    float perimeterCircle()
    {
        return ((2 * r) / 3.14);
    }
    float acreageCircle()
    {
        return (pow(r, 2) * 3.14);
    }
};
int main()
{
    int n;
    cout << "So luong hinh tron: ";
    cin >> n;
    const int soLuong = n;

    Circle hinhTron[soLuong];

    for (int i = 0; i < soLuong; i++)
    {
        cout << "\nNhap thong tin hinh tron thu " << i + 1 << ": \n";
        hinhTron[i].input();
    }
    cout << "\n-------------------------------------------------\n";
    cout << "\nThong tin cac hinh tron vua nhap: \n";
    for (int i = 0; i < soLuong; i++)
    {
        cout << "\nThong tin hinh tron thu " << i + 1 << ": \n";
        hinhTron[i].output();
    }
    cout << "\n-------------------------------------------------\n";

    for (int i = 0; i < soLuong; i++)
    {
        cout << "\nDien tich hinh tron thu " << i + 1 << ": " << fixed << setprecision(2) << hinhTron[i].acreageCircle();
    }
    cout << "\n-------------------------------------------------\n";

    for (int i = 0; i < soLuong; i++)
    {
        cout << "\nChu hinh tron thu " << i + 1 << ": " << fixed << setprecision(2) << hinhTron[i].perimeterCircle();
    }
}