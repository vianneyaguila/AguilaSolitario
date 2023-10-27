#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <list>
#include <Carta.hpp>
using namespace std;

int main(int argc, char const *argv[])
{

    Ventana ventana;
    Carta* carta1 = new Carta(100,0);
    Carta* Carta2 = new Carta(50,50);

    list<Dibujo*> dibujos;
    dibujos.push_back(carta1);
    dibujos.push_back(Carta2);

    list<Actualizable*> actualizables;
    actualizables.push_back(carta1);
    actualizables.push_back(Carta2);
   

   while(true)
   {
        
        int key = getch();
        if (key == 'q'|| key == 'Q')
            break;
       
        if(key == 'a' || key == KEY_LEFT){
            carta1->DesplazarIzquierda();
        }
        if(key == 'd' || key == KEY_RIGHT){
            carta1->DesplazarDerecha();
        }
        
        if(key == 'w' || key == KEY_UP){
            carta1->DesplazarArriba();
        }

        if(key == 's' || key == KEY_DOWN){
            carta1->DesplazarAbajo();
        }


         if(key == 'j' || key == KEY_LEFT){
            Carta2->DesplazarIzquierda();
        }
        if(key == 'l' || key == KEY_RIGHT){
            Carta2->DesplazarDerecha();
        }
        
        if(key == 'i' || key == KEY_UP){
            Carta2->DesplazarArriba();
        }

        if(key == 'k' || key == KEY_DOWN){
            Carta2->DesplazarAbajo();
        }

         ventana.Actualizar(actualizables);
         ventana.Dibujar(dibujos);
    }
  return 0;
}