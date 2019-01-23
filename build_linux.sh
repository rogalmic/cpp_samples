#!/bin/bash
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_SYSTEM_VERSION=3.4.0 -DCMAKE_SYSTEM_NAME=Linux -Bunix -H. 
cd unix && make
