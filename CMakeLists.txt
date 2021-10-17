cmake_minimum_required (VERSION 3.10)

#set the project name
project(Oust VERSION 1.0)

#use the CMAKE_CXX_STANDARD variable
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#export configuration to source code
configure_file(cmake/OustConfig.h.in OustConfig.h)

#about librairies
add_subdirectory(src/oust_lib)

#about executable
option(OUST_WITH_EXECUTABLES "Compile mains" OFF)
if(OUST_WITH_EXECUTABLES)
	message(STATUS "Configuring Oust with executables")
	add_subdirectory(mains)
endif()

#about tests
option(OUST_WITH_TESTS "Compile test projects" OFF)
if(OUST_WITH_TESTS)
	#enable testing with CTest
	enable_testing()
	message(STATUS "Configuring Oust with tests")
	add_subdirectory(tests)
endif()


