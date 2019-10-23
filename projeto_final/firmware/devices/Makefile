ifndef BUILD_DIR
	BUILD_DIR=.
endif

all:
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C button
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C terminal
	$(MAKE) BUILD_DIR=$(CURDIR)/$(BUILD_DIR) -C keyboard

clean:
	rm $(BUILD_DIR)/*.o
