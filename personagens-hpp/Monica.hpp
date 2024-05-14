#ifndef MONICA
#define MONICA
#include "../core-simulador-hpp/Personagem.hpp"
class Monica : public Personagem
{
    public:
        Monica(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif