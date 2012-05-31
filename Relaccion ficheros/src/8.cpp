// Ejercicio 8. Haz un programa que cuente el número de palabras que hay en un fichero.
// Santiago.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	char c;
	char c2;
	int contador = 0;

	if(argc != 2){
		cout << "El numero de argumentos insertado no es valido." << endl;
		return 1;
	}

	// Abro el fichero especificado por argv[1] para lectura.
	ifstream archivoE(argv[1]);
	if(!archivoE){
		cout << "Error, no se ha podido cargar el fichero " << argv[1] << endl;
		return 1;
	}

	// Recorro el fichero elemento a elemento contando el numero de espacios + 1 para asi contar la ultima palabra.
	// Nota, tambien se puede realizar leyendo por buffer palabras.
	while((c = archivoE.get()) != EOF){
		c2 = c;
		if(c == ' ' || c == '\n'){
			contador++;
		}
	}
	// c2 nos sirve para contar si en la ultima posicion hay un \n y no contarlo.
	if(c2 == '\n'){
		contador = contador-1;
	}
	contador++;
	cout << "El numero de palabras del fichero es: " << contador << endl;
	// Cierro el fichero.
	archivoE.close();
}