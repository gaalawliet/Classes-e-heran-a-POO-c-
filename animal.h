#include <iostream>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class animal{

public:

    animal();
    animal(string nome, float comprimento, int numPatas, string cor, string ambiente, float velMedia);
    
    string nome;
    float comprimento;
    int numPatas;
    string cor;
    string ambiente; 
    float velMedia;

    void setNome (string nome);
    void setComprimento(float comprimento);
    void setNumPatas (int numPatas);
    void setCor (string cor);
    void setAmbiente(string ambiente);
    void setVelMedia(float velMedia);
    
    string getNome();
    float getComprimento();
    int getNumPatas ();
    string getCor();
    string getAmbiente();
    float getVelMedia();
    
};

#endif
