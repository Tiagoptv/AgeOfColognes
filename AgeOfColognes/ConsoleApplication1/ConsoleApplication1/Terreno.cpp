#include "Terreno.h"



Terreno::Terreno(int x, int y){
	this->setX(x);
	this->setY(y);
	this->setNome("terra");
}

void Terreno::desenha(Consola &c, int x, int y) {
	c.gotoxy(x, y);
	cout << "TTTTTT\nTTTTTT";
}

Terreno::~Terreno(){}
