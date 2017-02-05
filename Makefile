CXX= g++
CXXFLAGS= -std=c++14 -pedantic -Wall -Wextra -Werror 
SRC= map.cc tile.cc main.cc
BIN= drive

all : $(BIN)


$(BIN) : $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -rf $(BIN)

.PHONY: clean all 
