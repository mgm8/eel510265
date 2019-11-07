ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../include
DEVICES=../devices
FLAGS=-std=c++11 -I$(INC) -I$(DEVICES)

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/coin.o $(BUILD_DIR)/drink.o $(BUILD_DIR)/vending_machine.o $(BUILD_DIR)/delay_linux.o  $(BUILD_DIR)/coin_changer.o $(BUILD_DIR)/calendar.o $(BUILD_DIR)/clock.o $(BUILD_DIR)/clock_calendar.o

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/coin.o: coin.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/drink.o: drink.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/vending_machine.o: vending_machine.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/delay_linux.o: delay_linux.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/coin_changer.o: coin_changer.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/calendar.o: calendar.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/clock.o: clock.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/clock_calendar.o: clock_calendar.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
