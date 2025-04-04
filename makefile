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

memorias : $(SRC)/memoria.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

runM :  $(BIN)/memorias
	./$<

cleanM :
	rm $(BIN)/*