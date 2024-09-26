#include <iostream>
using namespace std;

class NhomMau
{
protected:
    int loai;
    bool rhesus;

public:
    int rhcheck[8];
    NhomMau() {}
    NhomMau(int loai) {}
    NhomMau(bool rhesus) {}

    void setLoai(int _loai) { loai = _loai; }
    void setRh(bool _rhesus) { rhesus = _rhesus; }
    int getLoai() { return loai; }
    bool getRhesus() { return rhesus; }
    virtual bool KiemTraChaMe(NhomMau *Cha, NhomMau *Me) = 0;
    int getIndexRh()
    {
        if (this->loai == 1)
        {
            if (this->rhesus == 0)
            {
                return 0;
            }
            return 1;
        }
        if (this->loai == 2)
        {
            if (this->rhesus == 0)
            {
                return 2;
            }
            return 3;
        }
        if (this->loai == 3)
        {
            if (this->rhesus == 0)
            {
                return 4;
            }
            return 5;
        }
        if (this->loai == 4)
        {
            if (this->rhesus == 0)
            {
                return 6;
            }
            return 7;
        }
    }
};

class A : public NhomMau
{
public:
    A() {}
    A(bool rhesus) { rhesus = rhesus; }
    bool KiemTraChaMe(NhomMau *Cha, NhomMau *Me)
    {
        if (Cha->getLoai() == 1)
            return true;
        if (Cha->getLoai() == 2 && Me->getLoai() == 1)
            return true;
        if (Cha->getLoai() == 2 && Me->getLoai() == 3)
            return true;
        if (Cha->getLoai() == 3)
            return true;
        if (Cha->getLoai() == 4 && Me->getLoai() == 1)
            return true;
        if (Cha->getLoai() == 4 && Me->getLoai() == 3)
            return true;
        return false;
    }
};
class B : public NhomMau
{
public:
    B() {}
    B(bool rh)
    {
        rhesus = rh;
        if (rh)
        {
            rhcheck[0] = true;
            rhcheck[1] = true;
            rhcheck[2] = false;
            rhcheck[3] = false;
            rhcheck[4] = true;
            rhcheck[5] = true;
            rhcheck[6] = false;
            rhcheck[7] = false;
        }
        else
        {
            rhcheck[0] = true;
            rhcheck[1] = false;
            rhcheck[2] = false;
            rhcheck[3] = false;
            rhcheck[4] = true;
            rhcheck[5] = false;
            rhcheck[6] = false;
            rhcheck[7] = false;
        }
    }
    bool KiemTraChaMe(NhomMau *Cha, NhomMau *Me)
    {
        if (Cha->getLoai() == 1 && (Me->getLoai() == 2 || Me->getLoai() == 3))
            return true;
        if (Cha->getLoai() == 2)
            return true;
        if (Cha->getLoai() == 3)
            return true;
        if (Cha->getLoai() == 4 && (Me->getLoai() == 2 || Me->getLoai() == 3))
            return true;
        return false;
    }
};
class O : public NhomMau
{
public:
    O() {}
    O(bool rhesus) { rhesus = rhesus; }
    bool KiemTraChaMe(NhomMau *Cha, NhomMau *Me)
    {
        if ((Cha->getLoai() == 1 || Cha->getLoai() == 2 || Cha->getLoai() == 4) && (Me->getLoai() == 1 || Me->getLoai() == 2 || Me->getLoai() == 4))
            return true;
        return false;
    }
};
class AB : public NhomMau
{
public:
    AB() {}
    AB(bool rhesus) { rhesus = rhesus; }
    bool KiemTraChaMe(NhomMau *Cha, NhomMau *Me)
    {
        if (Cha->getLoai() == 1 && (Me->getLoai() == 2 || Me->getLoai() == 3))
            return true;
        if (Cha->getLoai() == 2 && (Me->getLoai() == 1 || Me->getLoai() == 3))
            return true;
        if (Cha->getLoai() == 3 && Me->getLoai() != 4)
            return true;
        return false;
    }
};
