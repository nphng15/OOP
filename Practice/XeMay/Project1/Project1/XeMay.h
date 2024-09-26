#pragma once
#include"BanhXe.h"
#include"DongCo.h"
#include"KhungXe.h"
#include<iostream>
using namespace std;

class XeMay {
protected:
	DongCo* d;
	BanhXe* b;
	KhungXe* k;
public:
	XeMay(){
	
	}
	~XeMay() {}


	void Nhap();
	int GiaXe();
	void Xuat();
};