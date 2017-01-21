#pragma once

#ifndef COLONIA_H
#define COLONIA_H

#include <iostream>
#include <vector>
#include <string>
#include "Edificio.h"
#include "Ser.h"
//class Ser;

class Colonia{
	int nCastelos;
	int cor;
	vector<Edificio*> edificios;
	vector<Ser*> seres;
	char nomePopulacao;
	int moedas;
public:
	Colonia();
	Colonia(char n);

	int getMoedas();
	char getNome();
	int getCor();
	Ser* getSer(int id);
	Edificio* getEdificio(int id);

	void setMoedas(int num);

	void adicionaSer(Ser *u);
	void adicionaEdificio(Edificio &e);

	Ser* getUnidade(string n);

	~Colonia();
};

#endif
