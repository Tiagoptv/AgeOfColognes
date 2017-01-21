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
	
	//Fun�oes de acesso
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
	//	Consuante o comando recebido executa uma determinada fun�ao
	//input:	Recebe a 1� parte do comando introduzido pelo utilizador

	bool isNumber(string s);
	//	V� se a string � um numero
	//input:	Recebe uma string a verificar


	void modoJogo();



	//--------------------------------------------		FUN��ES DE CONFIGURA��O		 --------------------------------------------//

	void dim(Mapa *map, string c2, string c3);
	//	Define a dimen��o da planicie
	//input:	A FUNCIONAR MAL

	void moedas(int m);
	//	Define a quantidade de moedas iniciais das colonias
	//input:	POR DETERMINAR

	void oponentes(int num);
	//	Define a quantidade de colonias controladas pelo PC; A Colonia do jogador � 'a' e as do PC s�o 'b', 'c', etc...
	//input:	Recebe um inteiro, ........

	void castelo(Colonia c, int linha, int coluna);
	//	Define a posi��o do castelo da colonia indicada. Permite tbm mudar a posi��o do castelo
	//input:	Recebe uma colonia e dois inteiros, com a posi�ao pretendida
	//			Nos parametros	!!!! alterar 'string' para 'Colonia' !!!!

	void mkperfil(string letra);
	//	Define um perfil identificado por uma letra especificada pelo utilizador. Inicialmente o perfil est� vazio (sem caracteristicas)
	//input:	Recebe uma letra que ser� o nome do perfil

	void addperfil(string letra, int caracteristica);
	//	Adiciona a caracteristica indicada ao perfil indicado. Tem de fazer verifica�oes de limites de for�a por exemplo
	//input:	Recebe a letra que indentifica o perfil e um inteiro referente � caracteristica

	void subperfil(string letra, int caracteristica);
	//	Subtrair a caracteristica indicada ao perfil indicado.	
	//input:	Recebe a letra que indentifica o perfil e um inteiro referente � caracteristica

	void rmperfil(string letra);
	//	Remove o perfil identificado pela letra. 
	//input:	Recebe uma letra que ser� o nome do perfil

	void load(string nomefich);
	//	Carrega os comandos de configura��o lendo-os do ficheiro de texto indicado
	//input:	Recebe o ficheiro a ler
	
	void inicio();
	//	Termina a faze de configura��o e passa � simula��o
	//input:	N�o tem input

	/*Os comandos de simula��o que surjam durante a fase de configura��o ser�o ignorados com um breve aviso ao jogador*/



	//--------------------------------------------		FUN��ES DE SIMULACAO		 --------------------------------------------//



	void repair(string eId);

	void upgrade(string eId);
};

#endif // !COMANDO_H