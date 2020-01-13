#include <stdint.h>
#include <vector>

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t native_add(int32_t x, int32_t y) {
  std::vector<int32_t> z;
  z.push_back(x);
  z.push_back(y);
  
    return 3 + x + y + z[1];
}
