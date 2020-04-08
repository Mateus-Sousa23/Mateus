#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED

#include <stdlib.h>
#include <fstream>


class Usuario{
public:
    std::string name;
    std::string passoword;
    std::string n, p;

    Usuario();
    void Cadastrar();
    void Entrar();
    bool Autenticar(std::string num, std::string pss);

};

Usuario::Usuario(){
    name = "adm";
    passoword = "adm";
}

void Usuario::Cadastrar(){
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Passoword: ";
    std::cin >> passoword;
    std::cout << "Cadastrado com sucesso.";
    system("cls");
}

void Usuario::Entrar(){
    std::cout << "Name: ";
    std::cin >> n;
    std::cout << "Passoword: ";
    std::cin >> p;

    if (Autenticar(n, p)){
        std::cout << "Usuario reconhecido." << std::endl;
        std::cout << "Seja bem bindo: " << n;
    }else{
        std::cout << "Error, passoword ou name invalidos." << std::endl;
        system("cls");
        while(!Autenticar(n, p)){
             std::cout << "Name: ";
             std::cin >> n;
             std::cout << "Passoword: ";
             std::cin >> p;
        }

    }
}

bool Usuario::Autenticar(std::string num, std::string pss){
    if ((num == name) && (pss == passoword)){
        return true;
    }else{
        return false;
    }
}

#endif // CADASTRO_H_INCLUDED
