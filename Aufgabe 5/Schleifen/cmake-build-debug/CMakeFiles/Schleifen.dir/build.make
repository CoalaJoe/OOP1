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
CMAKE_SOURCE_DIR = "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Schleifen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Schleifen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Schleifen.dir/flags.make

CMakeFiles/Schleifen.dir/main.cpp.o: CMakeFiles/Schleifen.dir/flags.make
CMakeFiles/Schleifen.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Schleifen.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Schleifen.dir/main.cpp.o -c "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/main.cpp"

CMakeFiles/Schleifen.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Schleifen.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/main.cpp" > CMakeFiles/Schleifen.dir/main.cpp.i

CMakeFiles/Schleifen.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Schleifen.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/main.cpp" -o CMakeFiles/Schleifen.dir/main.cpp.s

CMakeFiles/Schleifen.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Schleifen.dir/main.cpp.o.requires

CMakeFiles/Schleifen.dir/main.cpp.o.provides: CMakeFiles/Schleifen.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Schleifen.dir/build.make CMakeFiles/Schleifen.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Schleifen.dir/main.cpp.o.provides

CMakeFiles/Schleifen.dir/main.cpp.o.provides.build: CMakeFiles/Schleifen.dir/main.cpp.o


# Object files for target Schleifen
Schleifen_OBJECTS = \
"CMakeFiles/Schleifen.dir/main.cpp.o"

# External object files for target Schleifen
Schleifen_EXTERNAL_OBJECTS =

Schleifen: CMakeFiles/Schleifen.dir/main.cpp.o
Schleifen: CMakeFiles/Schleifen.dir/build.make
Schleifen: CMakeFiles/Schleifen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Schleifen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Schleifen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Schleifen.dir/build: Schleifen

.PHONY : CMakeFiles/Schleifen.dir/build

CMakeFiles/Schleifen.dir/requires: CMakeFiles/Schleifen.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Schleifen.dir/requires

CMakeFiles/Schleifen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Schleifen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Schleifen.dir/clean

CMakeFiles/Schleifen.dir/depend:
	cd "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 5/Schleifen/cmake-build-debug/CMakeFiles/Schleifen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Schleifen.dir/depend

