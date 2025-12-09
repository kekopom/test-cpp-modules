# Requirements
- cmake 4.1.2 or higher
- clang-20.1.2

# How to build
```bash
mkdir build && cd build
cmake .. -G Ninja -DCMAKE_CXX_FLAGS=-stdlib=libc++
cmake --build .
```

# Known issues: 
- `libc++.modules.json` resource does not exist
- solution: https://github.com/llvm/llvm-project/issues/120215#issuecomment-2565019438
