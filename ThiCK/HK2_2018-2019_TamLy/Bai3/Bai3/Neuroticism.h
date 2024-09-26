#pragma once
#include "Personality.h"

class Neuroticism : public Personality {
public:
	Neuroticism() {}
	~Neuroticism() {}
	void Check(int N) override;

};