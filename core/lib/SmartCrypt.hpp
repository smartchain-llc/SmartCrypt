#pragma once
#include <Engine/Engine.hpp>
#include <memory>

namespace SmartCrypt {
  const char* Version();
  void TestOpImpl();

  // std::unique_ptr<IEncryptionEngine> InitEngine(EngineConfig&);
}