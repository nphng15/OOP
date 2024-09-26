#include"Personality.h"
#include"Openess.h"
#include"Conscien.h"
#include"Extraversion.h"
#include"Agreeableness.h"
#include"Neuroticism.h"
#include"Person.h"
#include<vector>
int main() {
	int n;	
	cout << "Nhap so nguoi: ";
	cin >> n;

	vector<Person*> ds;
	for (int i = 0; i < n; i++) {
		Person *a = new Person();
		ds.push_back(a);
		a->Input();
	}

	int index;
	cout << "Ban muon biet thong tin cua nguoi thu may?: ";
	cin >> index;
	index--;
	if (index >= 0 && index < n) {
		ds[index]->Output();
	}
	else {
		cout << "Chi muc khong hop le." << endl;
	}

	cout << "Danh sach nguoi co nguy co cao can luu y: "<<endl;
	for (int i = 0; i < n; i++) {
		if (ds[i]->CheckHighRate()) {
			cout << i+1 << endl;
		}
	}
}