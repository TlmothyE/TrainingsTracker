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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tim/team-4/Code/Server/API_Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tim/team-4/Code/Server/API_Code

# Include any dependencies generated for this target.
include CMakeFiles/API_Code.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/API_Code.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/API_Code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/API_Code.dir/flags.make

CMakeFiles/API_Code.dir/source/main.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/main.cpp.o: source/main.cpp
CMakeFiles/API_Code.dir/source/main.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/API_Code.dir/source/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/main.cpp.o -MF CMakeFiles/API_Code.dir/source/main.cpp.o.d -o CMakeFiles/API_Code.dir/source/main.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/main.cpp

CMakeFiles/API_Code.dir/source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/main.cpp > CMakeFiles/API_Code.dir/source/main.cpp.i

CMakeFiles/API_Code.dir/source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/main.cpp -o CMakeFiles/API_Code.dir/source/main.cpp.s

CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o: source/controller/request/RequestController.cpp
CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/request/RequestController.cpp

CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/request/RequestController.cpp > CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.i

CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/request/RequestController.cpp -o CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.s

CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o: source/foundation/network_utils.cpp
CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o -MF CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o.d -o CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/foundation/network_utils.cpp

CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/foundation/network_utils.cpp > CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.i

CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/foundation/network_utils.cpp -o CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.s

CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o: source/foundation/basic_controller.cpp
CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o -MF CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o.d -o CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/foundation/basic_controller.cpp

CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/foundation/basic_controller.cpp > CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.i

CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/foundation/basic_controller.cpp -o CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.s

CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o: source/controller/request/APIBasicController.cpp
CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/request/APIBasicController.cpp

CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/request/APIBasicController.cpp > CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.i

CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/request/APIBasicController.cpp -o CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.s

CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o: source/controller/request/UsersRequestController.cpp
CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/request/UsersRequestController.cpp

CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/request/UsersRequestController.cpp > CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.i

CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/request/UsersRequestController.cpp -o CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.s

CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o: source/controller/database/DBConnector.cpp
CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/database/DBConnector.cpp

CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/database/DBConnector.cpp > CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.i

CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/database/DBConnector.cpp -o CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.s

CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o: source/controller/database/UsersDBController.cpp
CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/database/UsersDBController.cpp

CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/database/UsersDBController.cpp > CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.i

CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/database/UsersDBController.cpp -o CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.s

CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o: source/controller/database/WorkoutroutineDBController.cpp
CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/database/WorkoutroutineDBController.cpp

CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/database/WorkoutroutineDBController.cpp > CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.i

CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/database/WorkoutroutineDBController.cpp -o CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.s

CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o: source/controller/database/TableCreator.cpp
CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/database/TableCreator.cpp

CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/database/TableCreator.cpp > CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.i

CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/database/TableCreator.cpp -o CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.s

CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o: source/controller/request/WorkoutroutineRequestController.cpp
CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/request/WorkoutroutineRequestController.cpp

CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/request/WorkoutroutineRequestController.cpp > CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.i

CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/request/WorkoutroutineRequestController.cpp -o CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.s

CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o: source/controller/request/ProductRequestController.cpp
CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/request/ProductRequestController.cpp

CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/request/ProductRequestController.cpp > CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.i

CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/request/ProductRequestController.cpp -o CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.s

CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o: CMakeFiles/API_Code.dir/flags.make
CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o: source/controller/database/ProductDBController.cpp
CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o: CMakeFiles/API_Code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o -MF CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o.d -o CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o -c /home/tim/team-4/Code/Server/API_Code/source/controller/database/ProductDBController.cpp

CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/team-4/Code/Server/API_Code/source/controller/database/ProductDBController.cpp > CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.i

CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/team-4/Code/Server/API_Code/source/controller/database/ProductDBController.cpp -o CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.s

# Object files for target API_Code
API_Code_OBJECTS = \
"CMakeFiles/API_Code.dir/source/main.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o" \
"CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o" \
"CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o" \
"CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o"

# External object files for target API_Code
API_Code_EXTERNAL_OBJECTS =

API_Code: CMakeFiles/API_Code.dir/source/main.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/request/RequestController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/foundation/network_utils.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/foundation/basic_controller.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/request/APIBasicController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/request/UsersRequestController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/database/DBConnector.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/database/UsersDBController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/database/WorkoutroutineDBController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/database/TableCreator.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/request/WorkoutroutineRequestController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/request/ProductRequestController.cpp.o
API_Code: CMakeFiles/API_Code.dir/source/controller/database/ProductDBController.cpp.o
API_Code: CMakeFiles/API_Code.dir/build.make
API_Code: libs/cpprestsdk/build.release/Release/Binaries/libcpprest.a
API_Code: /usr/lib/x86_64-linux-gnu/libssl.so
API_Code: /usr/lib/x86_64-linux-gnu/libcrypto.so
API_Code: /usr/lib/x86_64-linux-gnu/libz.so
API_Code: CMakeFiles/API_Code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tim/team-4/Code/Server/API_Code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable API_Code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/API_Code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/API_Code.dir/build: API_Code
.PHONY : CMakeFiles/API_Code.dir/build

CMakeFiles/API_Code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/API_Code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/API_Code.dir/clean

CMakeFiles/API_Code.dir/depend:
	cd /home/tim/team-4/Code/Server/API_Code && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tim/team-4/Code/Server/API_Code /home/tim/team-4/Code/Server/API_Code /home/tim/team-4/Code/Server/API_Code /home/tim/team-4/Code/Server/API_Code /home/tim/team-4/Code/Server/API_Code/CMakeFiles/API_Code.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/API_Code.dir/depend

