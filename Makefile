CXX = g++                         # The C++ compiler command
CXXFLAGS = -std=c++14 -Wall -g     # The C++ compiler options

# The all target builds all of the programs handled by the makefile.
all: p08_grammar

p08_grammar: p08_grammar.o grammar.o production.o alphabet.o strings.o symbol.o
	$(CXX) $(CXXFLAGS) -o $@ $^

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:

	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
clean :
	rm -f p08_grammar *.o core
