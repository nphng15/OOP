#include <iostream>
using namespace std;
#include <math.h>
class Vector
{
private:
    int iSize;
    int *Elements;

public:
    Vector() : iSize{0}, Elements{NULL} {}
    Vector(int s) : iSize{s}, Elements{new int[s]}
    {
        for (int i = 0; i < iSize; ++i)
        {
            Elements[i] = 0; // Khởi tạo tất cả các phần tử của mảng là 0
        }
    }
    ~Vector()
    {
        delete[] Elements; // Giải phóng bộ nhớ
    }
    void Nhap();
    double Norm();
    void TinhTien();
    Vector Tong(), Hieu();
    void Xuat();
};

void Vector::Nhap()
{
    cout << "Nhap kich co vector: ";
    cin >> iSize;
    Elements = new int[iSize];
    cout << "Nhap cac phan tu vector: ";
    for (int i = 0; i < iSize; i++)
    {
        cin >> Elements[i];
    }
}
double Vector::Norm()
{
    double s = 0;
    for (int i = 0; i < iSize; i++)
    {
        s += Elements[i] * Elements[i];
    }
    return sqrt(s);
}
void Vector::TinhTien()
{
    for (int i = 0; i < iSize; i++)
    {
        Elements[i] *= 2;
    }
}

Vector Vector::Tong()
{
    Vector kq(this->iSize);
    for (int i = 0; i < this->iSize; i++)
    {
        kq.Elements[i] = this->Elements[i] * 2;
    }
    return kq;
}
Vector Vector::Hieu()
{
    Vector kq(this->iSize);
    return kq;
}
void Vector::Xuat()
{
    for (int i = 0; i < iSize; i++)
    {
        cout << Elements[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    Vector v[n];
    for (int i = 0; i < n; i++)
    {
        v[i].Nhap();
    }
    cout << "Cac vector vua nhap la: " << endl;
    for (int i = 0; i < n; i++)
    {
        v[i].Xuat();
    }
    for (int i = 0; i < n; i++)
    {
        v[i].TinhTien();
    }
    cout << "Cac vector sau khi tinh tien la: " << endl;
    for (int i = 0; i < n; i++)
    {
        v[i].Xuat();
    }
    cout<<"Tong cac vector la: "<<endl;
    for(int i=0;i<n;i++){
        v[i].Tong().Xuat();
    }
    cout<<"Hieu cac vector la: "<<endl;
    for(int i=0;i<n;i++){
        v[i].Hieu().Xuat();
    }
}