#include "De.h"

De::De() {
	soCon = rand() % 3 + 1;
	soSua = rand() % 10 + 1;
	tiengkeu = "Deeeeeeeee";
}

void De::Xuat() {
	cout << "De, " << ", so con: " << soCon << ", so sua: " << soSua << ", tieng keu: " << tiengkeu << endl;
}

int De::tongSua() {
	return soSua;
}