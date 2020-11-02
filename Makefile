CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

BIN     := bin
SRC     := src
INCLUDE := include
LIB     := lib
LIBRARIES   :=
EXECUTABLE  := tp3


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	@echo "🚀 Executing..."
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	@echo "🚧 Building..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

memoryleak: clean all
	clear
	@echo " Running valgrind test1..."
	valgrind --leak-check=yes ./$(BIN)/$(EXECUTABLE) <./testcases/EX1> ./testcases/my_output.out

clean:
	@echo "🧹 Clearing..."
	-rm $(BIN)/*
