#include <stdint.h>
#include <cmath>
#include <vector>

#include <dlfcn.h>

extern "C" {

typedef int32_t (*native_add_fn)(int32_t x, int32_t y);

}

static int32_t my_add(int32_t x, int32_t y)
{
  std::vector<int> z;
  z.push_back(x);

  return -11130 + int(std::abs(float(x))) + y + z[0];
}

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t native_add(int32_t x, int32_t y) {

  void *handle = nullptr;
  native_add_fn add_fn = nullptr;

  if (handle) {
    int ret = dlclose(handle);
    handle = nullptr;
    if (ret != 0) {
      return ret;
    }
  }

  handle = dlopen("/data/data/com.example.flutter_native_vulkan_experiment/files/libnative_submodule.so", RTLD_LAZY);
  if (!handle) {
    return -1;
  }

  if (handle) {
    add_fn = reinterpret_cast<native_add_fn>(dlsym(handle, "native_submodule"));
    if (!add_fn) {
      return -2;
    }

    int32_t ret = add_fn(x, y);

    //int dlret = dlclose(handle);
    //handle = nullptr;
    //if (dlret != 0) {
    //  return -30000 + dlret;
    //}
  

    return ret;
  }
     
  
  return my_add(x, y);
}

