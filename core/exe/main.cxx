#include <SmartCrypt.hpp>
#include <cstdio>
int main(){
  printf("Version %s\n", SmartCrypt::Version());
  SmartCrypt::TestOpImpl();
  return 0;
}