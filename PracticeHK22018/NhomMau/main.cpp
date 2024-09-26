#include "header.h"
#include "iostream"
using namespace std;

int main()
{
    NhomMau *ds[100];
    int n;
    cout << "1.O 2.A 3.B 4.AB" << endl;
    cout << "---------YC1---------" << endl;
    cout << "Nhap so luong nguoi: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int loai;
        cout << "Nhap nhom mau cua nguoi thu " << i << ": ";
        cin >> loai;
        bool rh;
        cout << "Nhap loai rh (1. rh+, 0. rh-): ";
        cin >> rh;
        if (loai == 1)
        {
            ds[i] = new O(rh);
            ds[i]->setLoai(1);
        }
        else if (loai == 2)
        {
            ds[i] = new A(rh);
            ds[i]->setLoai(2);
        }
        else if (loai == 3)
        {
            ds[i] = new B(rh);
            ds[i]->setLoai(3);
        }
        else if (loai == 4)
        {
            ds[i] = new AB(rh);
            ds[i]->setLoai(4);
        }
        else
        {
            cout << "Nhap sai nhom mau, vui long nhap lai.";
            i--;
        }
    }

    cout << "---------YC2--------" << endl;
    cout << "Nhap so thu tu cua con,cha va me: ";
    int stt[3];
    cin >> stt[0];
    cin >> stt[1];
    cin >> stt[2];
    cout << "Nhom mau cua con: " << ds[stt[0]]->getLoai() << endl;
    cout << "Nhom mau cua cha: " << ds[stt[1]]->getLoai() << endl;
    cout << "Nhom mau cua me: " << ds[stt[2]]->getLoai() << endl;
    if ((ds[stt[0]]->KiemTraChaMe(ds[stt[1]], ds[stt[2]])) == true)
    {
        cout << "Dung la con trai cua ta." << endl;
    }
    else
        cout << "Con khong phai la con cua cha me." << endl;
    cout << "------------YC3-----------" << endl;
    cout << "Chon 1 nguoi de nhan mau: ";
    int temp;
    cin >> temp;
    cout << "Nhung nguoi co the truyen mau cho nguoi nay la: ";
    for (int i = 0; i < n; i++)
    {
        if (ds[temp]->rhcheck[ds[i]->getIndexRh()])
        {
            cout << i << " ";
        }
    }
}