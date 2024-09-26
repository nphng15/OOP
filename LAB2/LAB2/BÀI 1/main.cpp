#include<iostream>
#include "ToaDo.h"
using namespace std;
int main()
{
	Diem a(3,4);
	Diem b(1,2);
	a.GetHoanhDo();
	a.GetTungDo();
	cout<<"Diem ban dau: ";
	a.Xuat();
	cout<<endl;
	cout<<"Diem sau khi tinh tien: ";
	b.GetHoanhDo();
	b.GetTungDo();
	a.TinhTien(a, b);
	a.Xuat();
	return 0;
}