#pragma once
#include <filesystem>
#include <iostream>

/// @brief EFile Stub
struct __EFile{
  std::filesystem::path out {""};
  bool encrypted { false }; 
  bool isEncrypted() const { return encrypted; }
};


class EncryptionEngine {
public:
  static void Process( const __EFile& );
};