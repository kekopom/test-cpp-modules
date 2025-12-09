# Requirements
cmake 4.0.3 or higher
clang-19

# How to build
```bash
mkdir build && cd build
cmake .. -G Ninja
cmake --build .
```

# Known issues: 
- `libc++.modules.json` resource does not exist
- solution: https://github.com/llvm/llvm-project/issues/120215#issuecomment-2565019438
