
CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =

files = *cc

all: function-example

function-example: $(files)
	@$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean :
	rm -rf *.o function-example ../doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
