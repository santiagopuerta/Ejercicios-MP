// Ejercicio 3. Haz un programa que lea una serie de números por teclado y que los almacene en un fichero de texto.
// Santiago.

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	char c;
	ofstream archivoS("datos.dat"); // Archivo de salida para los datos introducidos.
	if(!archivoS){
		cout << "Error al abrir el fichero datos.dat." << endl;
		return 1;
	}

	cout << "Introduzca elementos tipo int para almacenarlos en datos.dat." << endl;
	while((c = cin.get()) != EOF ){
		if((c >= '0' && c <= '9') || (c == ' ')){
			archivoS.put(c);
		}else{
			cout << "Introduzca solo numeros, este elemento no se guardara." << endl;
		}
	}
	cout << endl;
	cout << "Se han guardado los elementos introducidos en el fichero datos.dat." << endl;
	archivoS.close();
}