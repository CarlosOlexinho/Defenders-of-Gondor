# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programowanie\CLion\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programowanie\CLion\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lenovo\CLionProjects\RTS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RTS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RTS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RTS.dir/flags.make

CMakeFiles/RTS.dir/main.cpp.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RTS.dir/main.cpp.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\main.cpp.obj -c C:\Users\lenovo\CLionProjects\RTS\main.cpp

CMakeFiles/RTS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/main.cpp.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\main.cpp > CMakeFiles\RTS.dir\main.cpp.i

CMakeFiles/RTS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/main.cpp.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\main.cpp -o CMakeFiles\RTS.dir\main.cpp.s

CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.obj: ../src/army/types/Soldier.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\types\Soldier.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\types\Soldier.cxx

CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\types\Soldier.cxx > CMakeFiles\RTS.dir\src\army\types\Soldier.cxx.i

CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\types\Soldier.cxx -o CMakeFiles\RTS.dir\src\army\types\Soldier.cxx.s

CMakeFiles/RTS.dir/src/army/types/Archer.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/types/Archer.cxx.obj: ../src/army/types/Archer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RTS.dir/src/army/types/Archer.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\types\Archer.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\types\Archer.cxx

CMakeFiles/RTS.dir/src/army/types/Archer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/types/Archer.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\types\Archer.cxx > CMakeFiles\RTS.dir\src\army\types\Archer.cxx.i

CMakeFiles/RTS.dir/src/army/types/Archer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/types/Archer.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\types\Archer.cxx -o CMakeFiles\RTS.dir\src\army\types\Archer.cxx.s

CMakeFiles/RTS.dir/src/army/types/Knight.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/types/Knight.cxx.obj: ../src/army/types/Knight.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RTS.dir/src/army/types/Knight.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\types\Knight.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\types\Knight.cxx

CMakeFiles/RTS.dir/src/army/types/Knight.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/types/Knight.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\types\Knight.cxx > CMakeFiles\RTS.dir\src\army\types\Knight.cxx.i

CMakeFiles/RTS.dir/src/army/types/Knight.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/types/Knight.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\types\Knight.cxx -o CMakeFiles\RTS.dir\src\army\types\Knight.cxx.s

CMakeFiles/RTS.dir/src/army/types/Commander.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/types/Commander.cxx.obj: ../src/army/types/Commander.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RTS.dir/src/army/types/Commander.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\types\Commander.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\types\Commander.cxx

CMakeFiles/RTS.dir/src/army/types/Commander.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/types/Commander.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\types\Commander.cxx > CMakeFiles\RTS.dir\src\army\types\Commander.cxx.i

CMakeFiles/RTS.dir/src/army/types/Commander.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/types/Commander.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\types\Commander.cxx -o CMakeFiles\RTS.dir\src\army\types\Commander.cxx.s

CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.obj: ../src/army/types/Pikeman.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\types\Pikeman.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\types\Pikeman.cxx

CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\types\Pikeman.cxx > CMakeFiles\RTS.dir\src\army\types\Pikeman.cxx.i

CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\types\Pikeman.cxx -o CMakeFiles\RTS.dir\src\army\types\Pikeman.cxx.s

CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.obj: ../src/army/types/Engineer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\types\Engineer.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\types\Engineer.cxx

CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\types\Engineer.cxx > CMakeFiles\RTS.dir\src\army\types\Engineer.cxx.i

CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\types\Engineer.cxx -o CMakeFiles\RTS.dir\src\army\types\Engineer.cxx.s

CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.obj: ../src/main/SimpleUnit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\main\SimpleUnit.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\main\SimpleUnit.cxx

CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\main\SimpleUnit.cxx > CMakeFiles\RTS.dir\src\main\SimpleUnit.cxx.i

CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\main\SimpleUnit.cxx -o CMakeFiles\RTS.dir\src\main\SimpleUnit.cxx.s

CMakeFiles/RTS.dir/src/army/Human.cxx.obj: CMakeFiles/RTS.dir/flags.make
CMakeFiles/RTS.dir/src/army/Human.cxx.obj: ../src/army/Human.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/RTS.dir/src/army/Human.cxx.obj"
	D:\Programy\msys-64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RTS.dir\src\army\Human.cxx.obj -c C:\Users\lenovo\CLionProjects\RTS\src\army\Human.cxx

CMakeFiles/RTS.dir/src/army/Human.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTS.dir/src/army/Human.cxx.i"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo\CLionProjects\RTS\src\army\Human.cxx > CMakeFiles\RTS.dir\src\army\Human.cxx.i

CMakeFiles/RTS.dir/src/army/Human.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTS.dir/src/army/Human.cxx.s"
	D:\Programy\msys-64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo\CLionProjects\RTS\src\army\Human.cxx -o CMakeFiles\RTS.dir\src\army\Human.cxx.s

# Object files for target RTS
RTS_OBJECTS = \
"CMakeFiles/RTS.dir/main.cpp.obj" \
"CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.obj" \
"CMakeFiles/RTS.dir/src/army/types/Archer.cxx.obj" \
"CMakeFiles/RTS.dir/src/army/types/Knight.cxx.obj" \
"CMakeFiles/RTS.dir/src/army/types/Commander.cxx.obj" \
"CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.obj" \
"CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.obj" \
"CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.obj" \
"CMakeFiles/RTS.dir/src/army/Human.cxx.obj"

# External object files for target RTS
RTS_EXTERNAL_OBJECTS =

RTS.exe: CMakeFiles/RTS.dir/main.cpp.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/types/Soldier.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/types/Archer.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/types/Knight.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/types/Commander.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/types/Pikeman.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/types/Engineer.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/main/SimpleUnit.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/src/army/Human.cxx.obj
RTS.exe: CMakeFiles/RTS.dir/build.make
RTS.exe: CMakeFiles/RTS.dir/linklibs.rsp
RTS.exe: CMakeFiles/RTS.dir/objects1.rsp
RTS.exe: CMakeFiles/RTS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable RTS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RTS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RTS.dir/build: RTS.exe

.PHONY : CMakeFiles/RTS.dir/build

CMakeFiles/RTS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RTS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RTS.dir/clean

CMakeFiles/RTS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lenovo\CLionProjects\RTS C:\Users\lenovo\CLionProjects\RTS C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug C:\Users\lenovo\CLionProjects\RTS\cmake-build-debug\CMakeFiles\RTS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RTS.dir/depend

