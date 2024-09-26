#pragma once
#include<string>
#include<iostream>
using namespace std;
class DongCo {
protected:
	int MaSo;
	int DonGia;
	string Loai;
	string HangSX;
public:
	DongCo() {
		this->MaSo = 0;
		this->DonGia = 0;
		this->Loai = "";
		this->HangSX = "";
	}
	~DongCo() {}

	virtual void Nhap() {
		cout << "Nhap ma so dong co: ";
		cin >> MaSo;
		cout << "Nhap hang san xuat: ";
		cin >> HangSX;


	}
	virtual int getDonGia()=0;

	virtual void Xuat() {
		cout << "Ma so: " << MaSo << endl;
		cout << "Loai dong co: " << Loai << endl;
		cout << "Don gia: " << getDonGia() << endl;
		cout << "Hang san xuat: " << HangSX << endl;
	}
};

class DongCoA : public DongCo {

public:
	DongCoA(){
		this->Loai = 'A';
		this->DonGia = 500;
	}
	~DongCoA() {}

	void Nhap();
	int getDonGia();
	void Xuat();
};

class DongCoB : public DongCo {
private:
	int TieuChuan;
public:
	DongCoB(){
		this->TieuChuan = 0;
		this->Loai = 'B';
	}
	~DongCoB() {}

	void Nhap();
	int getDonGia();
	void Xuat();
};

class DongCoC : public DongCo {
public:
	DongCoC() {
		this->DonGia = 400;
		this->Loai = "C";
	}
	~DongCoC() {}

	void Nhap();
	int getDonGia();
	void Xuat();

};