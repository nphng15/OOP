#include "NgayThangNam.h"

NgayThangNam::NgayThangNam() {}

NgayThangNam::NgayThangNam(int iNgay, int iThang, int iNam) : iNgay(iNgay), iThang(iThang), iNam(iNam) {}

int NgayThangNam::TinhNgay()
{
    int soNgayTruoc[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (iNam % 400 == 0 || (iNam % 4 == 0 && iNam % 100 != 0))
    {
        soNgayTruoc[2] = 29;
    }

    int tongSoNgay = iNgay;
    for (int i = 1; i < iThang; ++i)
    {
        tongSoNgay += soNgayTruoc[i];
    }

    return tongSoNgay;
}

std::istream &operator>>(std::istream &is, NgayThangNam &date)
{
    is >> date.iNgay;
    is >> date.iThang;
    is >> date.iNam;
    return is;
}

std::ostream &operator<<(std::ostream &os, const NgayThangNam &date)
{
    os << date.iNgay << "/" << date.iThang << "/" << date.iNam;
    return os;
}

NgayThangNam NgayThangNam::operator+(int Dn)
{
    NgayThangNam N;
    N.iNgay = this->iNgay + Dn;
    N.iThang = this->iThang;
    N.iNam = this->iNam;

    if (N.iNgay > 28 && N.iThang == 2)
    {
        if (N.iNam % 400 == 0 || (N.iNam % 4 == 0 && N.iNam % 100 != 0))
        {
            if (N.iNgay > 29)
            {
                ++N.iThang;
                N.iNgay -= 29;
            }
        }
        else
        {
            if (N.iNgay > 28)
            {
                ++N.iThang;
                N.iNgay -= 28;
            }
        }
    }

    if (N.iNgay > 30)
    {
        switch (this->iThang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            ++N.iThang;
            N.iNgay -= 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            ++N.iThang;
            N.iNgay -= 30;
            break;
        }
    }

    if (N.iNgay == 31 && N.iThang == 12)
    {
        ++N.iNam;
        N.iNgay = 1;
        N.iThang = 1;
    }

    return N;
}

NgayThangNam NgayThangNam::operator-(int Dn)
{
    NgayThangNam N;
    N.iNgay = this->iNgay - Dn;
    N.iThang = this->iThang;
    N.iNam = this->iNam;

    if (N.iNgay < 1)
    {
        switch (this->iThang)
        {
        case 3:
            if (this->iNam % 400 == 0 || (this->iNam % 4 == 0 && this->iNam % 100 != 0))
            {
                N.iThang = 2;
                N.iNgay += 29;
            }
            else
            {
                N.iThang = 2;
                N.iNgay += 28;
            }
            break;
        case 5:
        case 7:
        case 10:
        case 12:
            --N.iThang;
            N.iNgay += 30;
            break;
        case 1:
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
        case 11:
            --N.iThang;
            N.iNgay += 31;
            break;
        }
    }

    if (N.iThang < 1)
    {
        --N.iNam;
        N.iThang = 12;
    }

    return N;
}

NgayThangNam NgayThangNam::operator-(const NgayThangNam &Dn)
{
    NgayThangNam N;
    N.iNgay = this->iNgay - Dn.iNgay;
    N.iThang = this->iThang - Dn.iThang;
    N.iNam = this->iNam - Dn.iNam;

    if (N.iNgay < 0)
    {
        --N.iThang;
        switch (this->iThang)
        {
        case 2:
            if ((this->iNam % 400 == 0) || (this->iNam % 4 == 0 && this->iNam % 100 != 0))
            {

                N.iNgay += 29;
            }
            else
            {

                N.iNgay += 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            N.iNgay += 30;
            break;
        default:
            N.iNgay += 31;
            break;
        }
    }

    if (N.iThang < 1)
    {
        N.iThang += 12;
        --N.iNam;
    }

    if (N.iNam < 1)
    {

        N.iNam = 1;
        N.iThang -= 12;
    }

    return N;
}

bool NgayThangNam::operator>(const NgayThangNam &a)
{
    if (a.iNam < iNam)
        return true;
    else if (a.iNam == iNam)
    {
        if (a.iThang < iThang)
            return true;
        else if (a.iThang == iThang)
        {
            if (a.iNgay < iNgay)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool NgayThangNam::operator<(const NgayThangNam &a)
{
    if (a.iNam > iNam)
        return true;
    else if (a.iNam == iNam)
    {
        if (a.iThang > iThang)
            return true;
        else if (a.iThang == iThang)
        {
            if (a.iNgay > iNgay)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
bool NgayThangNam::operator<=(const NgayThangNam &a)
{
    if (iNam < a.iNam)
        return true;
    else if (iNam == a.iNam && iThang < a.iThang)
        return true;
    else if (iNam == a.iNam && iThang == a.iThang && iNgay <= a.iNgay)
        return true;
    
    return false;
}



bool NgayThangNam::operator>=(const NgayThangNam &a)
{
    if (iNam > a.iNam)
        return true;
    else if (iNam == a.iNam && iThang > a.iThang)
        return true;
    else if (iNam == a.iNam && iThang == a.iThang && iNgay >= a.iNgay)
        return true;
    else
        return false;
}

bool NgayThangNam::operator==(const NgayThangNam &a)
{
    return (iNgay == a.iNgay && iThang == a.iThang && iNam == a.iNam);
}

bool NgayThangNam::operator!=(const NgayThangNam &a)
{
    return !(iNgay == a.iNgay && iThang == a.iThang && iNam == a.iNam);
}

NgayThangNam &NgayThangNam::operator++()
{
    ++iNgay;

    switch (iThang)
    {
    case 2:
        if ((iNam % 4 == 0 && iNam % 100 != 0) || iNam % 400 == 0)
        {
            if (iNgay > 29)
            {
                ++iThang;
                iNgay = 1;
            }
        }
        else
        {
            if (iNgay > 28)
            {
                ++iThang;
                iNgay = 1;
            }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (iNgay > 30)
        {
            ++iThang;
            iNgay = 1;
        }
        break;
    default:
        if (iNgay > 31)
        {
            ++iThang;
            iNgay = 1;
            if (iThang > 12)
            {
                iThang = 1;
                ++iNam;
            }
        }
        break;
    }

    return *this;
}

NgayThangNam &NgayThangNam::operator--()
{
    --iNgay;

    if (iNgay <= 0)
    {
        --iThang;
        if (iThang == 0)
        {
            --iNam;
            iThang = 12;
        }

        int soNgayTruocDo = 31;
        switch (iThang)
        {
        case 2:
            if ((iNam % 4 == 0 && iNam % 100 != 0) || iNam % 400 == 0)
            {
                soNgayTruocDo = 29;
            }
            else
            {
                soNgayTruocDo = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            soNgayTruocDo = 30;
            break;
        }

        iNgay = soNgayTruocDo;
    }

    return *this;
}
