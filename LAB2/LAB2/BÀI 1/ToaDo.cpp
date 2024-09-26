#include<iostream>
#include<cmath>
#include "ToaDo.h"

using namespace std;
//Diem::Diem(){}
Diem::Diem(int Hoanh, int Tung) {
	iHoanh = Hoanh;
	iTung = Tung;
}
	Diem::Diem(const Diem& x) {
		this->iHoanh = x.iHoanh;
		this->iTung = x.iTung;
	}

void Diem::SetTungDo(int Tung) {
	this->iTung = Tung;
}
void Diem::SetHoanhDo(int Hoanh) {
	this->iHoanh = Hoanh;
}
void Diem::TinhTien(Diem& a, Diem v) {
	a.iHoanh += v.iHoanh;
	a.iTung += v.iTung;
}
void Diem::Xuat() {
	cout <<"("<< iHoanh << "," << iTung<<")";
}