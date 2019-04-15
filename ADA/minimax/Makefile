bin/ticTacToe: src/ticTacToe.cpp $(patsubst lib/%.cpp, build/%.o, $(wildcard lib/*))
	g++ -std=c++17 -I include -o $@ $^

build/%.o: lib/%.cpp include/%.h
	g++ -std=c++17 -I include -o $@ $< -c
