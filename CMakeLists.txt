# $Id: CMakeLists.txt 86065 2014-11-07 08:51:15Z gcosmo $

#----------------------------------------------------------------------------
# Setup the project
#
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
project(SYLOSeBeam)

# Set debugger flag on
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0")

#----------------------------------------------------------------------------
# Find Geant4 package, activating all available UI and Vis drivers by default
# You can set WITH_GEANT4_UIVIS to OFF via the command line or ccmake/cmake-gui
# to build a batch mode only executable
#
option(WITH_GEANT4_UIVIS "Build example with Geant4 UI and Vis drivers" ON)
if(WITH_GEANT4_UIVIS)
  find_package(Geant4 REQUIRED ui_all vis_all)
else()
  find_package(Geant4 REQUIRED)
endif()
find_package(Eigen3 3.3 REQUIRED NO_MODULE)
# find_package(HDF5 REQUIRED COMPONENTS C CXX)
# 
# message(STATUS "HDF5 version: ${HDF5_VERSION}")
# message(STATUS "HDF5 include dir: ${HDF5_INCLUDE_DIRS}")
# message(STATUS "HDF5 CXX lib: ${HDF5_CXX_LIBRARIES}")

#----------------------------------------------------------------------------
# Setup Geant4 include directories and compile definitions
# Setup include directory for this project
#
include(${Geant4_USE_FILE})
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(/usr/local/include)
include_directories(/usr/include/eigen3)
# include_directories(${HDF5_INCLUDE_DIRS})

#----------------------------------------------------------------------------
# Locate sources and headers for this project
# NB: headers are included so they will show up in IDEs
#
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh)

#----------------------------------------------------------------------------
# Add the executable, and link it to the Geant4 libraries
#
add_executable(ebeam main.cc ${sources} ${headers})
target_link_libraries(ebeam ${Geant4_LIBRARIES})
# target_link_libraries(ebeam ${HDF5_LIBARIES})
# target_link_libraries(ebeam hdf5)
# target_link_libraries(ebeam hdf5_cpp)
target_link_libraries(ebeam Eigen3::Eigen)

#----------------------------------------------------------------------------
# Copy all scripts to the build directory, i.e. the directory in which we
# build B2a. This is so that we can run the executable directly because it
# relies on these scripts being in the current working directory.
#
set(EXAMPLEB2A_SCRIPTS
  macro/gui.mac
  macro/init.mac
  macro/init_vis.mac
  macro/vis.mac
  )

foreach(_script ${EXAMPLEB2A_SCRIPTS})
  configure_file(
    ${PROJECT_SOURCE_DIR}/${_script}
    ${PROJECT_BINARY_DIR}/${_script}
    COPYONLY
    )
endforeach()

#----------------------------------------------------------------------------
# Install the executable to 'bin' directory under CMAKE_INSTALL_PREFIX
#
  set(CMAKE_BUILD_TYPE Debug)
  set(CMAKE_BUILD_TYPE RelWithDebInfo)
  set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
#   set(CMAKE_CXX_STANDARD 11)
  install(TARGETS ebeam DESTINATION bin)

