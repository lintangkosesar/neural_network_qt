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
CMAKE_SOURCE_DIR = /home/lintang/Coding/neural_network_qt/qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lintang/Coding/neural_network_qt/qt/build

# Include any dependencies generated for this target.
include CMakeFiles/QtNN.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/QtNN.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QtNN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QtNN.dir/flags.make

CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o: CMakeFiles/QtNN.dir/flags.make
CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o: QtNN_autogen/mocs_compilation.cpp
CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o: CMakeFiles/QtNN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lintang/Coding/neural_network_qt/qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o -c /home/lintang/Coding/neural_network_qt/qt/build/QtNN_autogen/mocs_compilation.cpp

CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lintang/Coding/neural_network_qt/qt/build/QtNN_autogen/mocs_compilation.cpp > CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.i

CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lintang/Coding/neural_network_qt/qt/build/QtNN_autogen/mocs_compilation.cpp -o CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.s

CMakeFiles/QtNN.dir/main.cpp.o: CMakeFiles/QtNN.dir/flags.make
CMakeFiles/QtNN.dir/main.cpp.o: ../main.cpp
CMakeFiles/QtNN.dir/main.cpp.o: CMakeFiles/QtNN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lintang/Coding/neural_network_qt/qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QtNN.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QtNN.dir/main.cpp.o -MF CMakeFiles/QtNN.dir/main.cpp.o.d -o CMakeFiles/QtNN.dir/main.cpp.o -c /home/lintang/Coding/neural_network_qt/qt/main.cpp

CMakeFiles/QtNN.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QtNN.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lintang/Coding/neural_network_qt/qt/main.cpp > CMakeFiles/QtNN.dir/main.cpp.i

CMakeFiles/QtNN.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QtNN.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lintang/Coding/neural_network_qt/qt/main.cpp -o CMakeFiles/QtNN.dir/main.cpp.s

CMakeFiles/QtNN.dir/mainwindow.cpp.o: CMakeFiles/QtNN.dir/flags.make
CMakeFiles/QtNN.dir/mainwindow.cpp.o: ../mainwindow.cpp
CMakeFiles/QtNN.dir/mainwindow.cpp.o: CMakeFiles/QtNN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lintang/Coding/neural_network_qt/qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/QtNN.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QtNN.dir/mainwindow.cpp.o -MF CMakeFiles/QtNN.dir/mainwindow.cpp.o.d -o CMakeFiles/QtNN.dir/mainwindow.cpp.o -c /home/lintang/Coding/neural_network_qt/qt/mainwindow.cpp

CMakeFiles/QtNN.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QtNN.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lintang/Coding/neural_network_qt/qt/mainwindow.cpp > CMakeFiles/QtNN.dir/mainwindow.cpp.i

CMakeFiles/QtNN.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QtNN.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lintang/Coding/neural_network_qt/qt/mainwindow.cpp -o CMakeFiles/QtNN.dir/mainwindow.cpp.s

# Object files for target QtNN
QtNN_OBJECTS = \
"CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/QtNN.dir/main.cpp.o" \
"CMakeFiles/QtNN.dir/mainwindow.cpp.o"

# External object files for target QtNN
QtNN_EXTERNAL_OBJECTS =

QtNN: CMakeFiles/QtNN.dir/QtNN_autogen/mocs_compilation.cpp.o
QtNN: CMakeFiles/QtNN.dir/main.cpp.o
QtNN: CMakeFiles/QtNN.dir/mainwindow.cpp.o
QtNN: CMakeFiles/QtNN.dir/build.make
QtNN: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
QtNN: ../../target/release/libneural_network.so
QtNN: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
QtNN: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
QtNN: CMakeFiles/QtNN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lintang/Coding/neural_network_qt/qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable QtNN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QtNN.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy /home/lintang/Coding/neural_network_qt/qt/../target/release/libneural_network.so /home/lintang/Coding/neural_network_qt/qt/build

# Rule to build all files generated by this target.
CMakeFiles/QtNN.dir/build: QtNN
.PHONY : CMakeFiles/QtNN.dir/build

CMakeFiles/QtNN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QtNN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QtNN.dir/clean

CMakeFiles/QtNN.dir/depend:
	cd /home/lintang/Coding/neural_network_qt/qt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lintang/Coding/neural_network_qt/qt /home/lintang/Coding/neural_network_qt/qt /home/lintang/Coding/neural_network_qt/qt/build /home/lintang/Coding/neural_network_qt/qt/build /home/lintang/Coding/neural_network_qt/qt/build/CMakeFiles/QtNN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QtNN.dir/depend

