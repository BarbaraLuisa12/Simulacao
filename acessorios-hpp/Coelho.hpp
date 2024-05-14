#ifndef COELHO
#define COELHO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Coelho : public ArmaAtaque
{
    public:
        Coelho(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif