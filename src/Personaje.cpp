#include "Personaje.h"
#include <iostream>

Personaje::Personaje(int x, int y, int vida, char simbolo)
    : x(x), y(y), vida(vida), simbolo(simbolo) {}

void Personaje::mover(char direccion) {
    switch (direccion) {
        case 'w': y--; break;
        case 's': y++; break;
        case 'a': x--; break;
        case 'd': x++; break;
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
