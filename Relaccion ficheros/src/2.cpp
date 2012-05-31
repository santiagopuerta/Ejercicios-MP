// Ejercicio 2. Haz un programa que reciba como parámetro un fichero y que lo muestre en consola 
// (de forma similar a como lo hace la orden cat de linux).
// Santiago.

// Tenemos que va a entrar un fichero y lo vamos a mostrar por tantalla.

#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	char c;

	if(argc != 2){
		cout << "No se han introducido los argumentos correctamente." << endl;
		return 1;
	}

	ifstream archivoE(argv[1]); // Ficherio de entrada de datos.
	if(!archivoE){
		cout << "Error al abrir el fichero." << endl;
		return 1;
	}

	while((c = archivoE.get()) != EOF){
		cout << c;
	}
	cout << endl;
	cout << "Se ha terminado de leer el fichero." << endl;
	archivoE.close();
}
