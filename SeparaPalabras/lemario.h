//
//  lemario.h
//  Criptografia
//
//  Created by Luis Herce Porras on 26/03/16.
//  Copyright © 2016 Luis. All rights reserved.
//

#ifndef lemario_h
#define lemario_h

#include <iostream>
#include <fstream>
#include <string>
#include "constantes.h"

using namespace std;

class Lemario
{

private:
	streampos indice[NUM_FILES][NUM_LETRAS];	//Posiciones de las letras en el abecedario
	streampos *p_indice[NUM_FILES] = { indice[0], indice[1] };
	bool indexarPosiciones(const char *, streampos *);

public:
	ifstream file;
	Lemario();
	bool buscarPalabra(const string);

};

#endif /* lemario_h */
