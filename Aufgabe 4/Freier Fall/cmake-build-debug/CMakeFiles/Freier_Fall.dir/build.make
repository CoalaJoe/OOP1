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
CMAKE_SOURCE_DIR = "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Freier_Fall.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Freier_Fall.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Freier_Fall.dir/flags.make

CMakeFiles/Freier_Fall.dir/main.cpp.o: CMakeFiles/Freier_Fall.dir/flags.make
CMakeFiles/Freier_Fall.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Freier_Fall.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Freier_Fall.dir/main.cpp.o -c "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/main.cpp"

CMakeFiles/Freier_Fall.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Freier_Fall.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/main.cpp" > CMakeFiles/Freier_Fall.dir/main.cpp.i

CMakeFiles/Freier_Fall.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Freier_Fall.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/main.cpp" -o CMakeFiles/Freier_Fall.dir/main.cpp.s

CMakeFiles/Freier_Fall.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Freier_Fall.dir/main.cpp.o.requires

CMakeFiles/Freier_Fall.dir/main.cpp.o.provides: CMakeFiles/Freier_Fall.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Freier_Fall.dir/build.make CMakeFiles/Freier_Fall.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Freier_Fall.dir/main.cpp.o.provides

CMakeFiles/Freier_Fall.dir/main.cpp.o.provides.build: CMakeFiles/Freier_Fall.dir/main.cpp.o


# Object files for target Freier_Fall
Freier_Fall_OBJECTS = \
"CMakeFiles/Freier_Fall.dir/main.cpp.o"

# External object files for target Freier_Fall
Freier_Fall_EXTERNAL_OBJECTS =

Freier_Fall: CMakeFiles/Freier_Fall.dir/main.cpp.o
Freier_Fall: CMakeFiles/Freier_Fall.dir/build.make
Freier_Fall: CMakeFiles/Freier_Fall.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Freier_Fall"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Freier_Fall.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Freier_Fall.dir/build: Freier_Fall

.PHONY : CMakeFiles/Freier_Fall.dir/build

CMakeFiles/Freier_Fall.dir/requires: CMakeFiles/Freier_Fall.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Freier_Fall.dir/requires

CMakeFiles/Freier_Fall.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Freier_Fall.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Freier_Fall.dir/clean

CMakeFiles/Freier_Fall.dir/depend:
	cd "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug" "/Users/ashura/Documents/Projects/HF-ICT/OOP1/Aufgabe 4/Freier Fall/cmake-build-debug/CMakeFiles/Freier_Fall.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Freier_Fall.dir/depend
