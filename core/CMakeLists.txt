add_library(
  smartcrypt SHARED
  ./lib/SmartCrypt.cxx
)
target_include_directories(
  smartcrypt
  PUBLIC ./lib
)