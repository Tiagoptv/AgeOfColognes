#include "Mapa.h"



Mapa::Mapa(Consola &consola){
	x = 0;
	y = 0;
	colunas = 0;
	linhas = 0;
	c = consola;
	ativo = false;
}

void Mapa::setX(int xx) { x = xx; }
void Mapa::setY(int yy) { y = yy; }
void Mapa::setAtivo(bool ativo) { this->ativo = ativo; }


void Mapa::addColonia(Colonia *a) { colonias.push_back(a); }

//Funções Acessoras
int Mapa::getX()const { return x; }
int Mapa::getY()const { return y; }
bool Mapa::getAtivo()const { return ativo; }
int Mapa::getLinhas()const { return linhas; }
int Mapa::getColunas()const { return colunas; }
Objeto* Mapa::getUltimoObj(int i, int j) { return mapa[i][j].getCelula().at(mapa[i][j].getCelula().size() - 1); }

Colonia* Mapa::getColonia(char c) {
	int n;
	
	if (c == 'a') n = 0;
	if (c == 'b') n = 1;
	if (c == 'c') n = 2;
	if (c == 'd') n = 3;

	return colonias.at(n);
}

vector <Colonia*> Mapa::getColonias() { return colonias; }

void Mapa::preencheMapa(int l, int c) {
	y = 0;
	x = 0;
	linhas = l;
	colunas = c;

	for (int i = 0; i < l; i++) {
		vector<Celula> linha;
		for (int j = 0; j < c; j++) {
			linha.push_back(new Terreno(i, j));
		}
		mapa.push_back(linha);
	}
	ativo = true;
}

void Mapa::imprimeMapa(){
	int posX_cons = 0;
	int posY_cons = 0;

	for (int i = x; i < (x + 6); i++) {
		for (int j = y; j < (y + 6); j++) {
			getUltimoObj(i, j)->desenha(c, 4 + posX_cons * 5, 3 + posY_cons * 5);
			posY_cons++;
		}
		posY_cons = 0;
		posX_cons++;
	}
}

Mapa::~Mapa()
{
}
