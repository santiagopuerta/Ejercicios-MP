// Ejercicio 5. Haz un programa que reciba como parámetros los nombres de dos ficheros binarios
// y que copie el contenido del primero en el segundo.
// Santiago.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	int buffer = sizeof(char);
	char c[buffer];

	if(argc != 3){
		cout << "No se han especificado suficientes argumentos." << endl;
		return 1;
	}

	// Abro archivo de donde proceden los datos.
	ifstream archivoE(argv[1]);
	if(!archivoE){
		cout << "No se ha podido abrir el fichero de entrada de datos." << endl;
		return 1;
	}

	// Abro archivo donde se copian los datos del primer archivo.
	ofstream archivoS(argv[2]);
	if(!archivoS){
		cout << "No se ha podido abrir el fichero de salida de datos." << endl;
		archivoE.close();
		return 1;
	}

	//Comenzamos a leer y a la vez a escribir en los ficheros correspondientes.
	while(archivoE.read(c, buffer)){
		archivoS.write(c, buffer);
	}


	archivoE.close();
	archivoS.close();

}
