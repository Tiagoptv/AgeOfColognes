#ifndef COMANDO_H
#define	COMANDO_H

#include <iostream>	
#include <string>
#include <sstream>
#include "Castelo.h"
#include "Edificio.h"
#include "Colonia.h"
#include "Mapa.h"
#include "Consola.h"
#include "Interface.h"

using namespace std;

class Mapa;
class Interface;

class Comando
{
private:
	string c1, c2, c3, c4, c5;
	Mapa *map;
	Consola c;
	Interface *i;

public:
	
	//Funçoes de acesso
	string getC1();
	string getC2();
	string getC3();
	string getC4();
	string getC5();

	//Construtor por defeito
	Comando(Consola &consola);
	
	//Destrutor
	~Comando();


	void separaComando(string cmd);
	//	Separa o comando em varias partes 
	//input:	Recebe um string para dividir

	void direcionaComando(string c1);
	//	Consuante o comando recebido executa uma determinada funçao
	//input:	Recebe a 1ª parte do comando introduzido pelo utilizador

	bool isNumber(string s);
	//	Vê se a string é um numero
	//input:	Recebe uma string a verificar


	void modoJogo();



	//--------------------------------------------		FUNÇÕES DE CONFIGURAÇÃO		 --------------------------------------------//

	void dim(Mapa *map, string c2, string c3);
	//	Define a dimenção da planicie
	//input:	A FUNCIONAR MAL

	void moedas(int m);
	//	Define a quantidade de moedas iniciais das colonias
	//input:	POR DETERMINAR

	void oponentes(int num);
	//	Define a quantidade de colonias controladas pelo PC; A Colonia do jogador é 'a' e as do PC são 'b', 'c', etc...
	//input:	Recebe um inteiro, ........

	void castelo(Colonia c, int linha, int coluna);
	//	Define a posição do castelo da colonia indicada. Permite tbm mudar a posição do castelo
	//input:	Recebe uma colonia e dois inteiros, com a posiçao pretendida
	//			Nos parametros	!!!! alterar 'string' para 'Colonia' !!!!

	void mkperfil(string letra);
	//	Define um perfil identificado por uma letra especificada pelo utilizador. Inicialmente o perfil está vazio (sem caracteristicas)
	//input:	Recebe uma letra que será o nome do perfil

	void addperfil(string letra, int caracteristica);
	//	Adiciona a caracteristica indicada ao perfil indicado. Tem de fazer verificaçoes de limites de força por exemplo
	//input:	Recebe a letra que indentifica o perfil e um inteiro referente à caracteristica

	void subperfil(string letra, int caracteristica);
	//	Subtrair a caracteristica indicada ao perfil indicado.	
	//input:	Recebe a letra que indentifica o perfil e um inteiro referente à caracteristica

	void rmperfil(string letra);
	//	Remove o perfil identificado pela letra. 
	//input:	Recebe uma letra que será o nome do perfil

	void load(string nomefich);
	//	Carrega os comandos de configuração lendo-os do ficheiro de texto indicado
	//input:	Recebe o ficheiro a ler
	
	void inicio();
	//	Termina a faze de configuração e passa à simulação
	//input:	Não tem input

	/*Os comandos de simulação que surjam durante a fase de configuração serão ignorados com um breve aviso ao jogador*/



	//--------------------------------------------		FUNÇÕES DE SIMULACAO		 --------------------------------------------//



	void repair(string eId);

	void upgrade(string eId);
};

#endif // !COMANDO_H