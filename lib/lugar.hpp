int lugar(
    ARREGLO* _arreglo,
    int _numero
){
    for(int i = 0; i<_arreglo->largo; i+=1)
        if ( _arreglo->datos[i] == _numero )
            return i;

    return -1;
}
