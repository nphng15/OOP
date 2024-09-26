#include"Extraversion.h"

void Extraversion::Check(int E) {
	if (E >= 70 && E <= 100) {
		cout << E << "| Huong ngoai (E): ";
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh, nang dong, giao tiep tot, thich the hien ban than.";
		cout << endl;
		return;
	}
	else if (E <= 30 && E >= 0) {
		cout << E << "| Huong ngoai (E): ";
		cout << "Nguoi co diem thap o yeu to nay thuong ngai giao tiep, khong thich su noi bat, thich duoc lam viec doc lap.";
		cout << endl;
		return;
	}
	else {
		cout << E << "| Huong ngoai (E): ";
		cout << "Khong xac dinh ro";
		cout << endl;
		return;
	}
}
