#include <gtest/gtest.h>
#include <SmartCrypt.hpp>


struct segment {
  
};

struct header {
// private:
  struct iterator {
    explicit iterator(uint8_t* byte): index_{byte}{}
    uint8_t& operator*(){
      if(index_)
        return *index_;
    }
    void next(){ index_++; }
    uint8_t* index_ { nullptr };
  };
  /// @brief Make the container be able to container segments of variable byte lengths.
  std::vector<uint8_t> segments_;
  uint8_t len_ { 0 };
public:
  explicit header(uint8_t len): len_{ len }, segments_{ {len} }{}
  iterator begin(){
    return iterator(&segments_[0]);
  }
  iterator end(){
    return iterator(&segments_[len_]);
  }
//   struct Segment {
//     explicit Segment(uint8_t byteLength):
//       len_ { byteLength }
//     {}
//     uint8_t len_;
//   };
};

template<typename charT, typename Traits>
std::basic_ostream<charT, Traits>& operator<<(std::basic_ostream<charT, Traits>& os, const header& hdr) {
  return os;
}

TEST(EncryptorConfig, HeadersDefineByteAttributes){
  header h { 10 };
  auto h_it = h.begin();
  *h_it = 0x69;
  ASSERT_EQ(h.segments_[0], 0x69);
  h_it.next();
  *h_it = 0xff;
  ASSERT_EQ(h.segments_[1], 0xff);
}