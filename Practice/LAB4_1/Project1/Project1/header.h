#pragma once
#include <vector>
using namespace std;
class Gate
{
public:
    virtual bool check(int& money, int intelligent, int& power) = 0;
    virtual ~Gate() {}
};

class BusinessGate : public Gate
{
private:
    int dongia;
    int sohang;
    int sotien;

public:
    BusinessGate(int dongia, int sohang);
    bool check(int& money, int intelligent, int& power) override;
};

class IntelligentGate : public Gate
{
private:
    int requireIntelligent;

public:
    IntelligentGate(int requireIntelligent);
    bool check(int& money, int intelligent, int& power) override;
};

class PowerGate : public Gate
{
private:
    int requirePower;

public:
    PowerGate(int requirePower);
    bool check(int& money, int intelligent, int& power) override;
};

class Prince
{
protected:
    int money;
    int intelligent;
    int power;

public:
    Prince(int money, int intelligent, int power);
    bool canRescue(vector<Gate*>& gates);
    void printStatus();
};