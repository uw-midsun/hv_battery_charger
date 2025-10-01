## Build Reqs:
- cmake 
- ninja 
- arm-gcc-embedded
- arm newlib
- syscall stubs


## On Ubuntu:
```bash
sudo apt-get install binutils-arm-none-eabi gcc-arm-none-eabi
sudo apt-get install gcc-11 g++-11 clang clang-format gdb
sudo apt-get install cmake make ninja-build
```

## To Build:

```bash
cmake -B build -G Ninja
cmake --build build
```
or 

```bash 
cmake -B build -G Ninja 
cd build 
ninja
```

