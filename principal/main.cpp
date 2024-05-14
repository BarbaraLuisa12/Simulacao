#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Marreta.hpp"
#include "../acessorios-hpp/Laser.hpp"
#include "../acessorios-hpp/Sabre.hpp"
#include "../acessorios-hpp/Coelho.hpp"
#include "../acessorios-hpp/Meteoro.hpp"

#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Pastilha.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Bloqueio.hpp"
#include "../acessorios-hpp/Redemoinho.hpp"
#include "../acessorios-hpp/Pegasus.hpp"

#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chapolin.hpp"
#include "../personagens-hpp/Jaspion.hpp"
#include "../personagens-hpp/Jedi.hpp"
#include "../personagens-hpp/Monica.hpp"
#include "../personagens-hpp/Seiya.hpp"


#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    //ARMAS DE ATAQUE 
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    //NOVAS ARMAS DE ATAQUE CRIADAS
    ArmaAtaque* arma3 = new Marreta("Marreta Bionica", 0,70);
    ArmaAtaque* arma4 = new Laser("Spadium Laser", 0,80);
    ArmaAtaque* arma5 = new Sabre("Sabre de Luz", 0,75);
    ArmaAtaque* arma6 = new Coelho("Coelhada do Sansao", 0,60);
    ArmaAtaque* arma7 = new Meteoro("Meteoro de Pegasus", 0,90);

    //ARMAS DE DEFESA 
    ArmaDefesa* escudo = new Escudo("Latão", 1);

    //NOVAS ARMAS DE DEFESA CRIADAS 
    ArmaDefesa* pastilha = new Pastilha("Pastilhas Encolhedoras", 0.5);
    ArmaDefesa* armadura = new Armadura("Armadura de Ferro", 0.8);
    ArmaDefesa* bloqueio = new Bloqueio("Bloqueio de Jedi", 0.6);
    ArmaDefesa* redemoinho = new Redemoinho("Redemoinho Protetor", 0.4);
    ArmaDefesa* pegasus = new Pegasus("Armadura de Pegasus", 1.2);
    
    //PERSONAGENS 
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva", 100, arma, escudo);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, arma, escudo);
    Personagem* p4 = new Chaves(2, "Chaves Eq2 - Reserva", 100, arma, escudo);

    //NOVOS PERSONAGENS CRIADOS
    Personagem* p5 = new Chapolin(3, "Chapolin Colorado", 100, arma3, pastilha);
    Personagem* p6 = new Jaspion(4, "Jaspion", 100, arma4, armadura);
    Personagem* p7 = new Jedi(5, "Jedi", 100, arma5, bloqueio);
    Personagem* p8 = new Monica(6, "Monica", 100, arma6, redemoinho);
    Personagem* p9 = new Seiya(7, "Saint-Seiya", 100, arma7, pegasus);


    Simulador* simulador = new Simulador();

    //ADICIONAR PERSONAGENS 
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);

    //ADIÇÃO DOS NOVOS PERSONAGENS CRIADOS
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 1);
    simulador->adicionarPersonagem(p8, 2);
    simulador->adicionarPersonagem(p9, 1);
    
    simulador->iniciarSimulacao();

    return 0;
}