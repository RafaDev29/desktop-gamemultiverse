#include <iostream>
#include <cstdlib>
#include <unistd.h>  // para usleep (pausa)

#include "Jugador.h"

const int WIDTH = 20;
const int HEIGHT = 20;
char mapa[HEIGHT][WIDTH];

// Limpiar pantalla (consola)
void limpiarPantalla() {
    system("clear");
}

// Dibujar mapa
void dibujarMapa(Jugador& jugador) {
    limpiarPantalla();

    // Limpiar el mapa
    for (int i = 0; i < HEIGHT; ++i)
        for (int j = 0; j < WIDTH; ++j)
            mapa[i][j] = ' ';

    // Colocar algunos recursos
    mapa[5][5] = 'o';
    mapa[3][10] = 'o';
    mapa[15][4] = 'o';

    // Aliados (verde)
    mapa[18][2] = 'W';
    mapa[18][17] = 'W';

    // Enemigos (rojo)
    mapa[4][1] = 'X';
    mapa[10][12] = 'X';
    mapa[6][18] = 'X';

    // Posicionar jugador
    mapa[jugador.getY()][jugador.getX()] = '@';

    // Dibujar en consola
    std::cout << "VIDAS: " << jugador.getVida() << "\n\n";
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j)
            std::cout << mapa[i][j] << ' ';
        std::cout << "\n";
    }
}

// Verificar colisiones simples
void verificarColision(Jugador& jugador) {
    char celda = mapa[jugador.getY()][jugador.getX()];
    if (celda == 'X') {
        jugador.perderVida();
        std::cout << "\n¡Has chocado con un enemigo! Vidas restantes: " << jugador.getVida() << "\n";
        usleep(1000000); // 1 segundo de pausa
    }
}

int main() {
    Jugador jugador(10, 10);
    char tecla;

    while (jugador.getVida() > 0) {
        dibujarMapa(jugador);
        std::cout << "\nMover con W/A/S/D. Salir con Q: ";
        std::cin >> tecla;

        if (tecla == 'q' || tecla == 'Q') break;

        jugador.mover(tecla);

        verificarColision(jugador);
    }

    std::cout << "\nJuego terminado.\n";
    return 0;
}
