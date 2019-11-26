SOURCE=src
TARGET=vending_machine

ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
FLAGS=-std=c++11 -pthread

all:
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C devices
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C os
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C tasks
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C $(SOURCE)
	$(CXX) $(FLAGS) $(BUILD_DIR)/*.o -o $(BUILD_DIR)/$(TARGET)

clean:
	rm $(BUILD_DIR)/*.o $(BUILD_DIR)/$(TARGET)
