
#include<iostream>

void NguoiLD::Nhap() {
	cout << "Nhap ma so BHXH: ";
	cin >> MaSoBHXH;
	cout<<"Nhap thang va nam bat dau dong BHXH: ";
	cin >> iThangBD >> iNamBD;
	cout<<"Nhap thang va nam ket thuc dong BHXH: ";
	cin >> iThangKT >> iNamKT;
	cout << "Nhap muc thu nhap thang: ";
	cin>>MucThuNhapThang;
	cout<<"Nhap loai BHXH (1. Bat buoc/2. Tu nguyen): ";
	cin>> LoaiBHXH;
	cout << "Nhap loai doi tuong (1. Ho ngheo/2. Doi tuong khac): ";
	cin >> LoaiDoiTuong;
}

int NguoiLD::HeSoTruotGia(int iThang, int iNam) {
	if (iNam < 2014) {
		return 3.06;
	}
	else if (iNam < 2023) {
		return 1.15;
	}
	else if (iNam < 2024) {
		return 1;
	}
}

