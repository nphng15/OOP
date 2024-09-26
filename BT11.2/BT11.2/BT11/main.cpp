#include"NhanVien.h"
#include"SanXuat.h"
#include"VanPhong.h"
#include<vector>

int main() {

	vector<NhanVien*> nv;
	
	cout << "Nhap so nhan vien: ";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Nhap nhan vien thu " << i + 1 << " (SX:1/VP:2):";
		int type;
		cin >> type;
		if (type == 1) {
			nv.push_back(new SanXuat());
			nv[i]->Nhap();
		}
		else if (type == 2) {
			nv.push_back(new VanPhong());
			nv[i]->Nhap();
		}
		else {
			cout << "Vui long nhap lai loai nhan vien."<<endl;
			i--;
		}
	}

	for (int i = 0; i < n; i++) {
		nv[i]->Xuat();
	}
	
	return 0;
}