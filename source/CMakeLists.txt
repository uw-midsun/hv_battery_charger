add_executable(board)

add_libs(board)

set(linkerscript ${CMAKE_SOURCE_DIR}/ld/STM32F334C8TX.ld)
add_link_options(board PUBLIC -T${linkerscript})
set_property(TARGET board PROPERTY LINK_DEPENDS ${linkerscript})

target_sources(board
  PRIVATE
  main.c
  syscalls.c
  lcd.c

  lcd.h
)
