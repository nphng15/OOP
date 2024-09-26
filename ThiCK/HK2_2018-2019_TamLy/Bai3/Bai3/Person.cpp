#include"Person.h"
#include"Openess.h"
#include"Conscien.h"
#include"Extraversion.h"
#include"Agreeableness.h"
#include"Neuroticism.h"

void Person::Input() {
	cin >> O >> C >> E >> A >> N;
}

void Person::Output() {
	personality = new Openess();
	personality->Check(O);
	personality = new Consien();
	personality->Check(C);
	personality = new Extraversion();
	personality->Check(E);
	personality = new Agreeableness();
	personality->Check(A);
	personality = new Neuroticism();
	personality->Check(N);
}

bool Person::CheckHighRate() {
	if (C <= 30) {
		return true;
	}
	else if (N >= 70 && E <= 30) {
		return true;
	}
	else if (N >= 70) {
		return true;
	}
	return false;
	
}
