#pragma once
#include "Personality.h"

class Consien : public Personality {
public:
	Consien() {}
	~Consien() {}
	void Check(int C) override;
};