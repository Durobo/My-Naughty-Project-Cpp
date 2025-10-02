add_library(myLib)

target_sources(myLib
    PRIVATE
        src/employee.cpp
)

target_include_directories(myLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)