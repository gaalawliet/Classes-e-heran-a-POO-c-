#include "animal.h"

#ifndef MAMIFERO_H
#define MAMIFERO_H

class mamifero : public animal {

    public:

    mamifero();
    mamifero(string alimento);

    string alimento;

    void setAlimento (string alimento);

    string getAlimento();

    void ImprimirDadosMamifero();


};


#endif