#include <iostream>
#include <string.h>
using namespace std;

class ThiSinh
{
private:
	char Ten[20];
	int MSSV;
	int iNgay, iThang, iNam;
	float fToan, fVan, fAnh;

public:
	void Nhap(ThiSinh a[], int &n);
	float Tong(ThiSinh a);
	void Xuat(ThiSinh a[], int n);
};



void ThiSinh::Nhap(ThiSinh A[], int &n)
{
    cout << "So luong thi sinh:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin thi sinh " << i + 1 << ":\n";
        cin.ignore();
        cout << "Nhap ten:";
        cin.getline(A[i].Ten, 20);
        cout << "Nhap MSSV:";
        cin >> A[i].MSSV;
        cout << "Nhap ngay thang nam sinh:";
        cin >> A[i].iNgay >> A[i].iThang >> A[i].iNam;
        cout << "Nhap diem Toan:";
        cin >> A[i].fToan;
        cout << "Nhap diem Van:";
        cin >> A[i].fVan;
        cout << "Nhap diem Anh:";
        cin >> A[i].fAnh;
    }
}
float ThiSinh::Tong(ThiSinh a)
{
    return a.fToan + a.fVan + a.fAnh;
}
void ThiSinh::Xuat(ThiSinh a[], int n)
{
    cout << "Danh sach thi sinh co tong diem lon hon 15: \n";
    int maxx = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (Tong(a[i]) > 15.0)
        {
            cout << a[i].Ten << " " << a[i].MSSV << endl;
        }
        if (Tong(a[i]) > maxx)
        {
            maxx = Tong(a[i]);
            j = i;
        }
    }
}

int main() {
	ThiSinh b[1005];
	int n;
	b->Nhap(b, n);
	b->Xuat(b, n);
}

