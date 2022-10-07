#include "animal.h"

#ifndef PEIXE_H
#define PEIXE_H

class peixe : public animal {

public:

peixe();
peixe(string caracteristica);

string caracteristica;


void setCaracteristica(string caracteristica);

string getCaracteristica();

void ImprimirDadosPeixe();


};

#endif