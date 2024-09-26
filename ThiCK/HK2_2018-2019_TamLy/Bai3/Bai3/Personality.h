#pragma once
#include<iostream>
using namespace std;
class Personality {
protected:
	int highValue;
	int lowValue;
public:
	Personality() : highValue(70), lowValue(30) {}
	virtual void Check(int P) = 0;
};