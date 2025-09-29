function(add_libs target)
	target_link_libraries(${target} CMSIS HAL STM32F3XX hal_conf)
endfunction()
