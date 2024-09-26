#include <iostream>
#include <cmath>
#include <vector>

class Diem
{
public:
    float x, y;

    Diem() : x(0), y(0) {}
    Diem(float xVal, float yVal) : x(xVal), y(yVal) {}
    void Tinhtien(float xv, float yv)
    {
        x += xv;
        y += yv;
    }
    float KhoangCach(Diem &other)
    {
        return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
};

class TamGiac
{
private:
    Diem A, B, C;

public:
    TamGiac() : A(), B(), C() {}
    TamGiac(Diem &AVal, Diem &BVal, Diem &CVal) : A(AVal), B(BVal), C(CVal) {}

    void NhapTamGiac()
    {
        std::cout << "Nhap diem A:\n";
        std::cin >> A.x >> A.y;
        std::cout << "Nhap diem B:\n";
        std::cin >> B.x >> B.y;
        std::cout << "Nhap diem C:\n";
        std::cin >> C.x >> C.y;
    }

    void XuatTamGiac()
    {
        std::cout << "A(" << A.x << ", " << A.y << "), ";
        std::cout << "B(" << B.x << ", " << B.y << "), ";
        std::cout << "C(" << C.x << ", " << C.y << ")\n";
    }

    void TinhtienTamGiac(float xv, float yv)
    {
        A.Tinhtien(xv, yv);
        B.Tinhtien(xv, yv);
        C.Tinhtien(xv, yv);
    }

    float ChuVi()
    {
        return A.KhoangCach(B) + B.KhoangCach(C) + C.KhoangCach(A);
    }

    float DienTich()
    {
        float a = A.KhoangCach(B);
        float b = B.KhoangCach(C);
        float c = C.KhoangCach(A);
        float p = ChuVi() / 2;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

int main()
{
    int N;
    std::cout << "Nhap so luong tam giac N: ";
    std::cin >> N;
    std::vector<TamGiac> tamGiacs;
    tamGiacs.resize(N);

    for (int i = 0; i < N; ++i)
    {
        std::cout << "Nhap tam giac thu " << i + 1 << ":\n";
        tamGiacs[i].NhapTamGiac();
    }

    std::cout << "Cac tam giac vua nhap:\n";
    for (int i = 0; i < N; ++i)
    {
        tamGiacs[i].XuatTamGiac();
    }

    float maxChuVi = 0;
    float maxDienTich = 0;
    TamGiac tamGiacMaxChuVi, tamGiacMaxDienTich;

    for (int i = 0; i < N; ++i)
    {
        float chuVi = tamGiacs[i].ChuVi();
        float dienTich = tamGiacs[i].DienTich();

        if (chuVi > maxChuVi)
        {
            maxChuVi = chuVi;
            tamGiacMaxChuVi = tamGiacs[i];
        }

        if (dienTich > maxDienTich)
        {
            maxDienTich = dienTich;
            tamGiacMaxDienTich = tamGiacs[i];
        }
    }

    std::cout << "Tam giac co chu vi lon nhat:\n";
    tamGiacMaxChuVi.XuatTamGiac();

    std::cout << "Tam giac co dien tich lon nhat:\n";
    tamGiacMaxDienTich.XuatTamGiac();

    Diem V;
    std::cout << "Nhap vector tinh tien V (x, y): ";
    std::cin >> V.x >> V.y;

    std::cout << "Cac tam giac sau khi tinh tien theo vector V:\n";
    for (int i = 0; i < N; ++i)
    {
        tamGiacs[i].TinhtienTamGiac(V.x, V.y);
        tamGiacs[i].XuatTamGiac();
    }

    return 0;
}
