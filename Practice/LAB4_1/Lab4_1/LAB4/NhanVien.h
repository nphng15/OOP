#pragma once
#include<iostream>
#include<string>
using namespace std;
class NhanVien {
protected:
	int maNV;
	string Ten;
	int luongCB;
public:
	NhanVien() {}
	~NhanVien() {}
	void Nhap() {
		cout << "Nhap ma nhan vien: ";
		cin >> maNV;
		cout << "Nhap ten nhan vien: ";
		cin.ignore();
		getline(cin, Ten);
		cout << "Nhap luong co ban: ";
		cin >> luongCB;
	}
	void Xuat() {
		cout<< "Ma nhan vien: " << maNV << endl;
		cout << "Ten nhan vien: " << Ten << endl;
		cout << "Luong co ban: " << luongCB << endl;	
	}
};

