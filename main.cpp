
#include <iostream>

#include "./lib/arreglo.hpp"
#include "./lib/borrar_arreglo.hpp"
#include "./lib/crear_arreglo.hpp"

#include "./lib/inicializar.hpp"
#include "./lib/insertar.hpp"
#include "./lib/lugar.hpp"
#include "./lib/lugar_vacio.hpp"
#include "./lib/mostrar.hpp"
#include "./lib/buscar.hpp"



int main()
{
  int largo = 5;
  int posicion = largo-2;
  int num = 9;
  ARREGLO arreglo;
  ARREGLO arreglo2;

  Crear_Arreglo(  &arreglo , largo );
  Inicializar(&arreglo);
  Insertar(&arreglo, num, posicion);
  Mostrar(&arreglo);

  std::cout << "-----------------" << std::endl;

  Crear_Arreglo(& arreglo2, largo-2);
  Insertar(&arreglo2, num, posicion-1);
  Mostrar(&arreglo2);

  //Borrar_Arreglo(&arreglo);

}

