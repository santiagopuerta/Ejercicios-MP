// Ejercicio 4. Haz un programa que lea el fichero escrito por el programa del ejercicio 3 
// y que muestre en consola la suma de todos esos números.
// Santiago.

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(){

	char c[10];
	int suma = 0;
	cout << "Se va a hacer la suma de todos los elementos de el archivo." << endl;
	while((cin.getline(c, 10,' '))){
		cout << "entra";
		suma = suma + atoi(c);
	}
	cout << endl;
	cout << "Se ha realizado la suma de todos los elementos, el resultado es: " << suma << endl;
}