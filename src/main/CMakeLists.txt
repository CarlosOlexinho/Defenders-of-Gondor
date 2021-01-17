add_executable( RTS
    ./main.cpp
    ./Game.cpp
    window/input/WindowEventHandler.cpp
    window/input/event/KeyboardEventHandler.cpp
    window/input/event/MouseEventHandler.cpp
    window/input/event/CloseEventHandler.cpp
    window/input/event/FocusEventHandler.cpp
    window/input/event/TouchEventHandler.cpp
    )

target_include_directories( RTS PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( RTS sfml-graphics sfml-audio pthread )