# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alexander/project/src/rcomponent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexander/project/build/rcomponent

# Include any dependencies generated for this target.
include CMakeFiles/rcomponent.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rcomponent.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rcomponent.dir/flags.make

CMakeFiles/rcomponent.dir/src/rcomponent.cpp.o: CMakeFiles/rcomponent.dir/flags.make
CMakeFiles/rcomponent.dir/src/rcomponent.cpp.o: /home/alexander/project/src/rcomponent/src/rcomponent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexander/project/build/rcomponent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rcomponent.dir/src/rcomponent.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rcomponent.dir/src/rcomponent.cpp.o -c /home/alexander/project/src/rcomponent/src/rcomponent.cpp

CMakeFiles/rcomponent.dir/src/rcomponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rcomponent.dir/src/rcomponent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexander/project/src/rcomponent/src/rcomponent.cpp > CMakeFiles/rcomponent.dir/src/rcomponent.cpp.i

CMakeFiles/rcomponent.dir/src/rcomponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rcomponent.dir/src/rcomponent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexander/project/src/rcomponent/src/rcomponent.cpp -o CMakeFiles/rcomponent.dir/src/rcomponent.cpp.s

# Object files for target rcomponent
rcomponent_OBJECTS = \
"CMakeFiles/rcomponent.dir/src/rcomponent.cpp.o"

# External object files for target rcomponent
rcomponent_EXTERNAL_OBJECTS =

/home/alexander/project/devel/.private/rcomponent/lib/librcomponent.so: CMakeFiles/rcomponent.dir/src/rcomponent.cpp.o
/home/alexander/project/devel/.private/rcomponent/lib/librcomponent.so: CMakeFiles/rcomponent.dir/build.make
/home/alexander/project/devel/.private/rcomponent/lib/librcomponent.so: CMakeFiles/rcomponent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexander/project/build/rcomponent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/alexander/project/devel/.private/rcomponent/lib/librcomponent.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rcomponent.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rcomponent.dir/build: /home/alexander/project/devel/.private/rcomponent/lib/librcomponent.so

.PHONY : CMakeFiles/rcomponent.dir/build

CMakeFiles/rcomponent.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rcomponent.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rcomponent.dir/clean

CMakeFiles/rcomponent.dir/depend:
	cd /home/alexander/project/build/rcomponent && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexander/project/src/rcomponent /home/alexander/project/src/rcomponent /home/alexander/project/build/rcomponent /home/alexander/project/build/rcomponent /home/alexander/project/build/rcomponent/CMakeFiles/rcomponent.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rcomponent.dir/depend
