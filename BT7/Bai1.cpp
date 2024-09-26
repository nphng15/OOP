#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class DaThuc
{
private:
    int bac;
    vector<int> he_so;

public:
    // Hàm khởi tạo mặc định để tạo một đa thức có bậc bằng 0
    DaThuc() : bac(0) {}

    // Hàm khởi tạo để tạo một đa thức bậc n
    DaThuc(int n, const vector<int> &hs) : bac(n), he_so(hs) {}

    // Tính giá trị của đa thức khi biết giá trị của x
    int tinhGiaTri(int x)
    {
        int gia_tri = 0;
        for (int i = 0; i <= bac; i++)
        {
            gia_tri += he_so[i] * pow(x, i);
        }
        return gia_tri;
    }

    // Định nghĩa toán tử << để dịch trái đa thức
    DaThuc operator<<(int x)
    {
        vector<int> hs_moi(bac + x + 1, 0);
        for (int i = 0; i <= bac; i++)
        {
            hs_moi[i + x] = he_so[i];
        }
        return DaThuc(bac + x, hs_moi);
    }

    // Định nghĩa toán tử >> để dịch phải đa thức
    DaThuc operator>>(int x)
    {
        vector<int> hs_moi(max(0, bac - x) + 1, 0);
        for (int i = x; i <= bac; i++)
        {
            hs_moi[i - x] = he_so[i];
        }
        return DaThuc(max(0, bac - x), hs_moi);
    }

    // Định nghĩa toán tử + để cộng hai đa thức
    DaThuc operator+(const DaThuc &other)
    {
        int bac_moi = max(bac, other.bac);
        vector<int> hs_moi(bac_moi + 1, 0);
        for (int i = 0; i <= bac; i++)
        {
            hs_moi[i] += he_so[i];
        }
        for (int i = 0; i <= other.bac; i++)
        {
            hs_moi[i] += other.he_so[i];
        }
        return DaThuc(bac_moi, hs_moi);
    }

    // Định nghĩa toán tử - để trừ hai đa thức
    DaThuc operator-(const DaThuc &other)
    {
        int bac_moi = max(bac, other.bac);
        vector<int> hs_moi(bac_moi + 1, 0);
        for (int i = 0; i <= bac; i++)
        {
            hs_moi[i] += he_so[i];
        }
        for (int i = 0; i <= other.bac; i++)
        {
            hs_moi[i] -= other.he_so[i];
        }
        return DaThuc(bac_moi, hs_moi);
    }

    // Định nghĩa toán tử * để nhân hai đa thức
    DaThuc operator*(const DaThuc &other)
    {
        int bac_moi = bac + other.bac;
        vector<int> hs_moi(bac_moi + 1, 0);
        for (int i = 0; i <= bac; i++)
        {
            for (int j = 0; j <= other.bac; j++)
            {
                hs_moi[i + j] += he_so[i] * other.he_so[j];
            }
        }
        return DaThuc(bac_moi, hs_moi);
    }

    DaThuc operator++()
    {
        vector<int> hs_moi = he_so;
        hs_moi[bac]++;
        return DaThuc(bac, hs_moi);
    }

    DaThuc operator--()
    {
        vector<int> hs_moi = he_so;
        hs_moi[bac]--;
        return DaThuc(bac, hs_moi);
    }

    friend ostream &operator<<(ostream &os, const DaThuc &dt)
    {
        for (int i = dt.bac; i >= 0; i--)
        {
            if (dt.he_so[i] != 0)
            {
                os << dt.he_so[i] << "x^" << i;
                if (i != 0)
                {
                    os << " + ";
                }
            }
        }
        return os;
    }
};

int main()
{

    int bac;
    cout << "Nhap bac cua da thuc thu nhat: ";
    cin >> bac;
    vector<int> he_so(bac + 1);
    cout << "Nhap cac he so cua da thuc thu nhat (tu bac cao den bac thap):" << endl;
    for (int i = bac; i >= 0; i--)
    {
        cout << "Nhap he so cua x^" << i << ": ";
        cin >> he_so[i]; 
    }
    DaThuc dt1(bac, he_so);
    cout << "Da thuc thu nhat: " << dt1 << endl;

    cout << "Nhap bac cua da thuc thu hai: ";
    cin >> bac;
    he_so.resize(bac + 1);
    cout << "Nhap cac he so cua da thuc thu hai (tu bac cao den bac thap):" << endl;
    for (int i = bac; i >= 0; i--)
    {
        cout << "Nhap he so cua x^" << i << ": ";
        cin >> he_so[i];
    }
    DaThuc dt2(bac, he_so);
    cout << "Da thuc thu hai: " << dt2 << endl;

    DaThuc tong = dt1 + dt2;
    cout << "Tong hai da thuc: " << tong << endl;

    DaThuc hieu = dt1 - dt2;
    cout << "Hieu hai da thuc: " << hieu << endl;

    DaThuc tich = dt1 * dt2;
    cout << "Tich hai da thuc: " << tich << endl;

    DaThuc dt1_tang_he_so = ++dt1;
    cout << "Da thuc thu nhat tang he so bac cao nhat len 1: " << dt1_tang_he_so << endl;

    DaThuc dt2_giam_he_so = --dt2;
    cout << "Da thuc thu hai giam he so bac cao nhat xuong 1: " << dt2_giam_he_so << endl;
    return 0;
}
