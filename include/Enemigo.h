#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "Personaje.h"
#include "Jugador.h"

class Enemigo : public Personaje {
public:
    Enemigo(int x, int y);
    void moverHaciaJugador(Jugador& jugador);
};

#endif
