#include "Quinta.h"
#include "Edificio.h"


void Quinta::setMoedasInstante(int i) { moedasInstante = i; }

int Quinta::getMoedasInstante() const { return moedasInstante; }

Quinta::Quinta(int x, int y, int cor, int id) : Edificio(x, y, cor) {
	setID(id);
	setCusto(20);
	setSaude(20);
	setDefesa(10);
	setMoedasInstante(2);

	char c;

	if (cor == 9)  { c = 'A'; }
	if (cor == 12) { c = 'B'; }
	if (cor == 14) { c = 'C'; }
	if (cor == 10) { c = 'D'; }

	stringstream ss;

	if (id < 10) {
		ss << c << "eq0" << id;
	}
	else {
		ss << c << "eq" << id;
	}

	string n = ss.str();

	setNome(n);
}



void Quinta::desenha(Consola &c, int i, int j)
{
	c.setTextColor(getCor());
	c.gotoxy(i, j); 	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)187;
	c.gotoxy(i, j + 1); cout << (char)186; 	c.setTextColor(c.AMARELO); cout << (char)177; 	c.setTextColor(c.AMARELO); cout << (char)177;	c.setTextColor(c.VERDE); cout << (char)5; 						c.setTextColor(getCor()); cout << (char)186;
	c.gotoxy(i, j + 2); c.setTextColor(getCor()); cout << (char)186; c.setTextColor(c.ROXO); cout << (char)2;	c.setTextColor(c.VERDE); cout << (char)5; 	c.setTextColor(c.VERDE); cout << (char)5;		c.setTextColor(getCor()); cout << (char)186;
	c.gotoxy(i, j + 3); c.setTextColor(getCor()); cout << (char)186; c.setTextColor(c.ROXO); cout << (char)2; 	c.setTextColor(c.AMARELO); cout << (char)2;	c.setTextColor(c.ROXO); cout << (char)5; 		c.setTextColor(getCor()); cout << (char)186;
	c.gotoxy(i, j + 4); c.setTextColor(c.BRANCO); cout << getNome();

}

Quinta::~Quinta()
{
}
