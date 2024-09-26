#include <iostream>

class DonThuc
{
private:
    int heSo;
    int mu;

public:
    DonThuc(int he_so = 0, int mu = 0) : heSo(he_so), mu(mu) {}
    ~DonThuc() {}

    int getHeSo() { return heSo; }
    int getMu() { return mu; }

    void setHeSo(int he_so) { this->heSo = he_so; }
    void setMu(int mu) { this->mu = mu; }

    DonThuc operator+(const DonThuc &khac)
    {
        if (mu != khac.mu)
        {
            std::cout << "Khong the thuc hien phep tinh cua don thuc co bac khac nhau\n";
        }
        return DonThuc(heSo + khac.heSo, mu);
    }

    DonThuc operator-(const DonThuc &khac)
    {
        if (mu != khac.mu)
        {
            std::cout << "Khong the thuc hien phep tinh cua don thuc co bac khac nhau\n";
        }
        return DonThuc(heSo - khac.heSo, mu);
    }

    DonThuc operator*(const DonThuc &khac)
    {
        return DonThuc(heSo * khac.heSo, mu + khac.mu);
    }

    friend std::ostream &operator<<(std::ostream &os, const DonThuc &DonThuc)
    {
        if (DonThuc.mu == 0)
        {
            os << DonThuc.heSo;
        }
        else if (DonThuc.mu == 1)
        {
            os << DonThuc.heSo << "x";
        }
        else
        {
            os << DonThuc.heSo << "x^" << DonThuc.mu;
        }
        return os;
    }
};

int main()
{
    DonThuc dt1(3, 2);
    DonThuc dt2(4, 2);
    DonThuc dt3 = dt1 + dt2;
    DonThuc dt4 = dt1 - dt2;
    DonThuc dt5 = dt1 * dt2;

    std::cout << dt1 << " + " << dt2 << " = " << dt3 << std::endl;
    std::cout << dt1 << " - " << dt2 << " = " << dt4 << std::endl;
    std::cout << dt1 << " * " << dt2 << " = " << dt5 << std::endl;
    DonThuc dt7(2, 3);
    DonThuc dt8(4, 2);
    std::cout << dt7 << " + " << dt8 << " = ";
    DonThuc dt9 = dt7 + dt8;
    return 0;
}
