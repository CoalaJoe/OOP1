# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "/Users/ashura/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/ashura/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Muster.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Muster.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Muster.dir/flags.make

CMakeFiles/Muster.dir/main.cpp.o: CMakeFiles/Muster.dir/flags.make
CMakeFiles/Muster.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Muster.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Muster.dir/main.cpp.o -c "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/main.cpp"

CMakeFiles/Muster.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Muster.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/main.cpp" > CMakeFiles/Muster.dir/main.cpp.i

CMakeFiles/Muster.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Muster.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/main.cpp" -o CMakeFiles/Muster.dir/main.cpp.s

CMakeFiles/Muster.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Muster.dir/main.cpp.o.requires

CMakeFiles/Muster.dir/main.cpp.o.provides: CMakeFiles/Muster.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Muster.dir/build.make CMakeFiles/Muster.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Muster.dir/main.cpp.o.provides

CMakeFiles/Muster.dir/main.cpp.o.provides.build: CMakeFiles/Muster.dir/main.cpp.o


# Object files for target Muster
Muster_OBJECTS = \
"CMakeFiles/Muster.dir/main.cpp.o"

# External object files for target Muster
Muster_EXTERNAL_OBJECTS =

Muster: CMakeFiles/Muster.dir/main.cpp.o
Muster: CMakeFiles/Muster.dir/build.make
Muster: CMakeFiles/Muster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Muster"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Muster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Muster.dir/build: Muster

.PHONY : CMakeFiles/Muster.dir/build

CMakeFiles/Muster.dir/requires: CMakeFiles/Muster.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Muster.dir/requires

CMakeFiles/Muster.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Muster.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Muster.dir/clean

CMakeFiles/Muster.dir/depend:
	cd "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 7/Muster/cmake-build-debug/CMakeFiles/Muster.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Muster.dir/depend

