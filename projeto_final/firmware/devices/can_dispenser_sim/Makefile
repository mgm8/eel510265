ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../../include
FLAGS=-std=c++11 -I$(INC)

all: $(BUILD_DIR)/can_dispenser_sim.o

$(BUILD_DIR)/can_dispenser_sim.o: can_dispenser_sim.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
