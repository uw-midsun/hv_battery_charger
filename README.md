## Build Reqs:
- cmake 
- ninja 
- arm-gcc-embedded
- arm newlib
- syscall stubs

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
