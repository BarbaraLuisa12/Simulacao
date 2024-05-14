#include "../personagens-hpp/Jaspion.hpp"

Jaspion::Jaspion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Jaspion::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Jaspion::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Jaspion::pegarDescricao() 
{
    return "Ao infinito e além!";
}