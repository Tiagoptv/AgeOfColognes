#pragma once

#ifndef MAPA_H
#define MAPA_H

#include <iostream>
#include <vector>
#include <conio.h>
#include "Objeto.h"
#include "Celula.h"
#include "Consola.h"
#include "Terreno.h"
#include "Colonia.h"
using namespace std;

class Celula;

class Mapa{
	bool ativo;
	vector <Colonia*> colonias;
	int linhas, colunas;
	int x, y;
	Consola c;
	vector<vector<Celula>> mapa;
public:
	Mapa(Consola &consola);

	//Funções Modificadoras
	void setX(int xx);
	void setY(int yy);
	void setAtivo(bool ativo);


	void addColonia(Colonia *a);


	//Funções Acessoras
	int getX()const;
	int getY()const;
	bool getAtivo()const;
	int getLinhas()const;
	int getColunas()const;
	Objeto* getUltimoObj(int i, int j);
	Colonia* getColonia(char c);
	vector <Colonia*> getColonias();
	Objeto* getObjeto(string n, int x, int y);

	void preencheMapa(int l, int c);
	void imprimeMapa();

	bool souSerColoniaJogador(string nome);

	Ser* meuSer(string n);

	//void removeCelula(vector<Celula*>)

	~Mapa();
};

#endif