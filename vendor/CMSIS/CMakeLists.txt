add_library(CMSIS INTERFACE)


set(CMSIS_MCU_PATH ${CMAKE_CURRENT_LIST_DIR}/Device/ST/STM32F3xx/)
set(MCU_LOWER stm32f334x8)
set(MCU_FAMILY_LOWER f3xx)

target_sources(CMSIS INTERFACE
	${CMSIS_MCU_PATH}/Source/Templates/gcc/startup_${MCU_LOWER}.s
	${CMSIS_MCU_PATH}/Source/Templates/system_stm32${MCU_FAMILY_LOWER}.c	
)


set_source_files_properties(
	${CMSIS_MCU_PATH}/Source/Templates/gcc/startup_${MCU_LOWER}.s
	${CMSIS_MCU_PATH}/Source/Templates/system_stm32${MCU_FAMILY_LOWER}.c	
	PROPERTIES
	COMPILE_OPTIONS "-w")

target_include_directories(CMSIS INTERFACE
	${CMSIS_MCU_PATH}/Include
	${CMAKE_LIST_DIR}/Include
	${CMAKE_LIST_DIR}/RTOS2/Include
)

target_link_libraries(CMSIS INTERFACE STM32F3XX)
