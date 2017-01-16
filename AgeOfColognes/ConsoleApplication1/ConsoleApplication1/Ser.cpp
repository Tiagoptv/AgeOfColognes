#include "Ser.h"

int Ser::idTotal = 1;

Ser::Ser(){}
Ser::Ser(int x, int y, int cor): id(idTotal), Objeto(x,y,cor) {
	idTotal++;
}

int Ser::getID()const { return id; }
int Ser::getSaude() { return saude; }
int Ser::getDefesa() { return defesa; }
int Ser::getAtaque() { return ataque; }

void Ser::setID(int id) { this->id = id; }
void Ser::setSaude(int s) { saude = s; }
void Ser::setDefesa(int d) { defesa = d; }
void Ser::setAtaque(int a) { ataque = a; }

void Ser::move(Consola &c, int x, int y) {
	this->setX(x);
	this->setY(y);
	Consola::gotoxy(x, y);
	desenha(c, x, y);
}

void Ser::apaga(Consola &c, int i, int j) {
	Consola::gotoxy(i,j);
	cout << "  ";
}


void Ser::desenha(Consola &c, int i, int j) {
	c.setTextColor(getCor());
	c.gotoxy(i, j); 	 cout << (char)0 << (char)0 << (char)1 << (char)0 << (char)0;
	c.gotoxy(i, j + 1); cout << (char)0 << (char)92 << (char)179 << (char)218 << (char)0;
	c.gotoxy(i, j + 2); cout << (char)0 << (char)218 << (char)193 << (char)191 << (char)0;
	//c.gotoxy(i, j + 3); c.setTextColor(c.BRANCO); cout << " " << getNome() << " ";
	//c.gotoxy(i, j + 4);   cout << "     ";
}


Ser::~Ser()
{
}
