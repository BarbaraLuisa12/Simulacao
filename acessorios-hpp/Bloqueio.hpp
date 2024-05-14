#ifndef BLOQUEIO
#define BLOQUEIO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Bloqueio : public ArmaDefesa
{
    public:
        Bloqueio(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif