// Ejercicio 3. Haz un programa que lea una serie de números por teclado y que los almacene en un fichero de texto.
// Santiago.

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	int c;
	ofstream archivoS("datos.dat"); // Archivo de salida para los datos introducidos.
	if(!archivoS){
		cout << "Error al abrir el fichero datos.dat." << endl;
		return 1;
	}

	cout << "Introduzca elementos tipo int para almacenarlos en datos.dat." << endl;
	while((c = cin.get()) != EOF ){
		if((c >= '0' && c <= '9')){
			archivoS.put(c);
		}else{
			archivoS.put(' ');
		}
	}
	cout << endl;
	cout << "Se han guardado los elementos introducidos en el fichero datos.dat." << endl;
	archivoS.close();
}