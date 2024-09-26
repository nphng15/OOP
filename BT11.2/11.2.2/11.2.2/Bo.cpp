#include"Bo.h"

Bo::Bo() {
	soCon = rand() % 3 + 1;
	soSua = rand() % 20 + 1;
	tiengkeu="Boooooo";
}

void Bo::Xuat() {
	cout << "Bo, "<<", so con: "<<soCon<<", so sua: "<<soSua<<", tieng keu: "<<tiengkeu<<endl;
}

int Bo::tongSua() {
	return soSua;
}