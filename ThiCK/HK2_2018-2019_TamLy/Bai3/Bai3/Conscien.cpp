#include "Conscien.h"


void Consien::Check(int C) {
	if (C >= 70 && C <= 100) {
		cout << C << "| Tu chu tan tam (C): ";
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi cham chi, co kha nang chiu ap luc tot. Ho thuong la nguoi gan bo, trung thanh voi to chuc.";
		cout << endl;
		return;
	}
	else if (C <= 30 && C >= 0) {
		cout << C << "| Tu chu tan tam (C): ";
		cout << "Nguoi co diem thap o yeu to nay thuong de bo cuoc, kha nang chiu ap luc, tuan thu ky luat cua to chuc kem.";
		cout << endl;
		return;
	}
	else {
		cout << C << "| Tu chu tan tam (C): ";
		cout << "Khong xac dinh ro";
		cout << endl;
		return;
	}
}