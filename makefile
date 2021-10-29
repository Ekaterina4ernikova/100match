.PHONY: clean all test run runtest

BIN_DIR = ./bin
BUILD_DIR = ./build
TEST_DIR = ./test
FLAGS =-Wall -std=c++11

all: $(BIN_DIR)/main

$(BIN_DIR)/main: main.o $(BUILD_DIR)/check_number.o
	g++ $(FLAGS) main.o $(BUILD_DIR)/check_number.o -o $(BIN_DIR)/main

$(BUILD_DIR)/main.o:
	g++ $(FLAGS) -c main.cpp -o $(BUILD_DIR)/main.o
	
$(BUILD_DIR)/check_number.o:
	g++ $(FLAGS) -c check_number.cpp -o $(BUILD_DIR)/check_number.o

test: $(BUILD_DIR)/check_number.o $(BUILD_DIR)/test.o
	g++ $(FLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/check_number.o -o $(BIN_DIR)/test

$(BUILD_DIR)/test.o:
	g++ $(FLAGS) -c $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o
	
	
run: 
	./bin/main
	
runtest:
	./bin/test

clean:
	rm -f build/*.o
	rm -f bin/main
	rm -f bin/test