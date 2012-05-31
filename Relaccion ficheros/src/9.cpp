// Ejercicio 9. Lee un fichero de texto y cópialo en otro sin poner las vocales.
// Santiago.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	char c;

	// Compruebo si el numero de argumentos introducido es valido.
	if(argc != 3){
		cout << "El numero de argumentos es invalido." << endl;
		return 1;
	}

	// Abro archivo de entrada de datos.
	ifstream archivoE(argv[1]);
	if(!archivoE){
		cout << "Error al abrir el fichero de entrada." << endl;
		return 1;
	}

	// Abro archivo de salida de datos.
	ofstream archivoS(argv[2]);
	if(!archivoS){
		cout << "Error al abrir el fichero de salida." << endl;
		archivoE.close();
		return 1;
	}

	// Voy recorriendo el fichero de entrada y almaceno los caracteres que no son vocales.
	while((archivoE.get(c))){
		if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
			archivoS.put(c);
		}
	}
	cout << "Fin de programa." << endl;
	// Cierro ficheros.
	archivoE.close();
	archivoS.close();
}