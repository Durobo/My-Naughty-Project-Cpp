find_package(Eigen3 REQUIRED)
add_library(components)

target_sources(components
    PRIVATE
        src/Gripper.cpp
        src/Kinematics.cpp
        src/RobotComponents.cpp
        src/RobotJoint.cpp
        src/TwoLinkArm.cpp
)
target_include_directories(components
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(components
    PUBLIC
        Eigen3::Eigen
)