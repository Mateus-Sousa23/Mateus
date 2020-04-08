#include <iostream>
#include "cadastro.h"
#include <fstream>


using namespace std;

int main(){
    Usuario *u1=new Usuario;
    u1->Cadastrar();


    fstream dados;
    dados.open("usuario.txt", ios::out);
    dados << "Name: " << u1->name << "\n";
    dados << "Passoword: " << u1->passoword << "\n";

    dados.close();

    u1->Entrar();

	return 0;
}
