# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Fabio-Note\CLionProjects\Programa-imperativa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\c.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\c.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\c.dir\flags.make

CMakeFiles\c.dir\cpf\cpf.c.obj: CMakeFiles\c.dir\flags.make
CMakeFiles\c.dir\cpf\cpf.c.obj: ..\cpf\cpf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c.dir/cpf/cpf.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\c.dir\cpf\cpf.c.obj /FdCMakeFiles\c.dir\ /FS -c C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cpf\cpf.c
<<

CMakeFiles\c.dir\cpf\cpf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/cpf/cpf.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\c.dir\cpf\cpf.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cpf\cpf.c
<<

CMakeFiles\c.dir\cpf\cpf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/cpf/cpf.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\c.dir\cpf\cpf.c.s /c C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cpf\cpf.c
<<

# Object files for target c
c_OBJECTS = \
"CMakeFiles\c.dir\cpf\cpf.c.obj"

# External object files for target c
c_EXTERNAL_OBJECTS =

c.exe: CMakeFiles\c.dir\cpf\cpf.c.obj
c.exe: CMakeFiles\c.dir\build.make
c.exe: CMakeFiles\c.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c.exe"
	"C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\c.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\c.dir\objects1.rsp @<<
 /out:c.exe /implib:c.lib /pdb:C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug\c.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\c.dir\build: c.exe

.PHONY : CMakeFiles\c.dir\build

CMakeFiles\c.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c.dir\cmake_clean.cmake
.PHONY : CMakeFiles\c.dir\clean

CMakeFiles\c.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Fabio-Note\CLionProjects\Programa-imperativa C:\Users\Fabio-Note\CLionProjects\Programa-imperativa C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug C:\Users\Fabio-Note\CLionProjects\Programa-imperativa\cmake-build-debug\CMakeFiles\c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\c.dir\depend

