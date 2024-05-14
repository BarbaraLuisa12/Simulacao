#ifndef JEDI
#define JEDI
#include "../core-simulador-hpp/Personagem.hpp"
class Jedi : public Personagem
{
    public:
        Jedi(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif