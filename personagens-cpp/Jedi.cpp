#include "../personagens-hpp/Jedi.hpp"

Jedi::Jedi(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Jedi::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Jedi::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Jedi::pegarDescricao() 
{
    return "Que a forca esteja com voce";
}