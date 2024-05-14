#ifndef PEGASUS
#define PEGASUS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Redemoinho.hpp"

class Pegasus : public ArmaDefesa
{
    public:
        Pegasus(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif