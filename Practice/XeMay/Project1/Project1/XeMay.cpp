#include"XeMay.h"
#include"KhungXe.h"
#include"BanhXe.h"
#include"DongCo.h"
int XeMay::GiaXe() {
	int gia = 0;
	gia = d->getDonGia() + b->getDonGia() + k->getDonGia();
	return gia;
}

void XeMay::Nhap() {
	cout << "- Nhap thong tin dong co: " << endl;
	cout << "   + Nhap loai dong co: ";
	string type;
	cin >> type;
	if (type == "A") {
		d = new DongCoA();
	}
	else if (type == "B") {
		d = new DongCoB();
	}
	else if (type == "C") {
		d = new DongCoC();
	}
	d->Nhap();
	cout<<"- Nhap thong tin banh xe: "<<endl;
	cout<< "   + Nhap loai banh xe: ";
	cin >> type;
	if (type == "D") {
		b = new BanhXeD();
	}
	else if (type == "E") {
		b = new BanhXeE();
	}
	b->Nhap();
	cout<<"- Nhap thong tin khung xe: "<<endl;
	cout<<"   + Nhap loai khung xe(Nhom/Nhua): ";
	cin >> type;
	if (type == "Nhom") {
		k = new KNhom();
	}
	else if (type == "Nhua") {
		k = new KNhua();
	}
	k->Nhap();
}

istream& operator>>(istream& is, XeMay& x) {
	cout << "- Nhap thong tin dong co: " << endl;
	cout << "   + Nhap loai dong co: ";
	string type;
	is >> type;
	if (type == "A") {
		d = new DongCoA();
	}
	else if (type == "B") {
		d = new DongCoB();
	}
	else if (type == "C") {
		d = new DongCoC();
	}
	d->Nhap();
	cout << "- Nhap thong tin banh xe: " << endl;
	cout << "   + Nhap loai banh xe: ";
	is >> type;
	if (type == "D") {
		b = new BanhXeD();
	}
	else if (type == "E") {
		b = new BanhXeE();
	}
	b->Nhap();
	cout << "- Nhap thong tin khung xe: " << endl;
	cout << "   + Nhap loai khung xe(Nhom/Nhua): ";
	is >> type;
	if (type == "Nhom") {
		k = new KNhom();
	}
	else if (type == "Nhua") {
		k = new KNhua();
	}
	k->Nhap();
}

void XeMay::Xuat() {
	cout << "Gia xe may: " << endl;
	cout << "Dong co: " << d->getDonGia() << endl;
	cout << "Banh xe: " << b->getDonGia() << endl;
	cout << "Khung xe: " << k->getDonGia() << endl;
	cout<<"Tong: "<<GiaXe()<<endl;
}

ostream& operator>>(istream& os, XeMay x) {
	os << "Gia xe may: " << endl;
	os << "Dong co: " << d->getDonGia() << endl;
	os << "Banh xe: " << b->getDonGia() << endl;
	os << "Khung xe: " << k->getDonGia() << endl;
	os << "Tong: " << GiaXe() << endl;
}
