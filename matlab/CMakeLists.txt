add_library(matlab_controls STATIC)

add_libs(matlab_controls)

target_include_directories(matlab_controls PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)

target_sources(matlab_controls PRIVATE BoostConverterModel_ControlSystem.c)
