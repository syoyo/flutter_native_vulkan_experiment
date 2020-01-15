#include <stdint.h>
#include <cmath>
#include <vector>

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t native_submodule(int32_t x, int32_t y) {
  std::vector<int> z;
  z.push_back(x);
  
    return 11114 + int(std::abs(float(x))) + y + z[0];
}
