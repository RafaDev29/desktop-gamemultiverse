#include "Personaje.h"
#include <iostream>

Personaje::Personaje(int x, int y, int vida, char simbolo)
    : x(x), y(y), vida(vida), simbolo(simbolo) {}

void Personaje::mover(char direccion) {
    switch (direccion) {
        case 'w': if (y > 0) y--; break;
        case 's': if (y < 19) y++; break;
        case 'a': if (x > 0) x--; break;
        case 'd': if (x < 19) x++; break;
    }
}

void Personaje::mostrar() const {
    std::cout << simbolo;
}

int Personaje::getX() const { return x; }
int Personaje::getY() const { return y; }
char Personaje::getSimbolo() const { return simbolo; }
int Personaje::getVida() const { return vida; }
void Personaje::perderVida() { vida--; }
