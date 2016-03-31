//
//  constantes.h
//  Criptografia
//
//  Created by Luis Herce Porras on 26/03/16.
//  Copyright © 2016 Luis. All rights reserved.
//

#ifndef constantes_h
#define constantes_h

//DECLARACIONES DE CONSTANTES
const int DIM = 100;
const char NUM_LETRAS = ('Z' - 'A' + 2), NUM_FILES = 2; // *LETRAS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";	//NUM_LETRAS +2 para añadir la Ñ
const char nombre[NUM_FILES][DIM] = { "lemario.txt", "verbos.txt" }, test_word[NUM_FILES][DIM] = { "playa", "cantaba"};

#endif /* constantes_h */