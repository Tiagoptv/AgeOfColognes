#pragma once
#include "Caracteristica.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class Walker: public Caracteristica
{
public:

	Walker(string nser);

	void fazAtuaCena(Mapa *m, Consola &c);

	~Walker();
};

