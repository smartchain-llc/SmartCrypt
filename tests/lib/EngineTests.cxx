#include <gtest/gtest.h>
#include <SmartCrypt.hpp>

// IO Stream Example
struct Book {
  Book(const std::string& title, const std::string& author, uint64_t length):
    title_{title},
    author_{author},
    len_{length}
  {}
  std::string title_;
  std::string author_;
  uint64_t len_;


};
template<typename charT, typename Traits>
std::basic_ostream<charT, Traits>& operator<<(std::basic_ostream<charT, Traits>& os, const Book& book){
  os << "\"" << book.title_ << "\" [" << book.author_ << "]("<< book.len_ << ")\n";
  return os;
}

TEST(BOOK, TestOverload){
  Book b {"My Life w/ Harvey", "Robert Strickland", 420};
  std::cout << b;
}

TEST(EncryptorConfig, AlgorithmDoesTheCipheringOfBytes){
  const uint8_t key { 0x69 };
  const auto ByteXOR = [&](uint8_t byte) -> uint8_t {
    uint8_t ret = byte ^ key;
    return ret;
  };
  const uint8_t pt { 0x10 };
  const uint8_t ct = ByteXOR(pt);
  ASSERT_EQ(ct, pt ^ key);
}
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