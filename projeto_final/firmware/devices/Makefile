ifndef BUILD_DIR
	BUILD_DIR=.
endif

all:
	$(MAKE) BUILD_DIR=$(BUILD_DIR) -C terminal
	$(MAKE) BUILD_DIR=$(BUILD_DIR) -C keyboard
	$(MAKE) BUILD_DIR=$(BUILD_DIR) -C coin_changer_sim
	$(MAKE) BUILD_DIR=$(BUILD_DIR) -C can_dispenser_sim

clean:
	rm $(BUILD_DIR)/*.o
