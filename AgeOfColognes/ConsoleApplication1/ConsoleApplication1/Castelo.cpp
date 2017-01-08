#include "Castelo.h"
#include "Edificio.h"



Castelo::Castelo(int x, int y, int cor, int id): Edificio(x,y,cor){
	setID(id);
	setCusto(0);
	setSaude(50);
	setDefesa(10);

	char c;

	if (cor == 9) { c = 'A'; }
	if (cor == 12) { c = 'B'; }
	if (cor == 14) { c = 'C'; }
	if (cor == 10) { c = 'D'; }

	stringstream ss;

	if (id < 10) {
		ss << c << "ec0" << id;
	}
	else {
		ss << c << "ec" << id;
	}

	string n = ss.str();

	setNome(n);

}

void Castelo::desenha(Consola &c, int i, int j)
{
	c.setTextColor(getCor());
	c.gotoxy(i, j);   cout << (char)19 << (char)19 << (char)19; c.setTextColor(c.AZUL_CLARO); cout << (char)6; c.setTextColor(getCor()); cout << (char)19;
	c.gotoxy(i, j + 1); cout << (char)186; 	c.setTextColor(c.CINZENTO); cout << (char)219 << (char)219 << (char)219; c.setTextColor(getCor()); cout << (char)186;
	c.gotoxy(i, j + 2); cout << (char)186; 	c.setTextColor(c.CINZENTO); cout << (char)219;	c.setTextColor(c.VERMELHO); cout << (char)219; c.setTextColor(c.CINZENTO); cout << (char)219;	c.setTextColor(getCor()); cout << (char)186;
	c.gotoxy(i, j + 3); cout << (char)186; 	c.setTextColor(c.CINZENTO); cout << (char)219; 	c.setTextColor(c.VERMELHO); cout << (char)219;	c.setTextColor(c.CINZENTO); cout << (char)219; 	c.setTextColor(getCor()); cout << (char)186;
	c.gotoxy(i, j + 4); cout << (char)200;   c.setTextColor(c.BRANCO); /*cout << getNome();*/
}


Castelo::~Castelo(){

}
