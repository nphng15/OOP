#include<iostream>
#include "Phong.h"
using namespace std;

int main()
{
	Deluxe a, b;
	Premium c, d;
	Business e;
	double D,P,B;
	int busi = 0, pre = 0, del = 0;
	e.Nhap();
	busi = e.DoanhThuPhong();
	e.Xuat();
	c.Nhap();
	pre = c.DoanhThuPhong();
	c.Xuat();
	d.Nhap();
	pre += d.DoanhThuPhong();
	d.Xuat();
	b.Nhap();
	del = b.DoanhThuPhong();
	b.Xuat();
	a.Nhap();
	del += a.DoanhThuPhong();
	a.Xuat();
	cout << "Doanh thu cao nhat la loai phong: ";
	if (del >= pre && del >= busi)
	{
		cout << "Deluxe";
	}
	else if (pre >= del && pre >= busi)
	{
		cout << "Premium";
	}
	else
	{
		cout << "Business";
	}



}