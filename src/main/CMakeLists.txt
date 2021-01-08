add_executable( RTS
    ./main.cpp
    ./Game.cpp
    ./handler/EventHandler.cpp
    ./handler/event/input/KeyboardEventHandler.cpp
    ./handler/event/input/MouseEventHandler.cpp
    )

target_include_directories( RTS PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( RTS sfml-graphics sfml-audio pthread )