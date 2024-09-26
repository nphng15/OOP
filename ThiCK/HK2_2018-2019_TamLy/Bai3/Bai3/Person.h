#pragma once
#include"Openess.h"
#include"Conscien.h"
#include"Extraversion.h"
#include"Agreeableness.h"
#include"Neuroticism.h"
#include<iostream>
using namespace std;

class Person {
protected:
	int O;
	int C;
	int E;
	int A;
	int N;
	Personality* personality;
public:
	Person() : O(0), C(0), E(0), A(0), N(0), personality(NULL) {}
	~Person() {}
	void Input();
	void Output();
	bool CheckHighRate();
};