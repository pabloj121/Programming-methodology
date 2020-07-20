#include <iostream>
using namespace std;

int main(){
 	const int MAXBUFFER = 1000000, MAXNOMBRE = MAXBUFFER/8;
	char nombre_imagen[MAXNOMBRE];
	unsigned char buffer[MAXBUFFER], columnas = 0;
	char cadena[MAXNOMBRE], salida[100];
	int filas = 0;
	TipoImagen tipo_imagen = LeerTipoImagen(nombre_imagen, filas, columnas);

    //LEEMOS LA IMAGEN A REVELAR
	cout << "Introduza la imagen de entrada: ";
	cin.getline(,MAXNOMBRE);
	
	cout << "Revelando..." << endl;
	cout << "El mensaje obtenido es: " << endl << "mensaje";
}