#pragma once
#include "Caracteristica.h"

class Ataca: public Caracteristica{
protected:
	int nataques = 0;
public:
	Ataca(string nser);
	
	~Ataca();
};

