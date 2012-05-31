// Ejercicio 1. Haz un programa que lea un texto desde consola y que lo escriba en un fichero de disco.
// Santiago.

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	char e;
	// Abrimos el fichero donde vayamos a escribir el texto lo llamare datos.dat.
	// Lo abrimos como fichero de salida.
	ofstream archivoS("datos.dat");
	if(!archivoS){
		cout << "Error al abrir el fichero datos.dat." << endl;
		return 1;
	}
	
	// Lectura adelantada.
	cout << "Inserte el texto que desee alamacenar en datos.dat." << endl;
	cout << "Para finalizar, pulsar CNTRL + D .\n" << endl;
	e = cin.get();

	// Leemos mientras no eof.
	while(!cin.eof()){
		archivoS.put(e);
		e = cin.get();
	}
	cout << endl;
	cout << "Hemos terminado de leer." << endl;


	archivoS.close();
}