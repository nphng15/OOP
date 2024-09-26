# include"NhanVien.h"


void NhanVien::Nhap() {
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Nhap ngay sinh: ";
	getline(cin, ngaysinh);
}

void NhanVien::Xuat() {
	cout << "Ho ten: " << hoten << endl;
	cout << "Ngay sinh: " << ngaysinh << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
