#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje {
protected:
    int x, y;
    int vida;
    char simbolo;

public:
    Personaje(int x, int y, int vida, char simbolo);
    virtual void mover(char direccion);
    virtual void mostrar() const;
    int getX() const;
    int getY() const;
    char getSimbolo() const;
    int getVida() const;
    void perderVida();
};

#endif
