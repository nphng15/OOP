#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

void RutGon(int &iTuSo, int &iMauSo)
{
    int ucln = UCLN(abs(iTuSo),  abs(iMauSo));
    iTuSo /= ucln;
    iMauSo /= ucln;
}

void Tong(int a, int b, int c, int d){
    int TuSo;
    int MauSo;

    TuSo= a*d+c*b;
    MauSo= b*d;
    RutGon(TuSo, MauSo);
    cout<< "Tong: " << TuSo <<"/"<<MauSo<<endl;
}

void Hieu(int a, int b, int c, int d){
    int TuSo;
    int MauSo;

    TuSo= a*d-c*b;
    MauSo= b*d;
    RutGon(TuSo, MauSo);
    cout<< "Hieu: " << TuSo <<"/"<<MauSo<<endl;
}

void Tich(int a, int b, int c, int d){
    int TuSo;
    int MauSo;

    TuSo= a*c;
    MauSo= b*d;
    RutGon(TuSo, MauSo);
    cout<< "Tich: " << TuSo <<"/"<<MauSo<<endl;
}

void Thuong(int a, int b, int c, int d){
    int TuSo;
    int MauSo;

    TuSo= a*d;
    MauSo= b*c;
    RutGon(TuSo, MauSo);
    cout<< "Thuong: " << TuSo <<"/"<<MauSo;
}
int main()
{
    int iTuSo1;
    int iMauSo1;
    int iTuSo2;
    int iMauSo2;
    cout << "Nhap tu so va mau so cua phan so 1: ";
    cin >> iTuSo1 >> iMauSo1;
    cout << "Nhap tu so va mau so cua phan so 2: ";
    cin >> iTuSo2 >> iMauSo2;

    if (iMauSo1 == 0 || iMauSo2 == 0) {
        cout << "Mau so khong the bang 0.";
        return 1; 
    }

    if (iMauSo1 < 0) {
        iTuSo1 *= -1;
        iMauSo1 *= -1;
    }

    if (iMauSo2 < 0) {
        iTuSo2 *= -1;
        iMauSo2 *= -1;
    }

    Tong(iTuSo1, iMauSo1, iTuSo2, iMauSo2);
    Hieu(iTuSo1, iMauSo1, iTuSo2, iMauSo2);
    Tich(iTuSo1, iMauSo1, iTuSo2, iMauSo2);
    Thuong(iTuSo1, iMauSo1, iTuSo2, iMauSo2);
    return 0;
}
