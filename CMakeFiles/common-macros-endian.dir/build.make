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
include CMakeFiles/common-macros-endian.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/common-macros-endian.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/common-macros-endian.dir/flags.make

CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o: CMakeFiles/common-macros-endian.dir/flags.make
CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o: src/common-macros-endian.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ismael/Gits/common-macros-c/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o -c /home/ismael/Gits/common-macros-c/src/common-macros-endian.cpp

CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ismael/Gits/common-macros-c/src/common-macros-endian.cpp > CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.i

CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ismael/Gits/common-macros-c/src/common-macros-endian.cpp -o CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.s

CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.requires:
.PHONY : CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.requires

CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.provides: CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.requires
	$(MAKE) -f CMakeFiles/common-macros-endian.dir/build.make CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.provides.build
.PHONY : CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.provides

CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.provides.build: CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o

# Object files for target common-macros-endian
common__macros__endian_OBJECTS = \
"CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o"

# External object files for target common-macros-endian
common__macros__endian_EXTERNAL_OBJECTS =

bin/common-macros-endian: CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o
bin/common-macros-endian: CMakeFiles/common-macros-endian.dir/build.make
bin/common-macros-endian: CMakeFiles/common-macros-endian.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/common-macros-endian"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/common-macros-endian.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/common-macros-endian.dir/build: bin/common-macros-endian
.PHONY : CMakeFiles/common-macros-endian.dir/build

CMakeFiles/common-macros-endian.dir/requires: CMakeFiles/common-macros-endian.dir/src/common-macros-endian.cpp.o.requires
.PHONY : CMakeFiles/common-macros-endian.dir/requires

CMakeFiles/common-macros-endian.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/common-macros-endian.dir/cmake_clean.cmake
.PHONY : CMakeFiles/common-macros-endian.dir/clean

CMakeFiles/common-macros-endian.dir/depend:
	cd /home/ismael/Gits/common-macros-c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c /home/ismael/Gits/common-macros-c/CMakeFiles/common-macros-endian.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/common-macros-endian.dir/depend

