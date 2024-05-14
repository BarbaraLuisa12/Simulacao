#ifndef REDEMOINHO
#define REDEMOINHO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Redemoinho.hpp"

class Redemoinho : public ArmaDefesa
{
    public:
        Redemoinho(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif