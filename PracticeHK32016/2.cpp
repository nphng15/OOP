#include <iostream>
using namespace std;

class DaThuc
{
private:
    int values[3];

public:
    DaThuc() {}
    ~DaThuc() {}

    void Nhap()
    {
        cout << "Nhap he so cua da thuc (bac cao xuong thap): ";
        for (int i = 2; i >= 0; i--)
        {
            cin >> values[i];
        }
    }

    void Xuat()
    {
        for (int i = 2; i >= 0; i--)
        {
            if (i == 0)
                cout << values[0] << " = 0 " << endl;
            else
                cout << values[i] << "x^" << i << " + ";
        }
    }

    int Tinh(int x)
    {
        int sum = 0;
        sum = values[0] + values[1] * x + values[2] * x * x;
        return sum;
    }

    DaThuc operator+(DaThuc &a)
    {
        DaThuc c;
        for (int i = 2; i >= 0; i--)
        {
            c.values[i] = 0;
        }
        for (int i = 2; i >= 0; i--)
        {
            c.values[i] += this->values[i];
        }
        for (int i = 2; i >= 0; i--)
        {
            c.values[i] += a.values[i];
        }
        return c;
    }
};

int main()
{
    DaThuc a, b;
    a.Nhap();
    b.Nhap();
    a.Xuat();
    b.Xuat();
    cout << "Tinh: " << a.Tinh(1) << endl;
    DaThuc c = a + b;
    c.Xuat();
}