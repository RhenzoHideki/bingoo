# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion-2019.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikei/CLionProjects/bingo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikei/CLionProjects/bingo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bingo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bingo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bingo.dir/flags.make

CMakeFiles/bingo.dir/main.c.o: CMakeFiles/bingo.dir/flags.make
CMakeFiles/bingo.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikei/CLionProjects/bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bingo.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bingo.dir/main.c.o   -c /home/mikei/CLionProjects/bingo/main.c

CMakeFiles/bingo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bingo.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mikei/CLionProjects/bingo/main.c > CMakeFiles/bingo.dir/main.c.i

CMakeFiles/bingo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bingo.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mikei/CLionProjects/bingo/main.c -o CMakeFiles/bingo.dir/main.c.s

# Object files for target bingo
bingo_OBJECTS = \
"CMakeFiles/bingo.dir/main.c.o"

# External object files for target bingo
bingo_EXTERNAL_OBJECTS =

bingo: CMakeFiles/bingo.dir/main.c.o
bingo: CMakeFiles/bingo.dir/build.make
bingo: CMakeFiles/bingo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikei/CLionProjects/bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bingo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bingo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bingo.dir/build: bingo

.PHONY : CMakeFiles/bingo.dir/build

CMakeFiles/bingo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bingo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bingo.dir/clean

CMakeFiles/bingo.dir/depend:
	cd /home/mikei/CLionProjects/bingo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikei/CLionProjects/bingo /home/mikei/CLionProjects/bingo /home/mikei/CLionProjects/bingo/cmake-build-debug /home/mikei/CLionProjects/bingo/cmake-build-debug /home/mikei/CLionProjects/bingo/cmake-build-debug/CMakeFiles/bingo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bingo.dir/depend

