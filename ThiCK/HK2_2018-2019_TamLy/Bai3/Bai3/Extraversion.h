#pragma once
#include "Personality.h"

class Extraversion : public Personality {
public:
	Extraversion() {}
	~Extraversion() {}
	void Check(int E) override;

};
