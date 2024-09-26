#include <iostream>
using namespace std;

class MaTran
{
private:
    int Dong, Cot;
    int a[101][101];

public:
    MaTran(){};
    friend void Nhap(MaTran &x);
    friend void Xuat(MaTran x);
    friend MaTran Cong(MaTran x, MaTran y);
    friend MaTran Tru(MaTran x, MaTran y);
    friend MaTran Nhan(MaTran x, MaTran y);
};
void Nhap(MaTran &x)
{
    cin >> x.Dong >> x.Cot;
    for (int i = 0; i < x.Dong; i++)
        for (int j = 0; j < x.Cot; j++)
            cin >> x.a[i][j];
}
void Xuat(MaTran x)
{
    for (int i = 0; i < x.Dong; i++)
    {
        for (int j = 0; j < x.Cot; j++)
            cout << x.a[i][j] << " ";
        cout << endl;
    }
}
MaTran Cong(MaTran x, MaTran y)
{
    for (int i = 0; i < x.Dong; i++)
    {
        for (int j = 0; j < x.Cot; j++)
            x.a[i][j] += y.a[i][j];
    }
    return x;
}
MaTran Tru(MaTran x, MaTran y)
{
    for (int i = 0; i < x.Dong; i++)
    {
        for (int j = 0; j < x.Cot; j++)
            x.a[i][j] -= y.a[i][j];
    }
    return x;
}
MaTran Nhan(MaTran x, MaTran y)
{
    MaTran c;
    for (int i = 0; i < x.Dong; i++)
    {
        for (int j = 0; j < y.Cot; j++)
        {
            for (int k = 0; k < x.Cot; k++)
            {
                c.a[i][j] += x.a[i][k] * y.a[k][j];
            }
        }
    }
    return c;
}
int main()
{
    MaTran a, b, c;
    Nhap(a);
    Nhap(b);
    cout << "Cong ma tran\n";
    c = Cong(a, b);

    Xuat(c);
    cout << "Tru ma tran\n";
    c = Tru(a, b);

    Xuat(c);
    cout << "Nhan ma tran\n";
    c = Nhan(a, b);

    Xuat(c);
}