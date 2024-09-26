#include"Openess.h"

void Openess::Check(int O) {
	if (O >= 70 && O <=100) {
		cout << O << "| San sang trai nghiem (O): ";
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi thich nhung y tuong moi, thich hieu biet nhieu linh vuc nhung dong thoi cung thich tu do, khong thich bi rang buoc...";
		cout << endl;
		return;
	}
	else if (O <= 30 && O >= 0) {
		cout << O << "| San sang trai nghiem (O): ";
		cout << "Nguoi co diem thap o yeu to nay thuong kha bao thu, kho tiep nhan nhung y tuong moi, la. Ho thich su on dinh, quen thuoc va thuc te.";
		cout << endl;
		return;
	}
	else {
		cout << O << "| San sang trai nghiem (O): ";
		cout << "Khong xac dinh ro";
		cout << endl;
		return;
	}
}