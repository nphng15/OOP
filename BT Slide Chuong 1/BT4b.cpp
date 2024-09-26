#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct HocSinh
{
    string name;
    float toan;
    float van;
};

int main()
{
    struct HocSinh hs1;
    cout << "Nhap ten hoc sinh: ";
    getline(cin, hs1.name);
    cout << "Nhap diem toan: ";
    cin >> hs1.toan;
    cout << "Nhap diem van: ";
    cin >> hs1.van;

    float avg = (hs1.toan + hs1.van) / 2;
    cout << "Diem trung binh cua " << hs1.name << " la: " << avg << setprecision(2);
}