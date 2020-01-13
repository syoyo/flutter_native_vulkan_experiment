# copy .so from /sdcard to app's local storage
echo adb exec-out run-as com.example.flutter_native_vulkan_experiment cp /sdcard/data/libnative_add.so /data/data/com.example.flutter_native_vulkan_experiment/files/
