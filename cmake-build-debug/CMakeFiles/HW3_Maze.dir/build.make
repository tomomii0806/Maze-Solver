# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Tomomi/CLionProjects/CSS342/Maze Solver"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/HW3_Maze.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW3_Maze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW3_Maze.dir/flags.make

CMakeFiles/HW3_Maze.dir/main.cpp.o: CMakeFiles/HW3_Maze.dir/flags.make
CMakeFiles/HW3_Maze.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW3_Maze.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW3_Maze.dir/main.cpp.o -c "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/main.cpp"

CMakeFiles/HW3_Maze.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW3_Maze.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/main.cpp" > CMakeFiles/HW3_Maze.dir/main.cpp.i

CMakeFiles/HW3_Maze.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW3_Maze.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/main.cpp" -o CMakeFiles/HW3_Maze.dir/main.cpp.s

CMakeFiles/HW3_Maze.dir/maze.cpp.o: CMakeFiles/HW3_Maze.dir/flags.make
CMakeFiles/HW3_Maze.dir/maze.cpp.o: ../maze.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW3_Maze.dir/maze.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW3_Maze.dir/maze.cpp.o -c "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/maze.cpp"

CMakeFiles/HW3_Maze.dir/maze.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW3_Maze.dir/maze.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/maze.cpp" > CMakeFiles/HW3_Maze.dir/maze.cpp.i

CMakeFiles/HW3_Maze.dir/maze.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW3_Maze.dir/maze.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/maze.cpp" -o CMakeFiles/HW3_Maze.dir/maze.cpp.s

CMakeFiles/HW3_Maze.dir/creature.cpp.o: CMakeFiles/HW3_Maze.dir/flags.make
CMakeFiles/HW3_Maze.dir/creature.cpp.o: ../creature.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HW3_Maze.dir/creature.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW3_Maze.dir/creature.cpp.o -c "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/creature.cpp"

CMakeFiles/HW3_Maze.dir/creature.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW3_Maze.dir/creature.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/creature.cpp" > CMakeFiles/HW3_Maze.dir/creature.cpp.i

CMakeFiles/HW3_Maze.dir/creature.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW3_Maze.dir/creature.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/creature.cpp" -o CMakeFiles/HW3_Maze.dir/creature.cpp.s

# Object files for target HW3_Maze
HW3_Maze_OBJECTS = \
"CMakeFiles/HW3_Maze.dir/main.cpp.o" \
"CMakeFiles/HW3_Maze.dir/maze.cpp.o" \
"CMakeFiles/HW3_Maze.dir/creature.cpp.o"

# External object files for target HW3_Maze
HW3_Maze_EXTERNAL_OBJECTS =

HW3_Maze: CMakeFiles/HW3_Maze.dir/main.cpp.o
HW3_Maze: CMakeFiles/HW3_Maze.dir/maze.cpp.o
HW3_Maze: CMakeFiles/HW3_Maze.dir/creature.cpp.o
HW3_Maze: CMakeFiles/HW3_Maze.dir/build.make
HW3_Maze: CMakeFiles/HW3_Maze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable HW3_Maze"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW3_Maze.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW3_Maze.dir/build: HW3_Maze

.PHONY : CMakeFiles/HW3_Maze.dir/build

CMakeFiles/HW3_Maze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW3_Maze.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW3_Maze.dir/clean

CMakeFiles/HW3_Maze.dir/depend:
	cd "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Tomomi/CLionProjects/CSS342/Maze Solver" "/Users/Tomomi/CLionProjects/CSS342/Maze Solver" "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug" "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug" "/Users/Tomomi/CLionProjects/CSS342/Maze Solver/cmake-build-debug/CMakeFiles/HW3_Maze.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HW3_Maze.dir/depend
