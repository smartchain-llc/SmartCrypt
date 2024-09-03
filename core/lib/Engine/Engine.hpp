#pragma once
#include <filesystem>
#include <iostream>

/// @brief EFile Stub
struct __EFile{
  std::filesystem::path out {""};
  bool encrypted { false }; 
  bool isEncrypted() const { return encrypted; }
};

struct ContentBlock {};


class EncryptionEngine {
public:
  static void Process( const __EFile& );
};

struct Content{};
struct Algorithm{};
struct Header{};

class EngineConfig {
public:
  EngineConfig(){}
  EngineConfig& SetAlgorithm(Algorithm&);
  EngineConfig& SetHeader(Header&);
private:
  Algorithm* algo_ { nullptr };
  Header* header_{ nullptr };
};
class IEncryptionEngine {
public:
  virtual ~IEncryptionEngine() = default;
  virtual void Process(Content&) = 0;
  virtual void Initialize(const EngineConfig&);
};
