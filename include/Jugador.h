#ifndef JUGADOR_H
#define JUGADOR_H

#include "Personaje.h"

class Jugador : public Personaje {
public:
    Jugador(int x, int y);
    void recolectar();
};

#endif
