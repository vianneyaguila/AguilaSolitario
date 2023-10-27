#pragma once 
#include <Dibujo.hpp>
#include <Actualizable.hpp>


class Carta : public Dibujo, public Actualizable
{
private:
    
public:
    Carta() : Dibujo("cartaast"){
    }

    Carta(int x, int y) : Dibujo(x,y,"cartaast"){
    }
    
   void Actualizar() override{}

    void DesplazarIzquierda(){
        this->x -= 1;
    }

    void DesplazarDerecha(){
        this->x += 1;
    }

    void DesplazarArriba(){
        this->y -= 1;
    }

    void DesplazarAbajo(){
        this->y += 1;
    }
    
~Carta(){}
};