add_executable( RTS
    ./main.cpp
    ./Game.cpp
    window/event/handler/WindowEventManager.cpp

    logic/event/handler/input/UserInputMapper.cpp
    logic/event/handler/input/detail/KeyboardInputMapper.cpp
    logic/event/handler/input/detail/MouseInputMapper.cpp
    logic/event/handler/input/detail/CloseInputMapper.cpp
    logic/event/handler/input/detail/FocusInputMapper.cpp

#    // clickerthegame/Clicker.cpp
    )

target_include_directories( RTS PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( RTS sfml-graphics sfml-audio pthread )