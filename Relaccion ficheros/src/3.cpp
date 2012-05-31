// Ejercicio 3. Haz un programa que lea una serie de números por teclado y que los almacene en un fichero de texto.
// Santiago.

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream archivoS("datos.dat"); // Archivo de salida para los datos introducidos.
	if(!archivoS){
		cout << "Error al abrir el fichero datos.dat." << endl;
		return 1;
	}

	

}