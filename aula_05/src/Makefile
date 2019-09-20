ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
LIBS=../include
FLAGS=-std=c++11 -I$(LIBS)

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/cshape3d.o $(BUILD_DIR)/cbox.o $(BUILD_DIR)/ccone.o $(BUILD_DIR)/ccylinder.o

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/cshape3d.o: cshape3d.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/cbox.o: cbox.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/ccone.o: ccone.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/ccylinder.o: ccylinder.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
