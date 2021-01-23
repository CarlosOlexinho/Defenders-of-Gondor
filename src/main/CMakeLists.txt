add_executable( RTS
    ./main.cpp
    ./Game.cpp
    window/event/handler/WindowEventManager.cpp
    window/event/handler/input/KeyboardEventHandler.cpp
    window/event/handler/input/MouseEventHandler.cpp
    window/event/handler/input/CloseEventHandler.cpp
    window/event/handler/input/FocusEventHandler.cpp
    window/event/handler/input/TouchEventHandler.cpp
    logic/event/handler/input/UserInputMapper.cpp
    logic/event/handler/input/detail/KeyboardInputMapper.cpp
    logic/event/handler/input/detail/MouseInputMapper.cpp
    logic/event/handler/input/detail/CloseInputMapper.cpp
    )

target_include_directories( RTS PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( RTS sfml-graphics sfml-audio pthread )