ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
LIBS=../include
FLAGS=-std=c++11 -I$(LIBS)

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/coin.o $(BUILD_DIR)/soda.o

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/coin.o: coin.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/soda.o: soda.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
