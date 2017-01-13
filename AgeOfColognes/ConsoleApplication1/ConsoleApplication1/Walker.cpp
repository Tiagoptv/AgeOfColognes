#include "Walker.h"


Walker::Walker(string nser): Caracteristica(nser)
{
}

void Walker::fazCaracteristica(Mapa * m, Consola &c)
{
	int numRand, x, y;
	
	numRand = rand() % 8 + 1;

	switch (numRand)
	{
	case 1:
		x = m->meuSer(nome)->getX();		x--;
		y = m->meuSer(nome)->getY();		y++;
		m->meuSer(nome)->move(c, x, y);
		break;
	case 2:
		x = m->meuSer(nome)->getX();
		y = m->meuSer(nome)->getY();		y++;
		m->meuSer(nome)->move(c, x, y);
		break;
	case 3:
		x = m->meuSer(nome)->getX();		x++;
		y = m->meuSer(nome)->getY();		y++;
		m->meuSer(nome)->move(c, x, y);
		break;
	case 4:
		x = m->meuSer(nome)->getX();		x++;
		y = m->meuSer(nome)->getY();
		m->meuSer(nome)->move(c, x, y);
		break;
	case 5:
		x = m->meuSer(nome)->getX();		x++;
		y = m->meuSer(nome)->getY();		y--;
		m->meuSer(nome)->move(c, x, y);
		break;
	case 6:
		x = m->meuSer(nome)->getX();
		y = m->meuSer(nome)->getY();		y--;
		m->meuSer(nome)->move(c, x, y);
		break;
	case 7:
		x = m->meuSer(nome)->getX();		x--;
		y = m->meuSer(nome)->getY();		y--;
		m->meuSer(nome)->move(c, x, y);
		break;
	case 8:
		x = m->meuSer(nome)->getX();		x--;
		y = m->meuSer(nome)->getY();
		m->meuSer(nome)->move(c, x, y);
		break;
	}
}


Walker::~Walker()
{
}
	