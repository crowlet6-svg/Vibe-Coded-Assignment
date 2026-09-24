# Glyph Composition Editor

A small Qt 6 starter project for the Chapter 2 case study. It includes:

- a `Glyph` interface and `TextGlyph` leaf implementation;
- a composite `Composition` that renders nested glyphs in order; and
- an editable `QTextEdit` window initialized from a `Composition`.

## Build

Using the Makefile:

```sh
make
```

Or directly with CMake:

```sh
cmake -S . -B build
cmake --build build
```

## Run

```sh
make run
```

`make run` uses the desktop Qt platform when a display is available and
automatically uses Qt's offscreen platform in a headless environment.

The Makefile also provides `make run` and `make clean`.

In a headless container, use Qt's offscreen platform for a smoke test:

```sh
QT_QPA_PLATFORM=offscreen ./build/glyph_composition_editor
```

The initial editor content is assembled by `Composition::render()`. The next
natural extension is to add formatting and layout responsibilities to the
glyph hierarchy rather than keeping all rendering in the window.