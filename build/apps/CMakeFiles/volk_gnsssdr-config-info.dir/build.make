# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andres/github/volk_gnsssdr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andres/github/volk_gnsssdr/build

# Include any dependencies generated for this target.
include apps/CMakeFiles/volk_gnsssdr-config-info.dir/depend.make

# Include the progress variables for this target.
include apps/CMakeFiles/volk_gnsssdr-config-info.dir/progress.make

# Include the compile flags for this target's objects.
include apps/CMakeFiles/volk_gnsssdr-config-info.dir/flags.make

apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o: apps/CMakeFiles/volk_gnsssdr-config-info.dir/flags.make
apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o: ../apps/volk_gnsssdr-config-info.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/andres/github/volk_gnsssdr/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o"
	cd /Users/andres/github/volk_gnsssdr/build/apps && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o -c /Users/andres/github/volk_gnsssdr/apps/volk_gnsssdr-config-info.cc

apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.i"
	cd /Users/andres/github/volk_gnsssdr/build/apps && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/andres/github/volk_gnsssdr/apps/volk_gnsssdr-config-info.cc > CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.i

apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.s"
	cd /Users/andres/github/volk_gnsssdr/build/apps && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/andres/github/volk_gnsssdr/apps/volk_gnsssdr-config-info.cc -o CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.s

apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.requires:
.PHONY : apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.requires

apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.provides: apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.requires
	$(MAKE) -f apps/CMakeFiles/volk_gnsssdr-config-info.dir/build.make apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.provides.build
.PHONY : apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.provides

apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.provides.build: apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o

# Object files for target volk_gnsssdr-config-info
volk_gnsssdr__config__info_OBJECTS = \
"CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o"

# External object files for target volk_gnsssdr-config-info
volk_gnsssdr__config__info_EXTERNAL_OBJECTS =

apps/volk_gnsssdr-config-info: apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o
apps/volk_gnsssdr-config-info: apps/CMakeFiles/volk_gnsssdr-config-info.dir/build.make
apps/volk_gnsssdr-config-info: lib/libvolk_gnsssdr.0.0.0.dylib
apps/volk_gnsssdr-config-info: /opt/local/lib/libboost_filesystem-mt.dylib
apps/volk_gnsssdr-config-info: /opt/local/lib/libboost_system-mt.dylib
apps/volk_gnsssdr-config-info: /opt/local/lib/libboost_unit_test_framework-mt.dylib
apps/volk_gnsssdr-config-info: /opt/local/lib/libboost_program_options-mt.dylib
apps/volk_gnsssdr-config-info: /opt/local/lib/liborc-0.4.dylib
apps/volk_gnsssdr-config-info: apps/CMakeFiles/volk_gnsssdr-config-info.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable volk_gnsssdr-config-info"
	cd /Users/andres/github/volk_gnsssdr/build/apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/volk_gnsssdr-config-info.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/CMakeFiles/volk_gnsssdr-config-info.dir/build: apps/volk_gnsssdr-config-info
.PHONY : apps/CMakeFiles/volk_gnsssdr-config-info.dir/build

apps/CMakeFiles/volk_gnsssdr-config-info.dir/requires: apps/CMakeFiles/volk_gnsssdr-config-info.dir/volk_gnsssdr-config-info.cc.o.requires
.PHONY : apps/CMakeFiles/volk_gnsssdr-config-info.dir/requires

apps/CMakeFiles/volk_gnsssdr-config-info.dir/clean:
	cd /Users/andres/github/volk_gnsssdr/build/apps && $(CMAKE_COMMAND) -P CMakeFiles/volk_gnsssdr-config-info.dir/cmake_clean.cmake
.PHONY : apps/CMakeFiles/volk_gnsssdr-config-info.dir/clean

apps/CMakeFiles/volk_gnsssdr-config-info.dir/depend:
	cd /Users/andres/github/volk_gnsssdr/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andres/github/volk_gnsssdr /Users/andres/github/volk_gnsssdr/apps /Users/andres/github/volk_gnsssdr/build /Users/andres/github/volk_gnsssdr/build/apps /Users/andres/github/volk_gnsssdr/build/apps/CMakeFiles/volk_gnsssdr-config-info.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/CMakeFiles/volk_gnsssdr-config-info.dir/depend

