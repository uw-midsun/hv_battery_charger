add_library(core STATIC)

target_link_libraries(core CMSIS HAL STM32F3XX)

target_include_directories(core PUBLIC
	${CMAKE_CURRENT_LIST_DIR}/inc
)

target_sources(core PRIVATE
	src/_keep.c 
)
