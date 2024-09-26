#pragma once
#include<iostream>
#include<string>
using namespace std;

class NhanVien {
protected:
	string hoten;
	string ngaysinh;
	int luong;
public:
	NhanVien() : hoten(""), ngaysinh("dd/mm/yy"), luong(0) {}
	virtual ~NhanVien() {}
	virtual void Nhap();
	void Xuat();
	virtual int TinhLuong() = 0;
};