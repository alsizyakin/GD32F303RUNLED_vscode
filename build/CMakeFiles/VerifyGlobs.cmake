# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.25
cmake_policy(SET CMP0009 NEW)

# stm32cubemx_sources at CMakeLists.txt:56 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/*.c")
set(OLD_GLOB
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/CMSIS/DSP/Source/arm_common_tables.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/CMSIS/DSP/Source/arm_cos_f32.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/CMSIS/DSP/Source/arm_sin_f32.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_adc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_bkp.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_can.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_crc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_ctc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_dac.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_dbg.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_dma.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_enet.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_exmc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_exti.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_fmc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_fwdgt.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_gpio.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_i2c.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_misc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_pmu.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_rcu.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_rtc.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_sdio.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_spi.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_timer.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_usart.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Drivers/GD32F30x_standard_peripheral/Source/gd32f30x_wwdgt.c"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Inc/*.c")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Inc/*.cpp")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Peripherals/*.c")
set(OLD_GLOB
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Peripherals/gpio.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Peripherals/rcu.c"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Peripherals/*.cpp")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Src/*.c")
set(OLD_GLOB
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Src/gd32f30x_it.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Src/main.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Src/start.c"
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Src/system_gd32f30x.c"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Src/*.cpp")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Utilities/*.c")
set(OLD_GLOB
  "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Utilities/delay.c"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/Utilities/*.cpp")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()

# project_sources at CMakeLists.txt:61 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/tests/*.cpp")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/alexey/Git/GD32/GD32F303_RunLed_VSCode/build/CMakeFiles/cmake.verify_globs")
endif()
