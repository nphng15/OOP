#include <iostream>
#include <string.h>
#include "Thisinh.h"
using namespace std;

void ThiSinh::Nhap(ThiSinh A[], int &n)
{
    cout << "So luong thi sinh:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin thi sinh " << i + 1 << ":\n";
        cin.ignore();
        cout << "Nhap ten:";
        cin.getline(A[i].Ten, 20);
        cout << "Nhap MSSV:";
        cin >> A[i].MSSV;
        cout << "Nhap ngay thang nam sinh:";
        cin >> A[i].iNgay >> A[i].iThang >> A[i].iNam;
        cout << "Nhap diem Toan:";
        cin >> A[i].fToan;
        cout << "Nhap diem Van:";
        cin >> A[i].fVan;
        cout << "Nhap diem Anh:";
        cin >> A[i].fAnh;
    }
}
float ThiSinh::Tong(ThiSinh a)
{
    return a.fToan + a.fVan + a.fAnh;
}
void ThiSinh::Xuat(ThiSinh a[], int n)
{
    cout << "Danh sach thi sinh co tong diem lon hon 15: \n";
    int maxx = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (Tong(a[i]) > 15.0)
        {
            cout << a[i].Ten << " " << a[i].MSSV << endl;
        }
        if (Tong(a[i]) > maxx)
        {
            maxx = Tong(a[i]);
            j = i;
        }
    }
    cout << "Thi sinh co diem cao nhat la: \n";
    cout << a[j].Ten << " " << a[j].MSSV;
}