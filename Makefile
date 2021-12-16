CXX     := g++
CXX_FLAGS := -Wall -o

all:

	$(CXX) $(CXX_FLAGS) dfa_simulation client.cc dfa.cc state.cc alphabet.cc strings.cc symbol.cc 


clean:

	rm -rf dfa_simulation
