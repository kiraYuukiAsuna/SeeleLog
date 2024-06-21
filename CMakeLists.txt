cmake_minimum_required(VERSION 3.28)
project(SeeleLog)

set(CMAKE_CXX_STANDARD 20)

set(ProjectSource
        main.cpp
        SeeleLog/backward.cpp
        SeeleLog/Log.cpp
)

add_executable(SeeleLog ${ProjectSource})

target_include_directories(SeeleLog PRIVATE
        SeeleLog
        SeeleLog/ThirdParty/backward
        SeeleLog/ThirdParty/fmt/include
        SeeleLog/ThirdParty/spdlog/include
)
