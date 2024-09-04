#include <gtest/gtest.h>
#include <SmartCrypt.hpp>

TEST(EngineConfig, HeaderShouldContainMagicNumber){
  SmartCrypt::EngineHeader header;
  ASSERT_TRUE(SmartCrypt::HeaderIsEncrypted(header));
}

// TEST(EngineConfig, ){}

// TEST(EngineTests, ShouldBeInitializedWithAnEngineConfig){
//   EngineConfig config = EngineConfig().SetAlgorithm().SetHeader();
//   SmartCrypt::InitEngine(config);
// }