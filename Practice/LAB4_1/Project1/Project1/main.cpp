#include <iostream>
#include <vector>
#include <string>
#include "header.h"
using namespace std;

// class Gate
// {
// public:
//     virtual bool check(int &money, int intelligent, int &power) = 0;
//     virtual ~Gate() {}
// };

// class BusinessGate : public Gate
// {
// private:
//     int dongia;
//     int sohang;
//     int sotien = dongia * sohang;

// public:
//     BusinessGate(int dongia, int sohang) : dongia(dongia), sohang(sohang), sotien(dongia * sohang) {}
//     bool check(int &money, int intelligent, int &power)
//     {
//         if (money >= sotien)
//         {
//             money -= sotien;
//             return true;
//         }
//         return false;
//     }
// };

// class IntelligentGate : public Gate
// {
// private:
//     int requireIntelligent;

// public:
//     IntelligentGate(int requireIntelligent) : requireIntelligent(requireIntelligent) {}
//     bool check(int &money, int intelligent, int &power)
//     {
//         if (intelligent >= requireIntelligent)
//             return true;
//         return false;
//     }
// };

// class PowerGate : public Gate
// {
// private:
//     int requirePower;

// public:
//     PowerGate(int requirePower) : requirePower(requirePower) {}
//     bool check(int &money, int intelligent, int &power)
//     {
//         if (power >= requirePower)
//         {
//             power -= requirePower;
//             return true;
//         }
//         return false;
//     }
// };

// class Prince
// {
// protected:
//     int money;
//     int intelligent;
//     int power;

// public:
//     Prince(int money, int intelligent, int power) : money(money), intelligent(intelligent), power(power) {}

//     bool canRescue(vector<Gate *> &gates)
//     {
//         for (Gate *gate : gates)
//         {
//             if (!gate->check(money, intelligent, power))
//                 return false;
//             delete gate;
//         }
//         return true;
//     }

//     void printStatus()
//     {
//         cout << "Thong so con lai cua hoang tu: " << endl;
//         cout << "So tien con lai " << money << endl;
//         cout << "Tri tue con lai " << intelligent << endl;
//         cout << "Suc manh con lai " << power << endl;
//     }
// };

int main()
{
    vector<Gate*> gates;
    int n;
    cout << "Nhap so luong cong: ";
    cin >> n;

    string gateType;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap cong thu " << i + 1 << ": " << endl;
        cout << "Nhap loai cong (B:Bussiness/I:Intelligent/P:Power): ";
        cin >> gateType;

        if (gateType == "B")
        {
            int dongia, sohang;
            cout << "Nhap thong so cua cong: " << endl;
            cout << "Nhap don gia: ";
            cin >> dongia;
            cout << "Nhap so hang: ";
            cin >> sohang;
            gates.push_back(new BusinessGate(dongia, sohang));
        }
        else if (gateType == "I")
        {
            int intelligent;
            cout << "Nhap thong so cua cong: " << endl;
            cout << "Nhap chi so tri tue: ";
            cin >> intelligent;
            gates.push_back(new IntelligentGate(intelligent));
        }
        else if (gateType == "P")
        {
            int power;
            cout << "Nhap thong so cua cong: " << endl;
            cout << "Nhap chi so suc manh: ";
            cin >> power;
            gates.push_back(new PowerGate(power));
        }
        else
        {
            cout << "Nhap sai loai cong, vui long nhap lai." << endl;
            i--;
        }
    }

    int money, intelligent, power;
    cout << "Nhap thong so cua hoang tu: " << endl;
    cout << "Nhap so tien: " << endl;
    cin >> money;
    cout << "Nhap chi so thong minh: " << endl;
    cin >> intelligent;
    cout << "Nhap chi so suc manh: " << endl;
    cin >> power;

    Prince prince(money, intelligent, power);

    if (prince.canRescue(gates))
    {
        cout << "Hoang tu giai cuu duoc cong chua." << endl;
        prince.printStatus();
    }
    else
        cout << "Hoang tu khong giai cuu duoc cong chua.";
}