#include <iostream>
#include <cmath>

class Diem
{
private:
    float x;
    float y;

public:
    Diem() : x(0), y(0) {}

    Diem(float xVal, float yVal) : x(xVal), y(yVal) {}

    void NhapDiem()
    {
        std::cout << "Nhap toa do x: ";
        std::cin >> x;
        std::cout << "Nhap toa do y: ";
        std::cin >> y;
    }

    void XuatDiem()
    {
        std::cout << "(" << x << ";" << y << ")";
    }

    void Tinhtien(float xv, float yv)
    {
        x += xv;
        y += yv;
    }

    float KhoangCach(Diem other)
    {
        float dx = x - other.x;
        float dy = y - other.y;
        return std::sqrt(dx * dx + dy * dy);
    }
};

int main()
{
    int N;
    std::cout << "Nhap so diem N: ";
    std::cin >> N;

    Diem *danhSachDiem = new Diem[N];

    for (int i = 0; i < N; ++i)
    {
        std::cout << "Nhap diem thu " << i + 1 << ":\n";
        danhSachDiem[i].NhapDiem();
    }

    std::cout << "Cac diem vua nhap:\n";
    for (int i = 0; i < N; ++i)
    {
        danhSachDiem[i].XuatDiem();
        std::cout << "\n";
    }

    float maxDistance = 0;
    float minDistance = std::numeric_limits<float>::max();

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            float distance = danhSachDiem[i].KhoangCach(danhSachDiem[j]);
            maxDistance = std::max(maxDistance, distance);
            minDistance = std::min(minDistance, distance);
        }
    }

    std::cout << "Khoang cach lon nhat: " << maxDistance << "\n";
    std::cout << "Khoang cach nho nhat: " << minDistance << "\n";

    float xv, yv;
    std::cout << "Nhap vector tinh tien (xv, yv): ";
    std::cin >> xv >> yv;

    for (int i = 0; i < N; ++i)
    {
        danhSachDiem[i].Tinhtien(xv, yv);
    }

    std::cout << "Toa do cac diem sau khi tinh tien:\n";
    for (int i = 0; i < N; ++i)
    {
        danhSachDiem[i].XuatDiem();
        std::cout << "\n";
    }

    delete[] danhSachDiem;
    return 0;
}
