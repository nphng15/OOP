#include"Cuu.h"

Cuu::Cuu() {
	soCon = rand() % 3 + 1;
	soSua = rand() % 5 + 1;
	tiengkeu = "Cuuuuuuu";
}

int Cuu::tongSua() {
	return soSua;
}

void Cuu::Xuat() {
	cout << "Cuu, " << ", so con: " << soCon << ", so sua: " << soSua << ", tieng keu: " << tiengkeu << endl;
}

