#include <iostream>
using namespace std;

class ThoiGian
{
private:
    int gio, phut, giay;

public:
    ThoiGian() : gio(0), phut(0), giay(0) {}

    ThoiGian(int h, int m, int s)
    {
        gio = h;
        phut = m;
        giay = s;
        chuanHoa();
    }

    int chuyenSangGiay() const
    {
        return gio * 3600 + phut * 60 + giay;
    }

    ThoiGian operator+(const ThoiGian &other) const
    {
        int totalSeconds = chuyenSangGiay() + other.chuyenSangGiay();
        int h = totalSeconds / 3600;
        int m = (totalSeconds % 3600) / 60;
        int s = totalSeconds % 60;
        return ThoiGian(h, m, s);
    }

    ThoiGian operator-(const ThoiGian &other) const
    {
        int totalSeconds = chuyenSangGiay() - other.chuyenSangGiay();
        int h = totalSeconds / 3600;
        int m = (totalSeconds % 3600) / 60;
        int s = totalSeconds % 60;
        return ThoiGian(h, m, s);
    }

    friend istream &operator>>(istream &is, ThoiGian &time)
    {
        cout << "Nhap gio, phut, giay: ";
        is >> time.gio >> time.phut >> time.giay;
        time.chuanHoa();
        return is;
    }

    friend ostream &operator<<(ostream &os, const ThoiGian &time)
    {
        os << time.gio << ":" << time.phut << ":" << time.giay;
        return os;
    }

    ThoiGian operator++()
    {
        giay++;
        chuanHoa();
        return *this;
    }

    ThoiGian operator--()
    {
        giay--;
        chuanHoa();
        return *this;
    }

private:
    void chuanHoa()
    {
        int totalSeconds = gio * 3600 + phut * 60 + giay;
        gio = totalSeconds / 3600;
        phut = (totalSeconds % 3600) / 60;
        giay = totalSeconds % 60;
    }
};

int main()
{
    ThoiGian t1, t2;

    cin >> t1;
    cin >> t2;

    cout << "Thoi gian thu nhat: " << t1 << " (" << t1.chuyenSangGiay() << " giay)" << endl;
    cout << "Thoi gian thu hai: " << t2 << " (" << t2.chuyenSangGiay() << " giay)" << endl;

    cout << "Tong hai thoi gian: " << t1 + t2 << endl;
    cout << "Hieu hai thoi gian: " << t1 - t2 << endl;

    cout << "Thoi gian thu nhat tang len 1 giay: " << ++t1 << endl;
    cout << "Thoi gian thu hai giam xuong 1 giay: " << --t2 << endl;

    return 0;
}