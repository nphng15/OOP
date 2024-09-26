#include "header.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

BusinessGate::BusinessGate(int dongia, int sohang) : dongia(dongia), sohang(sohang), sotien(dongia* sohang) {}
bool BusinessGate::check(int& money, int intelligent, int& power)
{
    if (money >= sotien)
    {
        money -= sotien;
        return true;
    }
    return false;
}

IntelligentGate::IntelligentGate(int requireIntelligent) : requireIntelligent(requireIntelligent) {}
bool IntelligentGate::check(int& money, int intelligent, int& power)
{
    if (intelligent >= requireIntelligent)
        return true;
    return false;
}

PowerGate::PowerGate(int requirePower) : requirePower(requirePower) {}
bool PowerGate::check(int& money, int intelligent, int& power)
{
    if (power >= requirePower)
    {
        power -= requirePower;
        return true;
    }
    return false;
}

Prince::Prince(int money, int intelligent, int power) : money(money), intelligent(intelligent), power(power) {}

bool Prince::canRescue(vector<Gate*>& gates)
{
    for (Gate* gate : gates)
    {
        if (!gate->check(money, intelligent, power))
            return false;
        delete gate;
    }
    return true;
}

void Prince::printStatus()
{
    cout << "Thong so con lai cua hoang tu: " << endl;
    cout << "So tien con lai " << money << endl;
    cout << "Tri tue con lai " << intelligent << endl;
    cout << "Suc manh con lai " << power << endl;
}
