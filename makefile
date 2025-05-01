PROYECTO := programa
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

$(EXE) : $(SRC)/main.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run : $(EXE)
	./$<

clean :
	rm $(BIN)/*

bin/memoria : src/memoria.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

memoria :  bin/memorias
	./$<

archivo : bin/archivo
	./$<

bin/archivo :src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)

binario : bin/binario
	./$<

bin/binario :src/binario.cpp
	c++ $< -o $@ -I$(INCLUDE)

lista : bin/lista
	./$<

bin/lista :src/lista.cpp
	c++ $< -o $@ -I$(INCLUDE)

vector : bin/vector
	./$<

bin/vector :src/vector.cpp
	c++ $< -o $@ -I$(INCLUDE)

map : bin/map
	./$<

bin/map :src/map.cpp
	c++ $< -o $@ -I$(INCLUDE)

set : bin/set
	./$<

bin/set :src/set.cpp
	c++ $< -o $@ -I$(INCLUDE)