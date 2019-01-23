cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_SYSTEM_VERSION=10.0.10586.0 -DCMAKE_SYSTEM_NAME=Windows -Bwin -H. 
cd win && mingw32-make
