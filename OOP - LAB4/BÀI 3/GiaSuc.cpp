#include <iostream>
#include <random>
#include <chrono>
using namespace std;
#include "GiaSuc.h"
int randomNumber(int n)
{
    auto seed = std::chrono::system_clock::now().time_since_epoch().count(); // Lấy thời gian hệ thống làm seed
    std::mt19937 gen(seed);                                                  // Máy phát sinh số ngẫu nhiên với seed là thời gian hệ thống
    std::uniform_int_distribution<> dis(0, n);                               // Phân phối đều từ 0 đến n

    return dis(gen); // Trả về số nguyên ngẫu nhiên từ 0 đến n
}
GS::GiaSuc(int x)
{
    LuongSuaToiDa = x;
    SoLuongCon = randomNumber(2);
    SoLuongSua = randomNumber(x);
}

void SetHungry(GiaSuc &a)
{
    a.Hungry = 1;
}

bool isHungry(GiaSuc a)
{
    return a.Hungry;
}

int GetSoLuongCon(GiaSuc a)
{
    return a.SoLuongCon;
}

int GetSoLuongSua(GiaSuc a)
{
    return a.SoLuongSua;
}

void Cow::ExClaim()
{
    cout << "Um BOoooo'" << endl;
}

void Sheep::ExClaim()
{
    cout << "Beeee" << endl;
}

void Goat::ExClaim()
{
    cout << "Be Be Be" << endl;
}