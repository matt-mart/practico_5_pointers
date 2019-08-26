void Insertar(
    ARREGLO* _arreglo ,
    int numero,
    int posicion

){

    if ( _arreglo->datos [ posicion ] == 0 )
        _arreglo->datos [posicion] = numero;

    else
        std:: cout << " Está ocupada " << std::endl;

}
