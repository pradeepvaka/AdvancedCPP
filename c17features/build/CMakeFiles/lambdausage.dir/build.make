# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /workspaces/AdvancedCPP/c17features

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/AdvancedCPP/c17features/build

# Include any dependencies generated for this target.
include CMakeFiles/lambdausage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lambdausage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lambdausage.dir/flags.make

CMakeFiles/lambdausage.dir/lambdausage.cpp.o: CMakeFiles/lambdausage.dir/flags.make
CMakeFiles/lambdausage.dir/lambdausage.cpp.o: ../lambdausage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/AdvancedCPP/c17features/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lambdausage.dir/lambdausage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lambdausage.dir/lambdausage.cpp.o -c /workspaces/AdvancedCPP/c17features/lambdausage.cpp

CMakeFiles/lambdausage.dir/lambdausage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lambdausage.dir/lambdausage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/AdvancedCPP/c17features/lambdausage.cpp > CMakeFiles/lambdausage.dir/lambdausage.cpp.i

CMakeFiles/lambdausage.dir/lambdausage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lambdausage.dir/lambdausage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/AdvancedCPP/c17features/lambdausage.cpp -o CMakeFiles/lambdausage.dir/lambdausage.cpp.s

# Object files for target lambdausage
lambdausage_OBJECTS = \
"CMakeFiles/lambdausage.dir/lambdausage.cpp.o"

# External object files for target lambdausage
lambdausage_EXTERNAL_OBJECTS =

lambdausage: CMakeFiles/lambdausage.dir/lambdausage.cpp.o
lambdausage: CMakeFiles/lambdausage.dir/build.make
lambdausage: CMakeFiles/lambdausage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/AdvancedCPP/c17features/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lambdausage"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lambdausage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lambdausage.dir/build: lambdausage

.PHONY : CMakeFiles/lambdausage.dir/build

CMakeFiles/lambdausage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lambdausage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lambdausage.dir/clean

CMakeFiles/lambdausage.dir/depend:
	cd /workspaces/AdvancedCPP/c17features/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/AdvancedCPP/c17features /workspaces/AdvancedCPP/c17features /workspaces/AdvancedCPP/c17features/build /workspaces/AdvancedCPP/c17features/build /workspaces/AdvancedCPP/c17features/build/CMakeFiles/lambdausage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lambdausage.dir/depend

