#pragma once
#include<iostream>
#include<string>
using namespace std;

class KhungXe {
protected:
	int MaSo;
	string LoaiKhung;
	int DonGia;
	string HangSX;
public:
	KhungXe() {
		this->MaSo = 0;
		this->LoaiKhung = "";
		this->DonGia = 0;
		this->HangSX = "";
	}
	~KhungXe() {}

	void Nhap();
	int getDonGia();
	void Xuat();
};

class KNhom : public KhungXe {
public:
	KNhom() {
		this->LoaiKhung = "Khung nhom";
		this->DonGia = 500;
	}
	~KNhom() {}



};

class KNhua : public KhungXe {
public:
	KNhua() {
		this->LoaiKhung = "Khung nhua";
		this->DonGia = 200;
	}
	~KNhua() {}
};