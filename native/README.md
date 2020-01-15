## Cross compile for Android

Assume Android SDK and Android NDK is installed on your system.

Set `ANDROID_SDK_ROOT` environemt variable, then

```
$ ./scripts/bootstrap-android-ndk.sh
$ cd build-android
$ make
```

## Native build(e.g. x86_64 linux, aarch64 linux)

```
$ ./scripts/bootstrap-cmake-linux.sh
$ cd build
$ make
```
