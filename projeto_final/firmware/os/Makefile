ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
FLAGS=-std=c++11 -pthread

all: $(BUILD_DIR)/task.o $(BUILD_DIR)/timer.o $(BUILD_DIR)/timer_linux.o $(BUILD_DIR)/delay.o $(BUILD_DIR)/idle.o

$(BUILD_DIR)/task.o: task.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/timer.o: timer.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/timer_linux.o: timer_linux.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/delay.o: delay.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/idle.o: idle.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
