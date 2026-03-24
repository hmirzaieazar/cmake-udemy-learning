set(
    LIB_HEADER_FILES
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include/"
)

target_include_directories(
    ${LIBRARY_NAME} 
    PUBLIC 
    ${LIB_HEADER_FILES}
)
