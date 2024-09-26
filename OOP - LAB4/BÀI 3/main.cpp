#include <iostream>

#include <random>
#include <chrono>



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
int main()
{
    int l, m, n;
    cout << "Nhap So luong bo: ";
    cin >> l;
    Cow bo[l];
    for (int i = 0; i < l; i++)
    {
        SetHungry(bo[i]);
    }
    cout << "Nhap So luong cuu: ";
    cin >> m;
    Sheep cuu[m];
    for (int i = 0; i < m; i++)
        SetHungry(cuu[i]);
    cout << "Nhap So luong de: ";
    cin >> n;
    Goat de[n];
    for (int i = 0; i < n; i++)
        SetHungry(de[i]);

    cout << "Tat ca tieng keu nghe duoc la: " << endl;
    if (isHungry(bo[0]))
        bo[0].ExClaim();
    if (isHungry(cuu[0]))
        cuu[0].ExClaim();
    if (isHungry(de[0]))
        de[0].ExClaim();
    cout << endl;

    int TongCon = 0;
    int TongSua = 0;
    for (int i = 0; i < l; i++)
    {
        TongCon += GetSoLuongCon(bo[i]);
        TongSua += GetSoLuongSua(bo[i]);
    }
    cout << "So luong bo sau khi sinh la: " << TongCon + l << endl;
    cout << "So luong sua bo la: " << TongSua << endl;
    cout << endl;

    TongCon = 0;
    TongSua = 0;
    for (int i = 0; i < m; i++)
    {
        TongCon += GetSoLuongCon(cuu[i]);
        TongSua += GetSoLuongSua(cuu[i]);
    }
    cout << "So luong cuu sau khi sinh la: " << TongCon + m << endl;
    cout << "So luong sua cuu la: " << TongSua << endl;
    cout << endl;

    TongCon = 0;
    TongSua = 0;
    for (int i = 0; i < n; i++)
    {
        TongCon += GetSoLuongCon(de[i]);
        TongSua += GetSoLuongSua(de[i]);
    }
    cout << "So luong de sau khi sinh la: " << TongCon + n << endl;
    cout << "So luong sua de la: " << TongSua << endl;
}