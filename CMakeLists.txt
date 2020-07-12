cmake_minimum_required(VERSION 3.15)
project(RTS)

set(CMAKE_CXX_STANDARD 14)

add_executable(RTS main.cpp src/interface/IUnit.hxx src/army/types/Soldier.cxx src/army/types/Soldier.hxx src/army/types/Archer.cxx src/army/types/Archer.hxx src/army/types/Knight.cxx src/army/types/Knight.hxx src/army/types/Commander.cxx src/army/types/Commander.hxx src/army/types/Pikeman.cxx src/army/types/Pikeman.hxx src/army/types/Engineer.cxx src/army/types/Engineer.hxx src/main/SimpleUnit.cxx src/main/SimpleUnit.hxx src/army/Human.cxx src/army/Human.hxx)