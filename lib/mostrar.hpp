void Mostrar (
    ARREGLO* _arreglo
){

  for (int i = 0; i<_arreglo->largo; i+=1)
    std::cout << "elemento: " << _arreglo->datos[i] << " posicion: " << i << std::endl;
}
