#include "Celula.h"


Celula::Celula(void){}
Celula::Celula(Objeto *cel){
	celula.push_back(cel);
	//visivel = false;  Para esconder zonas não exploradas
}


void Celula::setCelula(Objeto *c) {
	celula.push_back(c);
}

/*void Celula::setVisivel(bool vis) {
	visivel = vis;								Para esconder zonas não exploradas
}*/


vector<Objeto*> Celula::getCelula()const { return celula; }
//bool Celula::getVisivel()const { return visivel; }  Para esconder zonas não exploradas


void Celula::removeObjeto(string n) {

	for (unsigned int i = 0; i < celula.size(); i++){
		if (n == celula.at(i)->getNome()) {
			celula.erase(celula.begin() + i);
		}
	}
}

Celula::~Celula(){
}
