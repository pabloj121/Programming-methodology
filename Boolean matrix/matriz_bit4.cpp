#include "matriz_bit4.h"
#include <cmath>

bool Inicializar(MatrizBit& m, int fils, int cols){
	bool conseguido = false;

	if(fils*cols < 100){
		conseguido = true;
		m.tam  = (fils <<8) | cols;
		
		for(int i= 0; i< 4; i++){
			m.v[i] = 0;
		}
	}
	return conseguido;
}


int Filas (const MatrizBit& m){
	
	return m.tam >> 8;
}

int Columnas( const MatrizBit& m){
	
	return m.tam & 0xFF;
}


bool Get(const MatrizBit& m, int f, int c){
	assert(f>=0 && Filas(m) && c>=0 && c<Columnas(m));
	int pos = f * Columnas(m) + c;
	int indice = pos / 32;
	int bit = pos %32;
	return (m.v[indice] & (1<< bit))  != 0;
}


void Set(MatrizBit& m, int f, int c, bool v){
	assert(f>=0 && Filas(m) && c>=0 && c<Columnas(m));
	

	int pos = f * Columnas(m) + c;
	int indice = pos / 32;
	int bit = pos % 32;
	
	if(v == true){
		m.v[indice] = m.v[indice] | (1<< bit);
	}
	else{
		m.v[indice] = m.v[indice] & ~(1<< bit);
	}
}