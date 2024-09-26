#include"KhungXe.h"

void KhungXe::Nhap() {
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap hang san xuat: ";
	cin >> HangSX;

}
void KhungXe::Xuat() {
	cout << "Ma so: " << MaSo << endl;
	cout << "Loai khung: " << LoaiKhung << endl;
	cout << "DonGia: " << DonGia << endl;
	cout << "Hang san xuat: " << HangSX << endl;

}
int KhungXe::getDonGia() {
	return DonGia;
}