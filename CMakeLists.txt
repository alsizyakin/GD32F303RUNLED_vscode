# STM32 Minimal CMake project for C/C++ projects
cmake_minimum_required(VERSION 3.12)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
include(gcc-arm-none-eabi)

project(GD32F303_running_led VERSION 0.1)
enable_language(C CXX ASM)

#list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake/check-git)
#include(CheckGit)
#CheckGitSetup()

################################################################################
# Microcontroller Information
#set(mcu_devboard STM32746G-Discovery)
set(mcu_family GD32F3xx)
set(mcu_model GD32F30x)
set(cpu_parameters
	-mcpu=cortex-m4
	-mthumb
	-mfpu=fpv5-sp-d16
	-mfloat-abi=hard
	)

#set(mcu_startup_script ${PROJECT_SOURCE_DIR}/Src/startup_gd32f30x_xd.S)
set(mcu_linker_script ${PROJECT_SOURCE_DIR}/gd32.ld)

################################################################################
# Headers and Sources
set(stm32cubemx_incdirs
	#${PROJECT_SOURCE_DIR}/Drivers/${mcu_family}_HAL_Driver
	#${PROJECT_SOURCE_DIR}/Drivers/${mcu_family}_HAL_Driver/Inc
	#${PROJECT_SOURCE_DIR}/Drivers/${mcu_family}_HAL_Driver/Inc/Legacy
	#${PROJECT_SOURCE_DIR}/Drivers/CMSIS/Device/ST/${mcu_family}/Include
	#${PROJECT_SOURCE_DIR}/Drivers/CMSIS/Include
	#${PROJECT_SOURCE_DIR}/Drivers/CMSIS/DSP/Include

)

set(project_incdirs
	${PROJECT_SOURCE_DIR}
	${PROJECT_SOURCE_DIR}/Inc
	${PROJECT_SOURCE_DIR}/Src
	${PROJECT_SOURCE_DIR}/Drivers/CMSIS
	${PROJECT_SOURCE_DIR}/Drivers/CMSIS/GD/${mcu_model}/Include
	${PROJECT_SOURCE_DIR}/Drivers/CMSIS/GD/GD32F303/Include
	${PROJECT_SOURCE_DIR}/Drivers/CMSIS/DSP/Include
	${PROJECT_SOURCE_DIR}/Drivers/${mcu_model}_standard_peripheral/Include
	${PROJECT_SOURCE_DIR}/Peripherals
	${PROJECT_SOURCE_DIR}/Utilities
	${PROJECT_SOURCE_DIR}/Utilities/LCD
	${PROJECT_SOURCE_DIR}/Motor_Control
)
message(${project_incdirs})
file(GLOB_RECURSE stm32cubemx_sources CONFIGURE_DEPENDS
	${PROJECT_SOURCE_DIR}/Drivers/*.c
	
)

file(GLOB_RECURSE project_sources CONFIGURE_DEPENDS
	${PROJECT_SOURCE_DIR}/Inc/*.c
	${PROJECT_SOURCE_DIR}/Inc/*.cpp
	${PROJECT_SOURCE_DIR}/Src/*.c
	${PROJECT_SOURCE_DIR}/Src/*.cpp
	${PROJECT_SOURCE_DIR}/Peripherals/*.c
	${PROJECT_SOURCE_DIR}/Peripherals/*.cpp
	${PROJECT_SOURCE_DIR}/Utilities/*.c
	${PROJECT_SOURCE_DIR}/Utilities/*.cpp
	${PROJECT_SOURCE_DIR}/tests/*.cpp
)

################################################################################
# Executable
set(executable ${CMAKE_PROJECT_NAME})

add_executable(${executable}
	${stm32cubemx_sources}
	${project_sources}
	#${mcu_startup_script}
	#${CMAKE_BINARY_DIR}/generated/git_version.cpp
)

target_compile_definitions(${executable} PRIVATE
	$<$<CONFIG:Debug>:DEBUG>
	#$<$<CONFIG:Debug>:USE_FULL_ASSERT>
	${mcu_model}
	#USE_HAL_DRIVER
	ARM_MATH_CM4
	GD32F30X_HD
)

option(ON_TARGET_TEST_BUILD "On-target testing build configuration" OFF)
if(ON_TARGET_TEST_BUILD)
	message(WARNING "On-target testing build configuration is ON")
	target_compile_definitions(${executable} PRIVATE
		ON_TARGET_TEST_BUILD
	)
endif()

target_include_directories(${executable} SYSTEM PRIVATE
	${stm32cubemx_incdirs}
)

target_include_directories(${executable} PRIVATE
	${project_incdirs}
)

#add_dependencies(${executable} git-version)

################################################################################
# Compiler Options and Features
target_compile_options(${executable} PRIVATE
	# ${cpu_parameters}
	# -Wall
	# -Wextra
	# -Wpedantic
	# -Wshadow
	# -Wdouble-promotion
	# -Wformat=2 -Wformat-truncation
	# -Wundef
	# -fno-common
	# -Wno-unused-parameter
	# $<$<COMPILE_LANGUAGE:CXX>:
	# 	-Wconversion
	# 	-Wno-volatile
	# 	#-Wold-style-cast
	# 	#-Wuseless-cast
	# 	-Wsuggest-override>
	# $<$<CONFIG:Debug>:-O0 -g3 -ggdb>
	# $<$<CONFIG:Release>:-O3 -g0>
	-mthumb -mcpu=cortex-m4 -mfloat-abi=softfp -fno-builtin -fno-strict-aliasing -fdata-sections -fms-extensions -ffunction-sections -O1 -ggdb 
)

target_compile_features(${executable} PRIVATE
	c_std_11
	cxx_std_14
)

################################################################################
# Linker Options
target_link_options(${executable} PRIVATE
	#-T${mcu_linker_script}
	# -T ${PROJECT_SOURCE_DIR}/gd32.ld -ggdb
	# ${cpu_parameters}
	# #-Wl,-Map=${CMAKE_PROJECT_NAME}.map
	# --specs=nosys.specs
	# -Wl,--start-group
	# -lc
	# -lm
	# -lstdc++
	# -Wl,--end-group
	# -Wl,--print-memory-usage
	#-u_printf_float			# allows to use printf with float
	-mthumb -mcpu=cortex-m4 -mfloat-abi=softfp -Wl,--gc-sections -flto -specs=nano.specs -T ${PROJECT_SOURCE_DIR}/gd32.ld -ggdb
)

target_link_directories(${executable} PRIVATE
	${PROJECT_SOURCE_DIR}/Drivers/CMSIS/DSP/Lib/GCC
)

#target_link_libraries(${executable}
#	libarm_cortexM7lfsp_math.a
#)

################################################################################
# Misc Options and Post-build Tasks
set(CMAKE_VERBOSE_MAKEFILE OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_custom_command(TARGET ${executable} POST_BUILD
	COMMAND ${CMAKE_SIZE} $<TARGET_FILE:${executable}>
	COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${executable}> ${executable}.hex
	COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${executable}> ${executable}.bin
)

if (${DUMP_ASM})
	add_custom_command(TARGET ${executable} POST_BUILD
		COMMAND ${CMAKE_OBJDUMP} -D $<TARGET_FILE:${executable}> > ${executable}.s)
endif()


