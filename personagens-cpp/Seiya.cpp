#include "../personagens-hpp/Seiya.hpp"

Seiya::Seiya(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Seiya::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Seiya::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Seiya::pegarDescricao() 
{
    return "Pela justica e a paz!";
}