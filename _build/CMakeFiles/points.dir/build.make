# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/beq/beq286/RK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/beq/beq286/RK/_build

# Include any dependencies generated for this target.
include CMakeFiles/points.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/points.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/points.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/points.dir/flags.make

CMakeFiles/points.dir/Points.cpp.o: CMakeFiles/points.dir/flags.make
CMakeFiles/points.dir/Points.cpp.o: ../Points.cpp
CMakeFiles/points.dir/Points.cpp.o: CMakeFiles/points.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/beq/beq286/RK/_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/points.dir/Points.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/points.dir/Points.cpp.o -MF CMakeFiles/points.dir/Points.cpp.o.d -o CMakeFiles/points.dir/Points.cpp.o -c /home/beq/beq286/RK/Points.cpp

CMakeFiles/points.dir/Points.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/points.dir/Points.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/beq/beq286/RK/Points.cpp > CMakeFiles/points.dir/Points.cpp.i

CMakeFiles/points.dir/Points.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/points.dir/Points.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/beq/beq286/RK/Points.cpp -o CMakeFiles/points.dir/Points.cpp.s

# Object files for target points
points_OBJECTS = \
"CMakeFiles/points.dir/Points.cpp.o"

# External object files for target points
points_EXTERNAL_OBJECTS =

libpoints.a: CMakeFiles/points.dir/Points.cpp.o
libpoints.a: CMakeFiles/points.dir/build.make
libpoints.a: CMakeFiles/points.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/beq/beq286/RK/_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libpoints.a"
	$(CMAKE_COMMAND) -P CMakeFiles/points.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/points.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/points.dir/build: libpoints.a
.PHONY : CMakeFiles/points.dir/build

CMakeFiles/points.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/points.dir/cmake_clean.cmake
.PHONY : CMakeFiles/points.dir/clean

CMakeFiles/points.dir/depend:
	cd /home/beq/beq286/RK/_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/beq/beq286/RK /home/beq/beq286/RK /home/beq/beq286/RK/_build /home/beq/beq286/RK/_build /home/beq/beq286/RK/_build/CMakeFiles/points.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/points.dir/depend

