ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../../include
DEVICES=../
FLAGS=-std=c++11 -I$(INC) -I$(DEVICES)

all: $(BUILD_DIR)/terminal.o

$(BUILD_DIR)/terminal.o: terminal.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
