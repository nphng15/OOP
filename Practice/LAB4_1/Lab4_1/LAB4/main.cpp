#include "NhanVien.h"
#include "KySu.h"
#include "QuanLy.h"
#include <vector>
using namespace std;
int main() {
	vector<NhanVien*> list;
	int n;
	cout<<"Nhap so nhan vien: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		int type;
		cout<<"Nhap loai nhan vien (1: Nhan vien, 2: Ky su, 3: Quan ly): ";
		cin >> type;
		if (type == 1) {
			NhanVien* nv = new NhanVien();
			nv->Nhap();
			list.push_back(nv);
		}
		else if (type == 2) {
			KySu* ks = new KySu();
			ks->Nhap();
			list.push_back(ks);
		}
		else if (type == 3) {
			QuanLy* ql = new QuanLy();
			ql->Nhap();
			list.push_back(ql);
		}
		else {
			cout << "Nhap sai loai nhan vien" << endl;
			i--;
	}

		cout<< "-------------------" << endl;
		cout<<"Thong tin nhan vien "<<i+1<<endl;
		for (int i = 0; i < n; i++) {
			list[i]->Xuat() << endl;
		}
	}
	return 0;
}