#include <iostream>
using namespace std;

typedef class GiaSuc
{
private:
    int LuongSuaToiDa;
    int SoLuongCon;
    int SoLuongSua;
    bool Hungry;

public:
    GiaSuc() {}
    GiaSuc(int x);
    // void ExClaim();
    friend int GetSoLuongCon(GiaSuc);
    friend void SetHungry(GiaSuc &);
    friend int GetSoLuongSua(GiaSuc);
    friend bool isHungry(GiaSuc a);
} GS;

class Cow : public GS
{
private:
public:
    Cow() : GS(20){};
    void ExClaim();
};

class Goat : public GS
{
private:
public:
    Goat() : GS(10) {}
    void ExClaim();
};

class Sheep : public GS
{
private:
public:
    Sheep() : GS(5) {}
    void ExClaim();
};