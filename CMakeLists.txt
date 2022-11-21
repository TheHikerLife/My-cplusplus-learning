cmake_minimum_required(VERSION 3.7)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(
        ModernCMakeExample
        VERSION 1.0
        LANGUAGES CXX)


add_subdirectory(JUCE)

# see this https://github.com/juce-framework/JUCE/blob/master/examples/CMake/AudioPlugin/CMakeLists.txt
# to make vst
#everything for standalone etc... is on the github Juce



