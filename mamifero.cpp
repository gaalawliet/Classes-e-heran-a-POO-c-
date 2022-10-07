#include "mamifero.h"

mamifero::mamifero() {
    this->alimento = "leite";

}

mamifero::mamifero (string alimento){

}

void mamifero::setAlimento(string alimento){
    this->alimento = alimento;
}

string mamifero::getAlimento() {
    return this->alimento;
}

void mamifero::ImprimirDadosMamifero() {
    cout << "nome: " << getNome() << endl;
    cout << "comprimento: " << getComprimento() << endl;
    cout << "patas: " << getNumPatas() << endl;
    cout << "cor: " << getCor() << endl;
    cout << "Ambiente: " << getAmbiente() << endl;
    cout << "velocidade: " << getVelMedia() << endl;
    cout <<"alimento: " <<getAlimento() << endl;    
}
