ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../../include
FLAGS=-std=c++11 -I$(INC)

all: $(BUILD_DIR)/coin_changer_sim.o

$(BUILD_DIR)/coin_changer_sim.o: coin_changer_sim.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
