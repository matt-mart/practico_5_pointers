void Crear_Arreglo(
  ARREGLO* _arreglo,
  int      _largo
){

  Borrar_Arreglo( _arreglo );

  _arreglo->datos = new int [ _largo ];
  _arreglo->largo = _largo;

}
