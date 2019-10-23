ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../../include
DEVICES=../
FLAGS=-std=c++11 -I$(INC) -I$(DEVICES)

all: $(BUILD_DIR)/keyboard.o

$(BUILD_DIR)/keyboard.o: keyboard.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
