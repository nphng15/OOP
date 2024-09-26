#include"De.h"
#include"Bo.h"
#include"Cuu.h"
#include<vector>

int main() {
	vector<GiaSuc*> gs;
	int n;
	cout << "Nhap so luong gia suc: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int type;
		cout << "Nhap loai gia suc (1.Bo/2.Cuu/3.De): ";
		cin >> type;
		if (type == 1) {
			gs.push_back(new Bo());
		}
		else if (type == 2) {
			gs.push_back(new Cuu());
		}
		else if (type == 3) {
			gs.push_back(new De());
		}
		else {
			cout << "Vui long nhap lai loai gia suc." << endl;
			i--;
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += gs[i]->tongSua();
		gs[i]->Xuat();
	}
	cout << "Tong so sua: " << sum;
}