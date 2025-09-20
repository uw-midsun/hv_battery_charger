add_executable(board)

target_link_libraries(board CMSIS HAL STM32F3XX)

target_include_directories(board PRIVATE ${CMAKE_CURRENT_LIST_DIR}/inc)

target_sources(board PRIVATE src/main.c)
