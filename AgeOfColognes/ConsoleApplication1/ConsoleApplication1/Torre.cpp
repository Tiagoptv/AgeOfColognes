#include "Torre.h"
#include "Edificio.h"


Torre::Torre(int x, int y, int cor, int id) : Edificio(x, y, cor) {
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
		ss << c << "et0" << id;
	}
	else {
		ss << c << "et" << id;
	}

	string n = ss.str();

	setNome(n);
}

void Torre::desenha(Consola &c, int i, int j)
{
	c.gotoxy(i, j);		c.setTextColor(getCor());	cout << (char)178 << (char)178; c.setTextColor(c.CINZENTO); cout << (char)219 << (char)219 << (char)219;
	c.gotoxy(i, j + 1); c.setTextColor(getCor());	cout << (char)178 << (char)178; c.setTextColor(c.CINZENTO); cout << (char)219 << (char)219 << (char)219;
	c.gotoxy(i, j + 2); c.setTextColor(c.AMARELO);	cout << (char)204 << (char)205 << (char)206 << (char)205 << (char)185;
	c.gotoxy(i, j + 3); c.setTextColor(c.ROXO);		cout << (char)177 << (char)177 << (char)177 << (char)177 << (char)177;
	c.gotoxy(i, j + 4);	c.setTextColor(c.BRANCO);	cout << getNome();

}

Torre::~Torre()
{
}
