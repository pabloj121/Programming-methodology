#include "matriz_bit1.h"
#include <cassert>

bool Inicializar(MatrizBit& m, int fils, int cols){
	bool conseguido = false;

	if(fils < 10 && cols < 10){ 
		conseguido = true;
		m.fils = fils;
		m.cols = cols;
		
		for(int i= 0; i< fils; i++){
			for(int j= 0; j< cols; j++){
				m.m[i][j] = false;
			}
		}
	}
	return conseguido;
}


int Filas (const MatrizBit& m){
	return m.fils;
}

int Columnas( const MatrizBit& m){
	return m.cols;
}


bool Get(const MatrizBit& m, int f, int c){
	assert(f>=0 && f<m.fils && c>=0 && c<m.cols);
	return m.m[f][c];
}


void Set(MatrizBit& m, int f, int c, bool v){
	assert(f>=0 && f<m.fils && c>=0 && c<m.cols);
	m.m[f][c] = v;
}