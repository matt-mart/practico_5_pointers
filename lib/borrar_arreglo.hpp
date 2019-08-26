void Borrar_Arreglo(
  ARREGLO* _arreglo
){

  delete[] _arreglo->datos;

  _arreglo->datos = nullptr;
  _arreglo->largo = 0;

}
