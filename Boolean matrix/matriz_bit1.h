

struct MatrizBit {
	int fils, cols; 
	bool m[10][10];
};


bool Inicializar(MatrizBit& m, int fils, int cols);

int Filas (const MatrizBit& m);

int Columnas( const MatrizBit& m);

bool Get(const MatrizBit& m, int f, int c);

void Set(MatrizBit& m, int f, int c, bool v);

