# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/dawid/Projects/C_C++/CppFreeCoding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dawid/Projects/C_C++/CppFreeCoding

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/dawid/Projects/C_C++/CppFreeCoding/CMakeFiles /home/dawid/Projects/C_C++/CppFreeCoding/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/dawid/Projects/C_C++/CppFreeCoding/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named CPPFreeCoding

# Build rule for target.
CPPFreeCoding: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 CPPFreeCoding
.PHONY : CPPFreeCoding

# fast build rule for target.
CPPFreeCoding/fast:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/build
.PHONY : CPPFreeCoding/fast

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/main.cpp.s
.PHONY : main.cpp.s

src/functions.o: src/functions.cpp.o

.PHONY : src/functions.o

# target to build an object file
src/functions.cpp.o:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/functions.cpp.o
.PHONY : src/functions.cpp.o

src/functions.i: src/functions.cpp.i

.PHONY : src/functions.i

# target to preprocess a source file
src/functions.cpp.i:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/functions.cpp.i
.PHONY : src/functions.cpp.i

src/functions.s: src/functions.cpp.s

.PHONY : src/functions.s

# target to generate assembly for a file
src/functions.cpp.s:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/functions.cpp.s
.PHONY : src/functions.cpp.s

src/myUniquePtr.o: src/myUniquePtr.cpp.o

.PHONY : src/myUniquePtr.o

# target to build an object file
src/myUniquePtr.cpp.o:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/myUniquePtr.cpp.o
.PHONY : src/myUniquePtr.cpp.o

src/myUniquePtr.i: src/myUniquePtr.cpp.i

.PHONY : src/myUniquePtr.i

# target to preprocess a source file
src/myUniquePtr.cpp.i:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/myUniquePtr.cpp.i
.PHONY : src/myUniquePtr.cpp.i

src/myUniquePtr.s: src/myUniquePtr.cpp.s

.PHONY : src/myUniquePtr.s

# target to generate assembly for a file
src/myUniquePtr.cpp.s:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/myUniquePtr.cpp.s
.PHONY : src/myUniquePtr.cpp.s

src/tasks.o: src/tasks.cpp.o

.PHONY : src/tasks.o

# target to build an object file
src/tasks.cpp.o:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/tasks.cpp.o
.PHONY : src/tasks.cpp.o

src/tasks.i: src/tasks.cpp.i

.PHONY : src/tasks.i

# target to preprocess a source file
src/tasks.cpp.i:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/tasks.cpp.i
.PHONY : src/tasks.cpp.i

src/tasks.s: src/tasks.cpp.s

.PHONY : src/tasks.s

# target to generate assembly for a file
src/tasks.cpp.s:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/src/tasks.cpp.s
.PHONY : src/tasks.cpp.s

tests/test.o: tests/test.cpp.o

.PHONY : tests/test.o

# target to build an object file
tests/test.cpp.o:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/tests/test.cpp.o
.PHONY : tests/test.cpp.o

tests/test.i: tests/test.cpp.i

.PHONY : tests/test.i

# target to preprocess a source file
tests/test.cpp.i:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/tests/test.cpp.i
.PHONY : tests/test.cpp.i

tests/test.s: tests/test.cpp.s

.PHONY : tests/test.s

# target to generate assembly for a file
tests/test.cpp.s:
	$(MAKE) -f CMakeFiles/CPPFreeCoding.dir/build.make CMakeFiles/CPPFreeCoding.dir/tests/test.cpp.s
.PHONY : tests/test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... CPPFreeCoding"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... src/functions.o"
	@echo "... src/functions.i"
	@echo "... src/functions.s"
	@echo "... src/myUniquePtr.o"
	@echo "... src/myUniquePtr.i"
	@echo "... src/myUniquePtr.s"
	@echo "... src/tasks.o"
	@echo "... src/tasks.i"
	@echo "... src/tasks.s"
	@echo "... tests/test.o"
	@echo "... tests/test.i"
	@echo "... tests/test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

