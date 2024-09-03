#include <SmartCrypt.hpp>
const char* SmartCrypt::Version(){ return "0.0.0"; }

void SmartCrypt::TestOpImpl(){ EncryptionEngine::Process({}); }

std::unique_ptr<IEncryptionEngine> InitEngine(EngineConfig& config){
  return std::make_unique<IEncryptionEngine>(config);
}