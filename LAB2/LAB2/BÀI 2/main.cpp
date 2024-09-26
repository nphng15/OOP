#include "TamGiac.h"
#include <bits/stdc++.h>

using namespace std;
int main() {
	TamGiac tg;
	TamGiac tgnew;

	tg.Nhap();
	tgnew = tg;

	cout << "Tam giac vua nhap co: " << endl;
	tg.Xuat();

	cout << "Tam giac sau khi tinh tien theo vector (m,n) = ";
	float m, n;
	cin >> m >> n;
	tg.TinhTien(m, n);

	tg = tgnew;
	cout << "Tam giac sau khi phong to theo ti le (m,n) = ";
	cin >> m >> n;
	tg.PhongTo(m, n);

	tg = tgnew;
	cout << "Tam giac sau khi thu nho theo ti le (m,n) = ";
	cin >> m >> n;
	tg.ThuNho(m, n);

	tg = tgnew;
	cout << "Tam giac sau phep quay tam I(m,n) = ";
	cin >> m >> n;
	cout << "va goc quay alpha = ";
	float goc;
	cin >> goc;
	tg.Quay(m, n, goc);
	return 0;
}
