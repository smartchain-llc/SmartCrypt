#pragma once
#include <cstdint>

class Header {
public:
  Header();
private:
  uint8_t bytes_[32];
};