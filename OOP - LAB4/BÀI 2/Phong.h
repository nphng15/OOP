#pragma once
#include <iostream>
using namespace std;
class Phong
{
protected:
	int SoDem;
	int PhiDichvu, PhiPhucvu;
public:
	Phong();
	int getSoDem()
	{
		return SoDem;
	}
	~Phong() {};
	void Nhap();
	int DoanhThuPhong();
	void Xuat();
};
class Business : public Phong
{
public:
	void Nhap();
	int DoanhThuPhong();
	void Xuat();
};
class Premium : public Phong
{
public:
	void Nhap();
	int DoanhThuPhong();
	void Xuat();

};
class Deluxe : public Phong
{
public:
	void Nhap();
	int DoanhThuPhong();
	void Xuat();
};
