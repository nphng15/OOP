#pragma once
#include <bits/stdc++.h>
using namespace std;
class TamGiac {
private:
	float a[2], b[2], c[2];
public:
	void Nhap();
	void Xuat();
	float ChuVi();
	float DienTich();
	void TinhTien(float m, float n);
};


void TamGiac::Nhap() {
	cout << "Nhap toa do diem A: ";
	cin >> a[0] >> a[1];
	cout << "Nhap toa do diem B: ";
	cin >> b[0] >> b[1];
	cout << "Nhap toa do diem C: ";
	cin >> c[0] >> c[1];
}

void TamGiac::Xuat() {
	cout << "Toa do diem A:" << fixed << setprecision(1) << a[0] << " " << a[1] << endl;
	cout << "Toa do diem B:" << b[0] << " " << b[1] << endl;
	cout << "Toa do diem C:" << c[0] << " " << c[1] << endl;
}


void TamGiac::TinhTien(float m, float n) {
	a[0] += m; a[1] += n;
	b[0] += m; b[1] += n;
	c[0] += m; c[1] += n;
	Xuat();
}

float TamGiac::ChuVi() {
	float m =(float)sqrt(pow(b[0] - a[0], 2) + pow(b[1] - a[1], 2));
	float n = (float)sqrt(pow(b[0] - c[0], 2) + pow(b[1] - c[1], 2));
	float p = (float)sqrt(pow(c[0] - a[0], 2) + pow(c[1] - a[1], 2));
	return m + n + p;
}

float TamGiac::DienTich() {
	float m = (float)sqrt(pow(b[0] - a[0], 2) + pow(b[1] - a[1], 2));
	float n = (float)sqrt(pow(b[0] - c[0], 2) + pow(b[1] - c[1], 2));
	float p = (float)sqrt(pow(c[0] - a[0], 2) + pow(c[1] - a[1], 2));
	float q = (m + n + p) / 2;
	return sqrt(q * (q - m) * (q - n) * (q - p));
}


int main() {
	TamGiac tg[10];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin tam giac thu: " << i + 1 << endl;
		tg[i].Nhap();
		cout << endl;
	}
	float maxcv = tg[0].ChuVi();
	float maxdt = tg[0].DienTich();
	int cv = 0;
	int dt = 0;
	for (int i = 0; i < n; i++) {
		cout << "Thong tin tam giac thu: " << i + 1 << endl;
		tg[i].Xuat();
		if (tg[i].ChuVi() > maxcv) {
			maxcv = tg[i].ChuVi();
			cv = i;
		}
		if (tg[i].DienTich() > maxdt) {
			maxdt = tg[i].DienTich();
			dt = i;
		}
	}
	cout << "Tam giac co chu vi lon nhat la: " << cv << endl;
	cout << "Tam giac co dien tich lon nhat la: " << dt << endl;

	cout << "Nhap vector tinh tien: ";
	float y,z;
	cin >> y >> z;
	for (int i = 0; i < n; i++) {
		cout << "Thong tin sau khi tinh tien tam giac thu: " << i + 1 << endl;
		tg[i].TinhTien(y,z);
		cout << endl;
	}


	return 0;

}
