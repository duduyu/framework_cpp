CC := g++

SRC := RefBase.cpp test.cpp
OBJ := $(SRC:%.cpp=%.o)

all:test

test: $(OBJ)
	$(CC) -o $@ $^

%.o : %.cpp
	$(CC) -c $<

clean:
	@rm -rf *.o test

