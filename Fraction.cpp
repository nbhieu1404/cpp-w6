#include <bits/stdc++.h>
using namespace std;
class Fraction
{
private:
    int numerator, denominator;

public:
    Fraction()
    {
        numerator = 0;
        denominator = 1;
    }
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void input()
    {
        cout << "Tu so: ";
        cin >> numerator;
        cout << "Mau so: ";
        cin >> denominator;
        while (denominator == 0)
        {
            cout << "Mau so khac 0: ";
            cin >> denominator;
        }
    }
    int UCLN(int a, int b)
    {
        if (b == 0)
            return a;
        else
            return UCLN(b, a % b);
    }
    void simplify()
    {
        int rutGon = UCLN(numerator, denominator);
        numerator /= rutGon;
        denominator /= rutGon;
    }
    void output()
    {
        if (numerator == denominator)
        {
            cout << 1;
        }
        else
        {
            cout << numerator << "/" << denominator;
        }
    }
    int compareFractions(Fraction other)
    {
        int num1 = numerator * other.denominator;
        int num2 = other.numerator * denominator;

        if (num1 < num2)
        {
            return -1; // The current fraction is less than the other fraction
        }
        else if (num1 > num2)
        {
            return 1; // The current fraction is greater than the other fraction
        }
        else
        {
            return 0; // The current fraction is equal to the other fraction
        }
    }
};

int main()
{
    Fraction fraction1;
    Fraction fraction2;

    fraction1.input();
    fraction1.simplify();

    fraction2.input();
    fraction2.simplify();

    cout << "Phan so sau khi rut gon: ";
    fraction1.output();
    fraction2.output();

    int comparisonResult = fraction1.compareFractions(fraction2);

    if (comparisonResult < 0)
        cout << "\nPhan so 1 nho hon phan so 2.";
    else if (comparisonResult > 0)
        cout << "\nPhan so 1 lon hon phan so 2.";
    else
        cout << "\nHai phan so bang nhau.";

    return 0;
}