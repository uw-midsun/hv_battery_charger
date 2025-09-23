add_executable(board)

target_link_libraries(board CMSIS HAL STM32F3XX)

target_include_directories(board PRIVATE ${CMAKE_CURRENT_LIST_DIR}/inc)

set(linkerscript ${CMAKE_SOURCE_DIR}/ld/STM32F334C8TX.ld) 
add_link_options(board PUBLIC -T${linkerscript})
set_property(TARGET board PROPERTY LINK_DEPENDS ${linkerscript})

target_sources(board PRIVATE 
	src/main.c
	src/syscalls.c
)
