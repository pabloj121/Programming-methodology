#include "matriz_bit2.h"

bool Inicializar(MatrizBit& m, int fils, int cols){
	bool conseguido = false;

	if(fils * cols < 100){
		conseguido = true;
		m.fils = fils;
		m.cols = cols;
		
		for(int i= 0; i< fils*cols; i++){
			m.v[i] = false;
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
	return m.v[f*(m.cols)+c];
}


void Set(MatrizBit& m, int f, int c, bool v){
	assert(f>=0 && f<m.fils && c>=0 && c<m.cols);
	m.v[f*(m.cols)+c] = v;
}