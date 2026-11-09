git clone --depth 1 https://github.com/boostorg/cmake.git .boost-cmake

cmake -S . -B build -DBUILD_TESTING=ON
