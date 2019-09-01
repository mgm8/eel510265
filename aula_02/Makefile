SOURCE=src
TARGET=aula_02

ifndef BUILD_DIR
	BUILD_DIR=build
endif

CXX=g++
FLAGS=-std=c++11

all:
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C $(SOURCE)
	$(CXX) $(FLAGS) $(BUILD_DIR)/*.o -o $(BUILD_DIR)/$(TARGET)

clean:
	rm $(BUILD_DIR)/*.o $(BUILD_DIR)/$(TARGET)
