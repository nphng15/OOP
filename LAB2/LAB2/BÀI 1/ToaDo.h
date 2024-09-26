#pragma once
class Diem
{
private:
	int iHoanh;
	int iTung;

public:
	Diem() {}
	Diem(int Hoanh, int Tung);
	Diem(const Diem &x);
	void Xuat();
	int GetTungDo() const
	{
		return iTung;
	}
	int GetHoanhDo() const
	{
		return iHoanh;
	}
	void SetTungDo(int Tung);
	void SetHoanhDo(int Hoanh);
	void TinhTien(Diem &a, Diem b);
};