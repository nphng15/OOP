#include <iostream>
#include "NgayThangNam.h"

int main()
{
    NgayThangNam a, b, c;
    std::cout << "Nhap ngay ban dau: " << std::endl;
    std::cin >> a;
    std::cout << "Nhap ngay can su dung de thuc hien tinh toan: " << std::endl;
    std::cin >> b;
    std::cout << "Nhap ngay can cong/tru: " << std::endl;
    int day;
    std::cin >> day;

    NgayThangNam cong, tru, trudate;
    cong = a + day;
    tru = a - day;
    trudate = a - b;
    NgayThangNam d = a;
    NgayThangNam e = a;
    std::cout << "Ngay ban dau sau khi cong/tru " << day << " ngay: " << std::endl;
    std::cout << "Sau khi cong: " << cong << std::endl;
    std::cout << "Sau khi tru: " << tru << std::endl;
    std::cout << "Ngay ban dau sau khi cong len 1 ngay: " << ++d << std::endl;
    std::cout << "Ngay ban dau sau khi tru di 1 ngay: " << --e << std::endl;
    std::cout << "Ngay ban dau sau khi tru cho " << b << " :" << trudate << std::endl;

    std::cout << "Cac phep so sanh:" << std::endl;
    std::cout << "Nhap ngay can so sanh: " << std::endl;
    NgayThangNam sosanh;
    std::cin >> sosanh;
    if (a > sosanh)
    {
        std::cout << a << " > " << sosanh << std::endl;
    }
    if (a < sosanh)
    {
        std::cout << a << " < " << sosanh << std::endl;
    }
    if (a >= sosanh)
    {
        std::cout << a << ">=" << sosanh << std::endl;
    }
    if (a <= sosanh)
    {
        std::cout << a << "<=" << sosanh << std::endl;
    }
    if (a == sosanh)
    {
        std::cout << a << " == " << sosanh << std::endl;
    }
    if (a != sosanh)
    {
        std::cout << a << " != " << sosanh << std::endl;
    }
    return 0;
}
