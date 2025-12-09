# Requirements
- cmake 4.1.2 or higher
- clang-20.1.2 with libc++-20-dev

# How to build
```bash
mkdir build && cd build
cmake .. -G Ninja -DCMAKE_CXX_FLAGS=-stdlib=libc++
cmake --build .
```

# Known issues: 
- `libc++.modules.json` resource does not exist [Using clang20.1.2 + libc++-20-dev there's no issue anymore]
- solution: https://github.com/llvm/llvm-project/issues/120215#issuecomment-2565019438
