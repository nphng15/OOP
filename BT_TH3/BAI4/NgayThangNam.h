#pragma once

#include <iostream>

class NgayThangNam
{
private:
    int iNgay;
    int iThang;
    int iNam;

public:
    NgayThangNam();
    NgayThangNam(int iNgay, int iThang, int iNam);

    int TinhNgay();

    friend std::istream &operator>>(std::istream &is, NgayThangNam &date);
    friend std::ostream &operator<<(std::ostream &os, const NgayThangNam &date);

    NgayThangNam operator+(int Dn);
    NgayThangNam operator-(int Dn);
    NgayThangNam operator-(const NgayThangNam &Dn);

    bool operator>(const NgayThangNam &a);
    bool operator<(const NgayThangNam &a);
    bool operator<=(const NgayThangNam &a);
    bool operator>=(const NgayThangNam &a);
    bool operator==(const NgayThangNam &a);
    bool operator!=(const NgayThangNam &a);

    NgayThangNam &operator++();
    NgayThangNam &operator--();
};
