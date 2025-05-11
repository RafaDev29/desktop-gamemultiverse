#ifndef JUGADOR_H
#define JUGADOR_H

#include "Personaje.h"

class Jugador : public Personaje {
private:
    int recursos;

public:
    Jugador(int x, int y);
    void recolectar();
    int getRecursos() const;
};

#endif
