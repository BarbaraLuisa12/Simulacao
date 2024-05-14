#ifndef JASPION
#define JASPION

#include "../core-simulador-hpp/Personagem.hpp"
class Jaspion : public Personagem
{
    public:
        Jaspion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif