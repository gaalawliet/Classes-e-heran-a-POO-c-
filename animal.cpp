#include "animal.h"

animal::animal(){
    this->nome = "nome";
    this->comprimento = 1;
    this->numPatas = 4;
    this->cor = "cor";
    this->ambiente = "ambiente";
    this->velMedia = 5;
}

animal::animal(string nome, float comprimento, int numPatas, string cor, string ambiente, float velMedia){
   
}

void animal::setNome(string nome){
    this->nome = nome;
}

 void animal::setComprimento(float comprimento){
    this->comprimento = comprimento;
}

void  animal::setNumPatas(int numPatas){
    this->numPatas = numPatas;
}

void animal::setCor(string cor){
    this->cor = cor;
}

void animal::setAmbiente(string ambiente){
    this->ambiente = ambiente;
}

void animal::setVelMedia(float velMedia){
    this->velMedia = velMedia;
}


string animal::getNome(){
    return this->nome;
}

float animal::getComprimento() {
    return this->comprimento;
}

int animal::getNumPatas() {
    return this->numPatas;
}

string animal::getCor() {
    return this->cor;
}

string animal::getAmbiente() {
    return this->ambiente;
}

float animal::getVelMedia() {
    return this->velMedia;
}