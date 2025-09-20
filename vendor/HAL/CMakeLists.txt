add_library(HAL INTERFACE)

target_include_directories(HAL INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/Inc 
	${CMAKE_CURRENT_LIST_DIR}/Inc/Legacy
)

file(GLOB_RECURSE hal_source_files LIST_DIRECTORIES false ${CMAKE_CURRENT_LIST_DIR}/Src/*.c)
list(FILTER hal_source_files EXCLUDE REGEX "^.+_template.c$")

target_sources(HAL INTERFACE ${hal_source_files})

set_source_files_properties(
			$<TARGET_PROPERTY:HAL,INTERFACE_SOURCES> PROPERTIES
			COMPILE_OPTIONS "-w")


target_compile_definitions(HAL INTERFACE USE_HAL_DRIVER)
target_compile_definitions(HAL INTERFACE STM32F334x8)

target_link_libraries(HAL INTERFACE STM32F3XX)
