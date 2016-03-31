//
//  lemario.cpp
//  Criptografia
//
//  Created by Luis Herce Porras on 26/03/16.
//  Copyright © 2016 Luis. All rights reserved.
//

#include "lemario.h"

//Indexa las posiciones de las palabras y hace una comprobación
Lemario::Lemario()
{
    for (int i = 0; i < NUM_FILES; i++)
        indexarPosiciones(nombre[i], p_indice[i]);
    
    for (int i = 0; i < 1; i++)
    {
        if (buscarPalabra(test_word[i])) cout << "Word found\n" << endl;
        else cout << "Error, word not found" << endl;
    }

    cout << "Initialization successfully completed" << endl;
    
}

//Indexa el número de línea en el que comienza una letra
bool Lemario::indexarPosiciones(const char *nombre, streampos *p_indice)
{
    string line;
    file.open(nombre, ios::in);
    getline(file, line);
    cout << line << "\n";
    for (int i = 0; i < NUM_LETRAS; i++)
    {
        if (file.is_open())
            while (getline(file, line))
            {
                cout << line << "\n";
                if(line[0] == 'a' + i)
                {
                    *(p_indice+i) = file.tellg();
                    break;
                }
            }
        else cout << "Error al abrir fichero\n";
    }
    file.close();
    return true;
    
}

//Busca una palabra accediendo al archivo por la letra inicial
bool Lemario::buscarPalabra(const string palabra)
{
    string line;
    
    file.open(nombre[0], ios::in);
    
    file.seekg(p_indice[0][palabra[0] - 'a']);
    //getline(file, line);
    //cout << line << "\n";
    if (file.is_open())
        while (getline(file, line))
        {
            //cout << line << "\n";
            if (!palabra.compare(line)) return true;//Si la palabra coincide devuelve verdadero
            if (line[0] == palabra[0] - ('a' - 'A') || line[0] == '-') continue;//Si la letra está en mayuscula o es un sufijo pasa
            if (line[0] != palabra[0]) return false;//Si se llega a la siguiente letra, no se ha encontrado y por tanto se devuelve falso
        }
    
    else cout << "Error al abrir fichero\n";
    
    file.close();
    return false;
}