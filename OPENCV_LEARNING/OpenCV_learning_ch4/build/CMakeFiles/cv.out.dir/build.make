# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build"

# Include any dependencies generated for this target.
include CMakeFiles/cv.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cv.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cv.out.dir/flags.make

CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o: CMakeFiles/cv.out.dir/flags.make
CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o: ../Question_4_1abc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o -c "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/Question_4_1abc.cpp"

CMakeFiles/cv.out.dir/Question_4_1abc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cv.out.dir/Question_4_1abc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/Question_4_1abc.cpp" > CMakeFiles/cv.out.dir/Question_4_1abc.cpp.i

CMakeFiles/cv.out.dir/Question_4_1abc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cv.out.dir/Question_4_1abc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/Question_4_1abc.cpp" -o CMakeFiles/cv.out.dir/Question_4_1abc.cpp.s

CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.requires:

.PHONY : CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.requires

CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.provides: CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.requires
	$(MAKE) -f CMakeFiles/cv.out.dir/build.make CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.provides.build
.PHONY : CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.provides

CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.provides.build: CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o


# Object files for target cv.out
cv_out_OBJECTS = \
"CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o"

# External object files for target cv.out
cv_out_EXTERNAL_OBJECTS =

cv.out: CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o
cv.out: CMakeFiles/cv.out.dir/build.make
cv.out: /usr/local/lib/libopencv_dnn.so.4.0.0
cv.out: /usr/local/lib/libopencv_gapi.so.4.0.0
cv.out: /usr/local/lib/libopencv_ml.so.4.0.0
cv.out: /usr/local/lib/libopencv_objdetect.so.4.0.0
cv.out: /usr/local/lib/libopencv_photo.so.4.0.0
cv.out: /usr/local/lib/libopencv_stitching.so.4.0.0
cv.out: /usr/local/lib/libopencv_video.so.4.0.0
cv.out: /usr/local/lib/libopencv_calib3d.so.4.0.0
cv.out: /usr/local/lib/libopencv_features2d.so.4.0.0
cv.out: /usr/local/lib/libopencv_flann.so.4.0.0
cv.out: /usr/local/lib/libopencv_highgui.so.4.0.0
cv.out: /usr/local/lib/libopencv_videoio.so.4.0.0
cv.out: /usr/local/lib/libopencv_imgcodecs.so.4.0.0
cv.out: /usr/local/lib/libopencv_imgproc.so.4.0.0
cv.out: /usr/local/lib/libopencv_core.so.4.0.0
cv.out: CMakeFiles/cv.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cv.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cv.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cv.out.dir/build: cv.out

.PHONY : CMakeFiles/cv.out.dir/build

CMakeFiles/cv.out.dir/requires: CMakeFiles/cv.out.dir/Question_4_1abc.cpp.o.requires

.PHONY : CMakeFiles/cv.out.dir/requires

CMakeFiles/cv.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cv.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cv.out.dir/clean

CMakeFiles/cv.out.dir/depend:
	cd "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING" "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING" "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build" "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build" "/home/shawntao/Nutstore Files/我的坚果云/Backup_PC_win10/VMware_ubuntu/VSCODE/OPENCV_LEARNING/build/CMakeFiles/cv.out.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cv.out.dir/depend
