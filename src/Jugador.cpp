#include "Jugador.h"
#include <iostream>

Jugador::Jugador(int x, int y) : Personaje(x, y, 3, '@'), recursos(0) {}

void Jugador::recolectar() {
    recursos++;
    std::cout << "Recolectaste un recurso. Total: " << recursos << "\n";
}

int Jugador::getRecursos() const {
    return recursos;
}
