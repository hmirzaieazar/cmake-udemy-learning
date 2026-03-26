function(add_git_submodule dir)

    find_package(Git REQUIRED)

    execute_process(
        COMMAND
        ${GIT_EXECUTABLE} submodule update --init --recursive ${dir}
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    )


    add_subdirectory(${dir})

endfunction(add_git_submodule)