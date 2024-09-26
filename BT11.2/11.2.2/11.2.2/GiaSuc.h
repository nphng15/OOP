#pragma once
#include<iostream>
#include<string>
#include <random>
#include <ctime>
#include<string>
using namespace std;

class GiaSuc {
protected:
	int soCon;
	int soSua;
	string tiengkeu;
public:
	GiaSuc() {}
	virtual ~GiaSuc() {}
	virtual void Xuat() = 0;
	virtual int tongSua() = 0;
};