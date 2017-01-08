#pragma once

#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
#include <string>
#include "Celula.h"
#include "Consola.h"
using namespace std;

class Objeto{
protected:
	int x, y;
	int cor;
	string nome;

public:
	Objeto();
	Objeto(int x, int y, int cor);

	//Funções Modificadoras
	void setX(int x);
	void setY(int y);
	void setCor(int cor);
	void setNome(string nome);

	//Funções Acessoras
	int getX()const;
	int getY()const;
	int getCor()const;
	string getNome()const;

	void desenha(Consola &c, int i, int j);

	~Objeto();
};

#endif 