#include "matriz_bit3.h"

bool Inicializar(MatrizBit& m, int fils, int cols){
	bool conseguido = false;

	if(fils*cols < 100){
		conseguido = true;
		m.tam  = (fils <<16) | cols;
		
		for(int i= 0; i< fils*cols; i++){
			m.v[i] = '0';
		}
	}
	return conseguido;
}


int Filas (const MatrizBit& m){
	
	return m.tam >> 16;
}

int Columnas( const MatrizBit& m){
	
	return m.tam & 0xFFFF;
}


bool Get(const MatrizBit& m, int f, int c){
	assert(f>=0 && f<Filas(m) && c>=0 && c<Columnas(m));

	return m.v[f * Columnas(m) + c] == '1';
}


void Set(MatrizBit& m, int f, int c, bool v){
	assert(f>=0 && f<Filas(m) && c>=0 && c<Columnas(m));
	char a= '0';
	if(v == true){
		a = '1';
	}
	m.v[f * Columnas(m) + c]= a;
}