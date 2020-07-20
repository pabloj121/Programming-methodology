#include <iostream>
#include "imagenES.h"
#include <cstring>
using namespace std;

// La funcion recibe un buffer y el mensaje a ocultar
void Ocultar(unsigned char buffer[], const char cadena[]){
	int tamanio = strlen(cadena);

	for (int i=0; i<tamanio; i++){
    		char c = buffer[i];
		for (int j = 7; j >= 0; j--){
			if (((1 << j) & c) != 0){
			    buffer = ;
			    
			}
		}
	}
}

int main(){
	const int MAXBUFFER = 1000000, MAXNOMBRE = MAXBUFFER/8;
	char nombre_imagen[MAXNOMBRE];
	unsigned char buffer[MAXBUFFER], columnas = 0;
	char cadena[MAXNOMBRE], salida[100];
	int filas = 0;
	TipoImagen tipo_imagen = LeerTipoImagen(nombre_imagen, filas, columnas);

	// Leemos la imagen de entrada
	cout << "Introduzca la imagen de entrada: ";
	cin.getline(nombre_imagen, MAXNOMBRE);
	
	if(tipo_imagen == IMG_PGM){
		LeerImagenPGM(nombre_imagen, filas, columnas, buffer);
	}
	else if(tipo_imagen == IMG_PPM){
		LeerImagenPPM(nombre_imagen, filas, columnas, buffer);
	}
	else{
		cout << "Tipo de imagen desconocido" << endl;
	}
	
	// Leemos el nombre de la imagen de salia
	cout << "Introduzca la imagen de salida: ";
	cin.getline(salida, MAXNOMBRE);
	// Introducimos el mensaje que queremos ocultar
	cout << "Introduzca el mensaje:"; 
	cin.getline(cadena, MAXNOMBRE);
	Ocultar(buffer, cadena);
	cout << endl << "Ocultando..." << endl;

    //OCULTAMOS EL MENSAJE EN LA IMAGEN INTRODUCIDA.
	if (tipo_imagen == IMG_PGM){	
		EscribirImagenPGM (salida, buffer, filas, columnas);
	}
	else if (tipo_imagen == IMG_PPM){
		EscribirImagenPPM(salida, buffer, filas, columnas);
	}
}