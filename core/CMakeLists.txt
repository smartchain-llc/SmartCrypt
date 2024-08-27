add_library(
  smartcrypt SHARED
  ./lib/SmartCrypt.cxx
)
target_include_directories(
  smartcrypt
  PUBLIC ./lib
)

add_executable(
  sc
  ./exe/main.cxx
)
target_link_libraries(
  sc
  smartcrypt
)
