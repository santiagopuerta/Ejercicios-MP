// Ejercicio 7. Haz un programa que cuente el número de líneas que hay en un fichero.
// Santiago.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	char c;
	int contador = 0;

	if(argc != 2){
		cout << "Error, no se han introducido los argumentos correctamente" << endl;
		return 1;
	}

	// Cargo fichero.
	ifstream archivoE(argv[1]);
	if(!archivoE){
		cout << "Error al cargar el fichero de entrada." << endl;
		return 1;
	}

	// Leo fichero caracter a caracter y cuento el numero de saltos de linea que existen.
	while( (c = archivoE.get()) != EOF){
		if(c == '\n'){
			contador++;
		}
	}
	contador++;
	cout << "El numero de lineas es: " << contador << endl;

	// Cierro fichero.
	archivoE.close();
}