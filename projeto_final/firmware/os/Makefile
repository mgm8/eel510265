ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
FLAGS=-std=c++11

all: $(BUILD_DIR)/task.o

$(BUILD_DIR)/task.o: task.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
