#include "Neuroticism.h"

void Neuroticism::Check(int N) {
	if (N >= 70 && N <= 100) {
		cout << N << "| Bat on cam xuc (N): ";
		cout << "Nguoi co diem cao o yeu to nay thuong co cac cam xuc tieu cuc nhu: lo lang, buc boi, tu ti, yeu duoi va kha nang chiu ap luc kem.";
		cout << endl;
		return;
	}
	else if (N <= 30 && N >= 0) {
		cout << N << "| Bat on cam xuc (N): ";
		cout << "Nguoi co diem thap o yeu to nay thuong kiem soat duoc cam xuc, ung pho voi cang thang tot, it bi ben ngoai anh huong den tam trang cua ban than.";
		cout << endl;
		return;
	}
	else {
		cout << N << "| Bat on cam xuc (N): ";
		cout << "Khong xac dinh ro";
		cout << endl;
		return;
	}
}