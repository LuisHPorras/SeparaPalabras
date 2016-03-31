//
//  main.cpp
//  Criptografia
//
//  Created by Luis Herce Porras on 23/02/16.
//  Copyright © 2016 Luis. All rights reserved.
//

//LIBRERIAS Y MACROS
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "lemario.h"

using namespace std;

//DECLARACIONES DE CONSTANTES

//DECLARACIONES DE VARIABLES
Lemario es;
const char word[DIM] = "órdago";

//DEFINICIONES

//MAIN
int main(int argc, const char * argv[]) {
    
	if (es.buscarPalabra(word)) cout << "Word found\n";
	system("PAUSE");
    return 0;
}

//DECLARACIONES DE FUNCIONES
