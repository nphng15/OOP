#include "GiaSuc.h"

void GiaSuc::setSoLuongCon()
{
    SoLuongCon = rand() % 2 + 1;
}

void Bo::talk()
{
    if (isHungry())
        cout << "Um booooooo";
    cout << endl;
}
void Bo::setSoLuongSua()
{
    SoLuongSua = rand() % 20 + 1;
}

void Cuu::talk()
{
    if (isHungry())
        cout << "Cuuuuuuuuuuu";
    cout << endl;
}
void Cuu::setSoLuongSua()
{
    SoLuongSua = rand() % 5 + 1;
}

void De::talk()
{
    if (isHungry())
        cout << "Deeeeeeeeeeee";
    cout << endl;
}
void De::setSoLuongSua()
{
    SoLuongSua = rand() % 10 + 1;
}

int main()
{
    int TongSua = 0;
    int bo;
    cout << "Nhap so luong bo: ";
    cin >> bo;

    int TongBo = 0;
    Bo DsBo[100];
    for (int i = 0; i < bo; i++)
    {
        DsBo[i].setHungry();
        DsBo[i].setSoLuongCon();
        DsBo[i].setSoLuongSua();
        TongBo += DsBo[i].getSoLuongCon();
        TongSua += DsBo[i].getSoLuongSua();
    }

    int cuu;
    cout << "Nhap so luong cuu: ";
    cin >> cuu;
    int TongCuu = 0;
    Cuu DsCuu[100];
    for (int i = 0; i < bo; i++)
    {
        DsCuu[i].setHungry();
        DsCuu[i].setSoLuongCon();
        DsCuu[i].setSoLuongSua();
        TongCuu += DsCuu[i].getSoLuongCon();
        TongSua += DsCuu[i].getSoLuongSua();
    }

    int de;
    cout << "Nhap so luong de: ";
    cin >> de;
    int TongDe = 0;
    De DsDe[100];
    for (int i = 0; i < bo; i++)
    {
        DsDe[i].setHungry();
        DsDe[i].setSoLuongCon();
        DsDe[i].setSoLuongSua();
        TongDe += DsDe[i].getSoLuongCon();
        TongSua += DsDe[i].getSoLuongSua();
    }

    cout << "a) Nhung tieng keu nghe duoc: " << endl;
    DsBo[0].talk();
    DsCuu[0].talk();
    DsDe[0].talk();
    cout << "Tong so luong bo sau khi sinh: " << bo + TongBo << endl;
    cout << "Tong so luong cuu sau khi sinh: " << cuu + TongCuu << endl;
    cout << "Tong so luong de sau khi sinh: " << de + TongDe << endl;
    cout << "Tong so luong sua cua tat ca gia suc: " << TongSua << endl;
}