// Ejercicio 6. Haz un programa que cuente el número de letras ’a’ que hay en un fichero de texto.
// Santiago.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){

	char c;
	int contador = 0;

	if(argc != 2){
		cout << "El numero especificado de argumentos no es valido." << endl;
		return 1;
	}

	// Abrimos el fichero que nos pasan desde argv[1]
	ifstream archivoE(argv[1]);
	if(!archivoE){
		cout << "No se ha podido abrir el fichero especificado." << endl;
		return 1;
	}
	//Ahora pasamos a contar el numero de a o A que existen en el fichero.
	while((c = archivoE.get()) != EOF){
		if( c == 'a' || c == 'A'){
			contador++;
		}
	}

	cout << "El numero de a y A existentes en el archivo " << argv[1] << " es: " << contador << endl;

	archivoE.close();
}