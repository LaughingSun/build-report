# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/ismael/Gits/common-macros-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ismael/Gits/common-macros-c

# Include any dependencies generated for this target.
include CMakeFiles/macros-common.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/macros-common.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/macros-common.dir/flags.make

CMakeFiles/macros-common.dir/src/macros-common.cpp.o: CMakeFiles/macros-common.dir/flags.make
CMakeFiles/macros-common.dir/src/macros-common.cpp.o: src/macros-common.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ismael/Gits/common-macros-c/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/macros-common.dir/src/macros-common.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/macros-common.dir/src/macros-common.cpp.o -c /home/ismael/Gits/common-macros-c/src/macros-common.cpp

CMakeFiles/macros-common.dir/src/macros-common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/macros-common.dir/src/macros-common.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ismael/Gits/common-macros-c/src/macros-common.cpp > CMakeFiles/macros-common.dir/src/macros-common.cpp.i

CMakeFiles/macros-common.dir/src/macros-common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/macros-common.dir/src/macros-common.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ismael/Gits/common-macros-c/src/macros-common.cpp -o CMakeFiles/macros-common.dir/src/macros-common.cpp.s

CMakeFiles/macros-common.dir/src/macros-common.cpp.o.requires:
.PHONY : CMakeFiles/macros-common.dir/src/macros-common.cpp.o.requires

CMakeFiles/macros-common.dir/src/macros-common.cpp.o.provides: CMakeFiles/macros-common.dir/src/macros-common.cpp.o.requires
	$(MAKE) -f CMakeFiles/macros-common.dir/build.make CMakeFiles/macros-common.dir/src/macros-common.cpp.o.provides.build
.PHONY : CMakeFiles/macros-common.dir/src/macros-common.cpp.o.provides

CMakeFiles/macros-common.dir/src/macros-common.cpp.o.provides.build: CMakeFiles/macros-common.dir/src/macros-common.cpp.o

# Object files for target macros-common
macros__common_OBJECTS = \
"CMakeFiles/macros-common.dir/src/macros-common.cpp.o"

# External object files for target macros-common
macros__common_EXTERNAL_OBJECTS =

bin/macros-common: CMakeFiles/macros-common.dir/src/macros-common.cpp.o
bin/macros-common: CMakeFiles/macros-common.dir/build.make
bin/macros-common: CMakeFiles/macros-common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/macros-common"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/macros-common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/macros-common.dir/build: bin/macros-common
.PHONY : CMakeFiles/macros-common.dir/build

CMakeFiles/macros-common.dir/requires: CMakeFiles/macros-common.dir/src/macros-common.cpp.o.requires
.PHONY : CMakeFiles/macros-common.dir/requires

CMakeFiles/macros-common.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/macros-common.dir/cmake_clean.cmake
.PHONY : CMakeFiles/macros-common.dir/clean

CMakeFiles/macros-common.dir/depend:
	cd /home/ismael/Gits/common-macros-c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c/CMakeFiles/macros-common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/macros-common.dir/depend

