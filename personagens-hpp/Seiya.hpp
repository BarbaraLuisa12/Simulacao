#ifndef SEIYA
#define SEIYA
#include "../core-simulador-hpp/Personagem.hpp"
class Seiya : public Personagem
{
    public:
        Seiya(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif