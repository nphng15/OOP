#pragma once
#include <iostream>
#include <random>
#include <ctime>
#include <iostream>
using namespace std;
class GiaSuc
{
protected:
    int SoLuongCon;
    int SoLuongSua;
    bool hungry = false;

public:
    GiaSuc() {}
    ~GiaSuc() {}

    virtual void talk() = 0;
    virtual void setSoLuongSua() = 0;
    void setSoLuongCon();
    int getSoLuongSua()
    {
        return SoLuongSua;
    }
    int getSoLuongCon()
    {
        return SoLuongCon;
    }
    void setHungry()
    {
        hungry = true;
    }
    bool isHungry()
    {
        return hungry;
    }
};

class Bo : public GiaSuc
{
public:
    void setSoLuongSua();
    void talk();
};

class Cuu : public GiaSuc
{
public:
    void setSoLuongSua();
    void talk();
};

class De : public GiaSuc
{
public:
    void setSoLuongSua();
    void talk();
};
