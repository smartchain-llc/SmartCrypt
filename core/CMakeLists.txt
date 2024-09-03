add_library(
  smartcrypt SHARED
  ./lib/Engine/Engine.cxx
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
