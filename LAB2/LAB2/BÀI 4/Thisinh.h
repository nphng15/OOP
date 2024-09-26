#pragma once
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
