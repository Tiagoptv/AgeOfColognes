#include "Objeto.h"
#include <string>
#include <iostream>
using namespace std;


Objeto::Objeto(){}
Objeto::Objeto(int x, int y, int cor) : x(x), y(y), cor(cor){
}

//Funções Modificadoras
void Objeto::setX(int x) { this->x = x; }
void Objeto::setY(int y) { this->y = y; }
void Objeto::setCor(int cor) { this->cor = cor; }
void Objeto::setNome(string nome) { this->nome = nome; }

//Funções Acessoras
int Objeto::getX()const { return x; }
int Objeto::getY()const { return y; }
int Objeto::getCor()const { return cor; }
string Objeto::getNome()const { return nome; }

void Objeto::desenha(Consola &c, int i, int j) {
	c.setTextColor(c.AMARELO);
	c.gotoxy(i, j); 	 cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	c.gotoxy(i, j + 1);  cout << (char)219 << (char)178 << (char)178 << (char)178 << (char)219;
	c.gotoxy(i, j + 2);  cout << (char)178 << (char)219 << (char)219 << (char)219 << (char)178;
	c.gotoxy(i, j + 3);  cout << (char)219 << (char)178 << (char)178 << (char)178 << (char)219;
	c.gotoxy(i, j + 4);  cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	c.setTextColor(c.BRANCO);
}

Objeto::~Objeto()
{
}
