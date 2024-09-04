#pragma once
#include <cstdint>

namespace SmartCrypt {

  struct EngineHeader {
    EngineHeader();
    const uint64_t magic() const noexcept;
  private:
    uint8_t bytes_[32];
  };

  bool HeaderIsEncrypted(const EngineHeader&);
}


class Header {
public:
  Header();
private:
  uint8_t bytes_[32];
};