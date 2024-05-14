#ifndef PASTILHA
#define PASTILHA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Pastilha : public ArmaDefesa
{
    public:
        Pastilha(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif