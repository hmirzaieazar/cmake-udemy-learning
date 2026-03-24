set(
    EXE_SOURCE_FILES
    main.cc
)

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCE_FILES})

target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})
