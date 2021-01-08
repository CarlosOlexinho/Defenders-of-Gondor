add_executable(RTS
    ./main.cpp
    ./Game.cpp
    ./handler/EventHandler.cpp
    ./event/input/KeyboardEvent.cpp
    ./event/input/MouseEvent.cpp
    )

target_link_libraries(RTS sfml-graphics sfml-audio pthread)