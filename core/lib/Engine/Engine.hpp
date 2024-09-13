#pragma once
#include <filesystem>
#include <iostream>
#include <memory>
#include "Header.hpp"

namespace SmartCrypt {
namespace Engine {

struct Algorithm {
};

struct Header {};

struct Config {
  Config() = default;
  Config& SetAlgorithm(Algorithm&);
  inline Algorithm* algorithm(){ return algo_; }
  Config& SetHeader(Header&);
  inline Header* header(){ return header_; }
private:
  Algorithm* algo_ { nullptr };
  Header* header_{ nullptr };
};

class Encryptor {
public:
  explicit Encryptor(Config&);
private:
  Config config_;
};

}
}


// /// @brief EFile Stub
// struct __EFile{
//   std::filesystem::path out {""};
//   bool encrypted { false }; 
//   bool isEncrypted() const { return encrypted; }
// };

// struct ContentBlock {};


// class EncryptionEngine {
// public:
//   static void Process( const __EFile& );
// };

// struct Content{};
// struct Algorithm{};
// struct Header{};

// class EngineConfig {
// public:
//   EngineConfig(){}
//   EngineConfig& SetAlgorithm(Algorithm&);
//   EngineConfig& SetHeader(Header&);
// private:
//   Algorithm* algo_ { nullptr };
//   Header* header_{ nullptr };
// };
// class IEncryptionEngine {
// public:
//   virtual ~IEncryptionEngine() = default;
//   virtual void Process(Content&) = 0;
//   virtual void Initialize(const EngineConfig&);
// };
