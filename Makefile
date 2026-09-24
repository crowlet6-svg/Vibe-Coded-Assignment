BUILD_DIR := build
APP := $(BUILD_DIR)/glyph_composition_editor

.PHONY: all configure build run clean

all: build

configure:
	cmake -S . -B $(BUILD_DIR)

build: configure
	cmake --build $(BUILD_DIR) --parallel

run: build
	@if [ -n "$$DISPLAY" ] || [ -n "$$WAYLAND_DISPLAY" ]; then \
		$(APP); \
	else \
		QT_QPA_PLATFORM=offscreen $(APP); \
	fi

clean:
	rm -rf $(BUILD_DIR)