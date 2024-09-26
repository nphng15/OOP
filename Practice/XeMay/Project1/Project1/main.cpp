#include "DongCo.h"
#include "BanhXe.h"
#include "XeMay.h"
using namespace std;

int main() {

	XeMay ds[100];
	int n;
	cout << "Nhap so luong xe may: ";
		cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "**Nhap thong tin xe may thu " << i + 1 << ":"<<endl;
		ds[i].Nhap();
	}

	for (int i = 0; i < n; i++) {
		cout<<"Thong tin xe may thu "<<i+1<<":"<<endl;
		ds[i].Xuat();
	}
}