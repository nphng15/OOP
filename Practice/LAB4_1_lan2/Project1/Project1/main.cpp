#include "header.h"

int main()
{
    cout << "Nhap so nhan vien: ";
    int n;
    cin >> n;
    NhanVien* ds[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
        string type;
        cout << "Nhap loai nhan vien (QL/KS): ";
        cin >> type;
        if (type == "QL")
        {
            ds[i] = new QuanLy();
            ds[i]->Nhap();
        }
        else if (type == "KS")
        {
            ds[i] = new KySu();
            ds[i]->Nhap();
        }
        else
        {
            cout << "Vui long nhap lai loai nhan vien." << endl;
            i--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        ds[i]->Xuat();
    }

    for (int i = 0; i < n; i++)
    {
        delete ds[i];
    }
}