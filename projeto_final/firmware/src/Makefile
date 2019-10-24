ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../include
DEVICES=../devices
FLAGS=-std=c++11 -I$(INC) -I$(DEVICES)

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/coin.o $(BUILD_DIR)/soda.o $(BUILD_DIR)/vending_machine.o $(BUILD_DIR)/delay_linux.o

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/coin.o: coin.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/soda.o: soda.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/vending_machine.o: vending_machine.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/delay_linux.o: delay_linux.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
