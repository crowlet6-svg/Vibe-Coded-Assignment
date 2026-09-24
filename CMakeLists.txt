cmake_minimum_required(VERSION 3.16)

project(glyph_composition_editor VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(glyph_composition_editor
    src/composition.cpp
    src/composition.h
    src/glyph.cpp
    src/glyph.h
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
)

target_link_libraries(glyph_composition_editor PRIVATE Qt6::Widgets)

set_target_properties(glyph_composition_editor PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)