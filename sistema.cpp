 #include "animal.cpp"
#include "peixe.cpp"
#include "mamifero.cpp"

int main()

{
    mamifero camelo;
    camelo.setNome("camelo");
    camelo.setComprimento(150);
    camelo.setNumPatas(4);
    camelo.setCor("amarelo");
    camelo.setAmbiente("terra");
    camelo.setVelMedia(2.0);

    peixe peixe;
    peixe.setNome("tubarao");
    peixe.setComprimento(300);
    peixe.setNumPatas(0);
    peixe.setCor("cinzento");
    peixe.setAmbiente("mar");
    peixe.setVelMedia(1.5);
    peixe.setCaracteristica("barbatanas e cauda");

    mamifero ursocanada;
    ursocanada.setNome("urso-do-canada");
    ursocanada.setComprimento(180);
    ursocanada.setNumPatas(4);
    ursocanada.setCor("vermelho");
    ursocanada.setAmbiente("terra");
    ursocanada.setVelMedia(0.5);
    ursocanada.setAlimento("mel");

    cout << "sistema" << endl;
    cout << endl;
    cout << "nome: "<< camelo.getNome() << endl;
    cout << "comprimento: " << camelo.getComprimento() << "cm" <<endl;
    cout << "patas: " << camelo.getNumPatas() << endl;
    cout << "cor: " << camelo.getCor() << endl;
    cout << "ambiente: " << camelo.getAmbiente() << endl;
    cout << "velocidade: " << camelo.getVelMedia() << "m/s" << endl;
    cout << endl;
    cout << endl;
    cout << "nome: " << peixe.getNome() << endl;
    cout << "comprimento: " << peixe.getComprimento() << "cm" << endl;
    cout << "patas: " << peixe.getNumPatas() << endl;
    cout << "ambiente: " << peixe.getAmbiente() << endl; 
    cout << "velocidade: " << peixe.getVelMedia() << "m/s" << endl;
    cout << "caracteristica: " << peixe.getCaracteristica() << endl;
    cout << endl;
    cout << endl;
    cout << "nome: " << ursocanada.getNome() << endl;
    cout << "comprimento: " << ursocanada.getComprimento() << "cm" << endl;
    cout << "patas: " << ursocanada.getNumPatas() << endl;
    cout << "cor: " << ursocanada.getCor() << endl;
    cout << "ambiente: " << ursocanada.getAmbiente() << endl;
    cout << "velocidade: " << ursocanada.getVelMedia() << "m/s" << endl;
    cout << "alimento: " << ursocanada.getAlimento() << endl;  





    
};


