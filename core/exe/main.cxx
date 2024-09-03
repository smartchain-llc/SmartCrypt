#include <SmartCrypt.hpp>
#include <cstdio>
int main(){
  printf("Version %s\n", SmartCrypt::Version());
  SmartCrypt::TestOpImpl();
  EngineConfig config;
  auto engine = SmartCrypt::InitEngine(config);

  return 0;
}