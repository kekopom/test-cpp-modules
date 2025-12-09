CMAKE_MINIMUM_REQUIRED(VERSION 4.2.0)
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD d0edc3af-4c50-42ea-a356-e2862fe7a444) # Must be up to date with https://github.com/Kitware/CMake/blob/master/Help/dev/experimental.rst
project(main LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
set(CMAKE_CXX_MODULE_STD ON)
set(CMAKE_CXX_STANDARD "${CMAKE_CXX_STANDARD_LATEST}")
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main)
target_sources(main
    PUBLIC
    main.cpp
)
target_sources(main
  PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    CarType.cppm
    CarBuilder.cppm
    Car.cppm
)
