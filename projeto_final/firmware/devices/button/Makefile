ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
LIBS=../include
FLAGS=-std=c++11 -I$(LIBS)

all: $(BUILD_DIR)/button.o

$(BUILD_DIR)/button.o: button.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
