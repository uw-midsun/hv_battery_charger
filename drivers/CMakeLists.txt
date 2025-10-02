add_library(drivers STATIC)

add_libs(drivers)

target_include_directories(drivers PUBLIC
	${CMAKE_CURRENT_LIST_DIR}/inc
)

target_sources(drivers PRIVATE
	src/lcd.c 
	src/led_status.c
)
