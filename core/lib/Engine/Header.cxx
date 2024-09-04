#include "Header.hpp"

static constexpr uint64_t MagicNum = 0xeeffc0434c4c4353ULL;

void BuildHeader(uint8_t* buffer){
  uint8_t* Mp = (uint8_t*)(&MagicNum);
  for(auto i = 0; i < 8; i++)
    buffer[i] = *(Mp + i);
}

Header::Header(){
  BuildHeader(bytes_);
}

SmartCrypt::EngineHeader::EngineHeader(){
  BuildHeader(bytes_);
}
const uint64_t SmartCrypt::EngineHeader::magic() const noexcept {
  return static_cast<uint64_t>(*bytes_);
}

bool SmartCrypt::HeaderIsEncrypted(const SmartCrypt::EngineHeader& header){

}