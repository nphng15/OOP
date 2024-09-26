#pragma once
#include<iostream>
#include<string>
using namespace std;

class BanhXe {
protected:
	int MaSo;
	string Loai;
	int DonGia;
	string HangSX;
public:
	BanhXe() {
		this->MaSo = 0;
		this->Loai = "";
		this->DonGia = 0;
		this->HangSX = "";
	}
	~BanhXe() {}

	void Nhap();
	int getDonGia();
	void Xuat();
};

class BanhXeD : public BanhXe {
public:
	BanhXeD() {
		this->Loai = "D";
		this->DonGia = 400;
	}
	~BanhXeD(){}
};

class BanhXeE : public BanhXe {
public:
	BanhXeE() {
		this->Loai = "E";
		this->DonGia = 300;
	}
	~BanhXeE() {}
};