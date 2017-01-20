#include "Comando.h"
#include "Mapa.h"
#include <algorithm>	//std::transform
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Comando::Comando(Consola &consola){
	this->c = consola;
	map = new Mapa(c);
}

void Comando::separaComando(string cmd)
{
	// Transforma comando em minusculas
	transform(cmd.begin(), cmd.end(), cmd.begin(), ::tolower);

	// Separa comando
	istringstream iss(cmd);
	string cmd1 = " ", cmd2 = " ", cmd3 = " ", cmd4 = " ", cmd5 = " ", lixo;

	do
	{
		if (cmd1 == " ")	iss >> cmd1;
		else
			if (cmd2 == " ")	iss >> cmd2;
			else
				if (cmd3 == " ")	iss >> cmd3;
				else
					if (cmd4 == " ")	iss >> cmd4;
					else
						if (cmd5 == " ")	iss >> cmd5;
						else
							iss >> lixo;

	} while (iss);

	c1 = cmd1;
	c2 = cmd2;
	c3 = cmd3;
	c4 = cmd4;
	c5 = cmd5;

	//Impressoes de teste 
	/*cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	cout << c4 << endl;
	cout << c5 << endl;*/
	direcionaComando(cmd1);
}

void Comando::direcionaComando(string cmd1)
{
	if (cmd1 == "inicio") {
		inicio();
	}
	/*else
		if (cmd1 == "dim")
			Comando::dim();*/
			
}

Comando::~Comando()
{
}

string Comando::getC1() { return c1; }
string Comando::getC2() { return c2; }
string Comando::getC3() { return c3; }
string Comando::getC4() { return c4; }
string Comando::getC5() { return c5; }


bool Comando::isNumber(string s)
{
	char *p;
	strtol(s.c_str(), &p, 10);
	return *p == 0;
}
// estudar melhor este bloco de codigo
// ver se uma parte da string é numero

void Comando::modoJogo()
{
	while (1)
	{
		c.gotoxy(20, 57);

		string comando;
		getline(cin, comando);
		separaComando(comando);

		direcionaComando(c1);

		i->limpaEspacoComandos(c);
		i->limpaEspacoInfo(c);

		return;
	}
}


//--------------------------------------------		FUNÇÕES DE CONFIGURAÇÃO		 --------------------------------------------//

void Comando::dim(Mapa *map, string c2, string c3)
{
	int l = stoi(c2, nullptr, 10);
	int c = stoi(c3, nullptr, 10);

	map->setX(c);
	map->setY(l);
}

void Comando::moedas(int m){

	for (unsigned int i = 0; i < map->getColonias().size(); i++)
	{
		map->getColonias().at(i)->setMoedas(m);
	}
}

void Comando::oponentes(int num){
	char nome = 'b';
	for (int i = 0; i < num; i++) {
		map->addColonia(new Colonia(nome));
		nome += 1;
	}
}

void Comando::castelo(Colonia c, int linha, int coluna){
	Edificio *a = new Castelo(linha,coluna,c.getCor(),1);
	c.adicionaEdificio(*a);
}

void Comando::mkperfil(string letra){
	string nperfil = "Perfis/", str;

	letra.append(".txt");
	nperfil.append(letra);

	ofstream f(nperfil);
	if (!f.is_open())
		cout << "Erro ao abrir o ficheiro.";
	else {
		/*string comando;

		getline(cin, comando);
		cout << comando;
		f << comando;
		separaComando(comando);*/
		
		cout << "Perfil " << letra << " criado";
	}

	f.close();
}

void Comando::addperfil(string letra, int caracteristica)
{
	cout << "Implementar função addperfil" << endl;
}

void Comando::subperfil(string letra, int caracteristica)
{
	cout << "Implementar função subperfil" << endl;
}

void Comando::rmperfil(string letra)
{
	cout << "Implementar função rmperfil" << endl;
}

void Comando::load(string nomefich)
{
	cout << "Implementar função rmperfil" << endl;
}

void Comando::inicio() {

	if (!isNumber(c2) || !isNumber(c3)) {
		cout << "<lin>/<col> nao inteiros";
	}
	else
		if (stoi(c2) > 20 && stoi(c3) > 40) {
			cout << "Mapa pronto para ser criado!" << endl;
			dim(map, c2, c3);
			map->preencheMapa(stoi(c2), stoi(c3));
			map->imprimeMapa();
		}
}


//--------------------------------------------		FUNÇÕES DE SIMULACAO		 --------------------------------------------//

