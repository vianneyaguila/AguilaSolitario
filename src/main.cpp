
#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
    // std::cout<<"Algo"<<std::endl;
    // return 0;

    std::cout << "Tipos de datos" << std::endl;
    std::cout << "int" << sizeof(int) << std::endl;
    std::cout << "char" << sizeof(int) << std::endl;
    std::cout << "bool" << sizeof(int) << std::endl;
    std::cout << "float" << sizeof(int) << std::endl;
    std::cout << "double" << sizeof(int) << std::endl;
    std::cout << "Mascota" << sizeof(int) << std::endl;

    std::cout << std::endl
              << std::endl;
    std::cout << "Direcciones de memoria" << std::endl;
    int a = 4;

    std::cout << "Tamaño: " << sizeof(a) << std::endl;
    std::cout << "Contenido: " << a << std::endl;
    std::cout << "Direccion: " << &a << std::endl;

    void *puntero = malloc(32); // reserva memoria (memory allocation)
    free(puntero);              // es para liberar memoria para que el sistema despues pueda utilizar el espacio

    std::cout << "\nMascota en C" << std::endl;
    Mascota *mascotaC = (Mascota *)malloc(sizeof(Mascota)); // reserva un tamaño de memoria de un entero
    mascotaC->Inicializar();
    mascotaC->DecirNombre();
    mascotaC->Destruir();
    free(mascotaC);

    // memoria dinamica C++
    std::cout << "\nMascota en C++" << std::endl;
    Mascota *mascotaCPP = new Mascota();
    mascotaCPP->DecirNombre();
    delete mascotaCPP;

    return 0;
};
