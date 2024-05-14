#include "../personagens-hpp/Monica.hpp"

Monica::Monica(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Monica::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Monica::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Monica::pegarDescricao() 
{
    return "Voce me pagaaaaa!";
}