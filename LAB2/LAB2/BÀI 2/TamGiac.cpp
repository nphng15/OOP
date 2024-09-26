#include "TamGiac.h"
#include <bits/stdc++.h>

using namespace std;

void TamGiac::Nhap() {
	cout << "Nhap toa do diem A: ";
	cin >> a[0] >> a[1];
	cout << "Nhap toa do diem B: ";
	cin >> b[0] >> b[1];
	cout << "Nhap toa do diem C: ";
	cin >> c[0] >> c[1];
}

void TamGiac::Xuat() {
	cout << "Toa do diem A:" << fixed << setprecision(1)<< a[0] << " " << a[1] << endl;
	cout << "Toa do diem B:" << b[0] << " " << b[1] << endl;
	cout << "Toa do diem C:" << c[0] << " " << c[1] << endl;
}


void TamGiac::TinhTien(float m, float n) {
	a[0] += m; a[1] += n;
	b[0] += m; b[1] += n;
	c[0] += m; c[1] += n;
	Xuat();
}

void TamGiac::PhongTo(float m, float n) {
	a[0] *= m; a[1] *= n;
	b[0] *= m; b[1] *= n;
	c[0] *= m; c[1] *= n;
	Xuat();
}

void TamGiac::ThuNho(float m, float n) {
	a[0] /= m; a[1] /= n;
	b[0] /= m; b[1] /= n;
	c[0] /= m; c[1] /= n;
	Xuat();
}

void TamGiac::Quay(float m, float n, float goc) {
	float x = goc * 3.14159 / 180;
	float aa[2] = { a[0],a[1] };
	float bb[2] = { b[0],b[1] };
	float cc[2] = { c[0],c[1] };
	a[0] = m + (aa[0] - m) * cos(x) - (aa[1] - n) * sin(x);
	a[1] = n + (aa[0] - m) * sin(x) + (aa[1] + n) * cos(x);
	b[0] = m + (bb[0] - m) * cos(x) - (bb[1] - n) * sin(x);
	b[1] = n + (bb[0] - m) * sin(x) + (bb[1] + n) * cos(x);
	c[0] = m + (cc[0] - m) * cos(x) - (cc[1] - n) * sin(x);
	c[1] = n + (cc[0] - m) * sin(x) + (cc[1] + n) * cos(x);
	Xuat();
}
