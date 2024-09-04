#include <gtest/gtest.h>
#include <SmartCrypt.hpp>

TEST(Encryptor, ShouldBeInitializeWithAConfiguration){
  SmartCrypt::Engine::Config config;
  SmartCrypt::Engine::Encryptor E { config };
}

// TEST(EngineConfig, HeaderShouldContainMagicNumber){
//   SmartCrypt::EngineHeader header;
//   ASSERT_TRUE(SmartCrypt::HeaderIsEncrypted(header));
// }

// TEST(EngineConfig, ){}

// TEST(EngineTests, ShouldBeInitializedWithAnEngineConfig){
//   EngineConfig config = EngineConfig().SetAlgorithm().SetHeader();
//   SmartCrypt::InitEngine(config);
// }