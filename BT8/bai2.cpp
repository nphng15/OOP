#include <iostream>
using namespace std;

class Person
{
private:
    string Name;
    string Address;
    int BirthYear;

public:
    friend istream &operator>>(istream &in, Person &a)
    {
        cout << "Nhap ten: ";
        getline(in, a.Name);
        cout << "Nhap nam sinh: ";
        in >> a.BirthYear;
        in.ignore();
        cout << "Nhap dia chi: ";
        getline(in, a.Address);
        return in;
    }
    friend ostream &operator<<(ostream &out, Person &a)
    {
        return out << a.Name << " " << a.BirthYear << " " << a.Address << endl;
    }
};

typedef class SinhVien : public Person
{
private:
    string mssv;
    double Gpa;

public:
    friend istream &operator>>(istream &in, SinhVien &a)
    {
        Person &tmp = a;
        in >> tmp;
        cout << "Nhap mssv: ";
        getline(cin, a.mssv);
        cout << "Nhap Gpa: ";
        in >> a.Gpa;
        return in;
    }

    friend ostream &operator<<(ostream &out, SinhVien &a)
    {
        Person &tmp = a;
        out << tmp;
        out << a.mssv << " " << a.Gpa << " Truong hoc" << endl;
        return out;
    }
} Sv;

typedef class CongNhan : public Person
{
private:
    double LuongCoBan;
    int SoNgayPhep;
    int SoNamKinhNghiem;

public:
    friend istream &operator>>(istream &in, CongNhan &a)
    {
        Person &tmp = a;
        in >> tmp;
        cout << "Nhap Luong co ban: ";
        in >> a.LuongCoBan;
        cout << "Nhap So ngay phep: ";
        in >> a.SoNgayPhep;
        cout << "Nhap So nam kinh nghiem: ";
        in >> a.SoNamKinhNghiem;
        return in;
    }

    friend ostream &operator<<(ostream &out, CongNhan &a)
    {
        Person &tmp = a;
        out << tmp;
        out << a.LuongCoBan << " " << a.SoNgayPhep << " ngay phep, " << a.SoNamKinhNghiem << " nam kinh nghiem. Nha may" << endl;
        return out;
    }
} Cn;

typedef class CaSi : public Person
{
private:
    string DongNhac;
    int SoShow;
    int SoAlbum;

public:
    friend istream &operator>>(istream &in, CaSi &a)
    {
        Person &tmp = a;
        in >> tmp;
        cout << "Nhap Dong nhac: ";
        getline(in, a.DongNhac);
        cout << "Nhap Show da bieu dien: ";
        in >> a.SoShow;
        cout << "Nhap So Album da phat hanh: ";
        in >> a.SoAlbum;
        return in;
    }

    friend ostream &operator<<(ostream &out, CaSi &a)
    {
        Person &tmp = a;
        out << tmp;
        out << "Dong nhac " << a.DongNhac << ". So Show da dien: " << a.SoShow << " ,so Album ra mat: " << a.SoAlbum << ". San khau " << endl;
        return out;
    }
} Cs;
typedef class BacSi : public Person
{
private:
    string KhoaChuyenMon;
    int SoNamChuaBenh;

public:
    friend istream &operator>>(istream &in, BacSi &a)
    {
        Person &tmp = a;
        in >> tmp;
        cout << "Nhap Khoa chuyen mon: ";
        getline(in, a.KhoaChuyenMon);
        cout << "Nhap So nam chua benh: ";
        in >> a.SoNamChuaBenh;

        return in;
    }

    friend ostream &operator<<(ostream &out, BacSi &a)
    {
        Person &tmp = a;
        out << tmp;
        out << "Khoa chuyen mon: " << a.KhoaChuyenMon << ", " << a.SoNamChuaBenh << " nam kinh nghiem chua benh. Benh vien " << endl;
        return out;
    }
} Bs;
int main()
{
    Sv a;
    Cn b;
    Cs c;
    Bs d;
    cout << "Doi tuong Sinh vien: " << endl;
    cin >> a;
    cin.ignore();
    cout << "Doi tuong Cong nhan: " << endl;
    cin >> b;
    cin.ignore();
    cout << "Doi tuong Ca si: " << endl;
    cin >> c;
    cin.ignore();
    cout << "Doi tuong Bac si: " << endl;
    cin >> d;

    cout << a << endl
         << b << endl
         << c << endl
         << d;
}