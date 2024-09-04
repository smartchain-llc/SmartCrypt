#include "Engine.hpp"
#include "Header.hpp"

#include <filesystem>
#include <iostream>

#include "__opImpl.cxx"

using namespace SmartCrypt::Engine;


Encryptor::Encryptor(Config& config): config_{ config }{}

// void Encrypt(const __EFile& efile){
//   // FILE* outFile = fopen(efile.out.c_str(), "w");
//   Header header;
  
//   __encrypt();
// }

// void EncryptionEngine::Process(const __EFile& efile){ 
//   if(efile.isEncrypted())
//     __decrypt();
//   else
//     Encrypt(efile);
// }