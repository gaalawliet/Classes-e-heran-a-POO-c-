 #include "animal.cpp"
#include "peixe.cpp"
#include "mamifero.cpp"

int main()
{
    peixe nemo;
    mamifero cachorro;
    cout << "peixe" << endl;
    nemo.ImprimirDadosPeixe();
    cout << endl;
    cout << endl;
    cout << "mamifero" << endl;
    cachorro.ImprimirDadosMamifero();
} 