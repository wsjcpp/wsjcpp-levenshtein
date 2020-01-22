cmake_minimum_required(VERSION 3.0)

project(wsjcpp-levenshtein)

include(${CMAKE_CURRENT_SOURCE_DIR}/src.wsjcpp/CMakeLists.txt)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${wsjcpp-levenshtein_SOURCE_DIR})

# Sources

# include header dirs
list (APPEND WSJCPP_INCLUDE_DIRS "src")

list (APPEND WSJCPP_SOURCES "src/wsjcpp_levenshtein.cpp")
list (APPEND WSJCPP_SOURCES "src/wsjcpp_levenshtein.h")

list (APPEND WSJCPP_SOURCES "src/main.cpp")

include_directories(${WSJCPP_INCLUDE_DIRS})

add_executable (wsjcpp-levenshtein ${WSJCPP_SOURCES})

target_link_libraries(wsjcpp-levenshtein ${WSJCPP_LIBRARIES} )

install(
    TARGETS
        wsjcpp-levenshtein
    RUNTIME DESTINATION
        /usr/bin
)
