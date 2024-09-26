#include "BanhXe.h"

void BanhXe::Nhap() {
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap hang san xuat: ";
	cin >> HangSX;

}
void BanhXe::Xuat() {
	cout << "Ma so: " << MaSo << endl;
	cout << "Loai: " << Loai << endl;
	cout << "DonGia: " << DonGia << endl;
	cout << "Hang san xuat: " << HangSX << endl;
}
int BanhXe::getDonGia() {
	return DonGia;
}