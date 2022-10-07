#include "peixe.h"


peixe::peixe(){
    this->caracteristica = "pequeno";
}

peixe::peixe (string caracteristica) {

}

void peixe::setCaracteristica(string caracteristica){
    this->caracteristica = caracteristica;
}

string peixe::getCaracteristica(){
    return this->caracteristica;
}

void peixe::ImprimirDadosPeixe() {
    cout << "nome: "  << getNome() << endl;
    cout << "comprimento: " << getComprimento() << endl;
    cout << "patas: " << getNumPatas() << endl;
    cout << "cor: " << getCor() << endl;
    cout << "ambiente: " << getAmbiente() << endl;
    cout << "velocidade: " << getVelMedia() << endl;
    cout << "caracteristica: " <<getCaracteristica() << endl;

}