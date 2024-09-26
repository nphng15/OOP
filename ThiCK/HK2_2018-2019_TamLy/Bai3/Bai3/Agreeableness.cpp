#include"Agreeableness.h"

void Agreeableness::Check(int A) {
	if (A >= 70 && A <= 100) {
		cout << A << "| Hoa dong de chiu (A): ";
		cout << "Nguoi co diem cao o yeu to nay thuong than thien, coi mo, dong cam voi moi nguoi nhung nhieu khi 'thieu chinh kien''. ";
		cout << endl;
		return;
	}
	else if (A <= 30 && A >= 0) {
		cout << A << "| Hoa dong de chiu (A): ";
		cout << "Nguoi co diem thap thuong dat loi ich cua ban than len tren, it dong cam, chia se voi dong nghiep, co tinh canh tranh cao.";
		cout << endl;
		return;
	}
	else {
		cout << A << "| Hoa dong de chiu (A): ";
		cout << "Khong xac dinh ro";
		cout << endl;
		return;
	}
}