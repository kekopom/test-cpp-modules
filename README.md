# Requirements
## Install clang-21
Run `wget -qO- https://apt.llvm.org/llvm.sh | sudo bash -s -- 21`\
`sudo update-alternatives --install /usr/bin/cc cc /usr/bin/clang-21 100`\
`sudo update-alternatives --set cc /usr/bin/clang-21`\
`sudo update-alternatives --install /usr/bin/c++ c++ /usr/bin/clang++-21 100`\
`sudo update-alternatives --set c++ /usr/bin/clang++-21`\
`sudo apt install libc++-21-dev`
Verify `c++ --version` returns Ubuntu clang version 21.1.8

## Install cmake 4.2.3
Follow https://askubuntu.com/a/865294 - "B. Building and Installing (Recommended for developers)"

# How to build
```bash
mkdir build && cd build
# Workaround for clang-21 that has wrong libc++.modules.json path..
# See https://stackoverflow.com/a/79852649
cmake .. -G Ninja -DCMAKE_CXX_FLAGS=-stdlib=libc++ -DCMAKE_CXX_STDLIB_MODULES_JSON="/usr/lib/llvm-21/lib/libc++.modules.json"
cmake --build .
```
