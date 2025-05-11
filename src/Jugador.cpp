#include "Jugador.h"
#include <iostream>

Jugador::Jugador(int x, int y) : Personaje(x, y, 3, '@') {}

void Jugador::recolectar() {
    std::cout << "Recolectando recurso...\n";
}
