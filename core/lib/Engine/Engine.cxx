#include "Engine.hpp"

#include <filesystem>
#include <iostream>

#include "__opImpl.cxx"

static constexpr uint64_t MagicNum = 0xeeffc0434c4c4353ULL;

void BuildHeader(uint8_t* buffer){
  uint8_t* Mp = (uint8_t*)(&MagicNum);
  for(auto i = 0; i < 8; i++)
    buffer[i] = *(Mp + i);
}

void Encrypt(const __EFile& efile){
  std::filesystem::path outPath;
  FILE* outFile = fopen(outPath.c_str(), "w");
  uint8_t outBuff[32];
  __encrypt();
}

void EncryptionEngine::Process(const __EFile& efile){ 
  if(efile.isEncrypted())
    __decrypt();
  else
    Encrypt(efile);
}