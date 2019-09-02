ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
LIBS=../include
FLAGS=-std=c++11 -I$(LIBS)

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/clock.o $(BUILD_DIR)/calendar.o $(BUILD_DIR)/clock_calendar.o

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/clock.o: clock.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/calendar.o: calendar.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/clock_calendar.o: clock_calendar.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
