#!/bin/bash
cmake -G "Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -DCMAKE_SYSTEM_VERSION=3.4.0 -DCMAKE_SYSTEM_NAME=Linux . 
make 
