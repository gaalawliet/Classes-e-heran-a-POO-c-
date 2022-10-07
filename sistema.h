#include "animal.h"
#include "peixe.h"
#include "mamifero.h"

#ifndef SISTEMA_H
#define SISTEMA_H

class sistema : public animal, peixe, mamifero {

    public:

    sistema();
};
 
#endif 