# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLionProject\SapiSales

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionProject\SapiSales\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SapiSales.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SapiSales.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SapiSales.dir/flags.make

CMakeFiles/SapiSales.dir/main.c.obj: CMakeFiles/SapiSales.dir/flags.make
CMakeFiles/SapiSales.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\SapiSales\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SapiSales.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SapiSales.dir\main.c.obj -c D:\CLionProject\SapiSales\main.c

CMakeFiles/SapiSales.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SapiSales.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\SapiSales\main.c > CMakeFiles\SapiSales.dir\main.c.i

CMakeFiles/SapiSales.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SapiSales.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\SapiSales\main.c -o CMakeFiles\SapiSales.dir\main.c.s

# Object files for target SapiSales
SapiSales_OBJECTS = \
"CMakeFiles/SapiSales.dir/main.c.obj"

# External object files for target SapiSales
SapiSales_EXTERNAL_OBJECTS =

SapiSales.exe: CMakeFiles/SapiSales.dir/main.c.obj
SapiSales.exe: CMakeFiles/SapiSales.dir/build.make
SapiSales.exe: CMakeFiles/SapiSales.dir/linklibs.rsp
SapiSales.exe: CMakeFiles/SapiSales.dir/objects1.rsp
SapiSales.exe: CMakeFiles/SapiSales.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\SapiSales\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SapiSales.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SapiSales.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SapiSales.dir/build: SapiSales.exe
.PHONY : CMakeFiles/SapiSales.dir/build

CMakeFiles/SapiSales.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SapiSales.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SapiSales.dir/clean

CMakeFiles/SapiSales.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\SapiSales D:\CLionProject\SapiSales D:\CLionProject\SapiSales\cmake-build-debug D:\CLionProject\SapiSales\cmake-build-debug D:\CLionProject\SapiSales\cmake-build-debug\CMakeFiles\SapiSales.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SapiSales.dir/depend

