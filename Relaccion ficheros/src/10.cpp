// Ejercicio 10. Lee un fichero de texto y muéstralo por consola en orden inverso usando las funciones de posicionamiento.
// Santiago.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	char c;

	if(argc != 2){
		cout << "Error, argumentos introducidos invalidos." << endl;
		return 1;
	}

	// Abro archivo de entrada.
	ifstream archivoE(argv[1]);
	if(!archivoE){
		cout << "Error al abrir el fichero de entrada." << endl;
		return 1;
	}

	// Me posiciono al final del archivo para ir para atras.
	archivoE.seekg(0, ios::end);	// Nos colocamos al final.
	archivoE.seekg(-1, ios::end);	// Nos colocamos en la posicion penultima.
	while(archivoE.tellg() > 0){	// Estoy realizando esto hasta la posicion inicial.
		c = archivoE.get();
		cout << c;
		archivoE.seekg(-2, ios::cur);	// Retrocedemos 2.
	}
	c = archivoE.get();
	cout << c << endl;
	// Cerramos el fichero de entrada de datos.
	archivoE.close();
}