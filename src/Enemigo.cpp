#include "Enemigo.h"
#include <cmath>

Enemigo::Enemigo(int x, int y) : Personaje(x, y, 1, 'X') {}

void Enemigo::moverHaciaJugador(Jugador& jugador) {
    int jx = jugador.getX();
    int jy = jugador.getY();

    // Movimiento básico 1 paso hacia el jugador
    if (jx < x) x--;
    else if (jx > x) x++;

    if (jy < y) y--;
    else if (jy > y) y++;
}
