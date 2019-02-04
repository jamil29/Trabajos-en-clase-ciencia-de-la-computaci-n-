#include "Snake.h"
#include "Fruta.h"


class Juego{
        public:
                void main();
        private:
                int score,nivel,velocidad;
                Snake<int> snake[1000];
                Fruta<int> fruta;
                int tam=4;
                int c=21,f=64;
                bool gameover=false;
                void gotoxy(int , int);
                void tablero();
                //void inicio();
                void genFruta();
                void genSnake();
                void loop();
                void tecla();
                void actualizar();
                void imprimir();
                void cfruta();
                void muerte();
                void puntos();
                //void menu();
                void portada();
                void muerte2();

};
