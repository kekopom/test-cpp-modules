# Requirements
## Install clang-21
Run `wget -qO- https://apt.llvm.org/llvm.sh | sudo bash -s -- 21`
`sudo update-alternatives --install /usr/bin/cc cc /usr/bin/clang-21 100`
`sudo update-alternatives --set cc /usr/bin/clang-21`
`sudo update-alternatives --install /usr/bin/c++ c++ /usr/bin/clang++-21 100`
`sudo update-alternatives --set c++ /usr/bin/clang++-21`
Verify `c++ --version` returns Ubuntu clang version 21.1.8

## Install cmake 4.2.3
Follow https://askubuntu.com/a/865294 - "B. Building and Installing (Recommended for developers)"

# How to build
```bash
mkdir build && cd build
cmake .. -G Ninja -DCMAKE_CXX_FLAGS=-stdlib=libc++
cmake --build .
```

# Known issues: 
- `libc++.modules.json` resource does not exist [Using clang20.1.2 + libc++-20-dev there's no issue anymore]
- solution: https://github.com/llvm/llvm-project/issues/120215#issuecomment-2565019438
