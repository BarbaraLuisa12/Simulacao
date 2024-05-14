#ifndef METEORO
#define METEORO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Meteoro : public ArmaAtaque
{
    public:
        Meteoro(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif