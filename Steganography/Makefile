SRC = src
INC = include
OBJ = obj
BIN = bin

CXX = g++
CXXFLAGS =  -Wall -Wextra -pedantic -std=c++03 -g  -I$(INC)

# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile

# ************ Compilación de módulos ************
all : $(BIN)/ocultar

$(BIN)/ocultar : $(OBJ)/ocultar.o $(OBJ)/imagenES.o
	$(CXX) -o $(BIN)/ocultar $(OBJ)/ocultar.o $(OBJ)/imagenES.o

$(OBJ)/imagenES.o : $(SRC)/imagenES.cpp $(INC)/imagenES.h
	$(CXX) -c $(CXXFLAGS) $(SRC)/imagenES.cpp -o $(OBJ)/imagenES.o

$(OBJ)/ocultar.o : $(SRC)/ocultar.cpp $(INC)/imagenES.h
	$(CXX) -c $(CXXFLAGS) $(SRC)/ocultar.cpp -o $(OBJ)/ocultar.o

# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*
