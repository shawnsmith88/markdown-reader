CXX=g++
CXXFLAGS = -Wall -g
src = $(wildcard src/reader/base/*.cpp) \
	$(wildcard src/reader/main.cpp)
obj = $(src:.cpp=.o)
deps= $(wildcard src/reader/base/*.h)

# LDFLAGS = -lGL -lglut -lpng -lz -lm

reader: $(obj) $(deps)
	    $(CXX) -o $@ $^ # $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) reader
