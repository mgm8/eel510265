ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
INC=../include
PROJ_ROOT=../
FLAGS=-std=c++11 -I$(INC) -I$(PROJ_ROOT)

all: $(BUILD_DIR)/time_control.o $(BUILD_DIR)/save_log.o $(BUILD_DIR)/startup.o $(BUILD_DIR)/read_option.o $(BUILD_DIR)/wait_coins.o

$(BUILD_DIR)/time_control.o: time_control.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/save_log.o: save_log.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/startup.o: startup.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/read_option.o: read_option.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/wait_coins.o: wait_coins.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
