#!/bin/sh
# build all files in one big api dso
g++ -shared -fpic -std=c++14 -fvisibility=hidden api.cpp impl.cpp -o api_all.so

# build the implementation as static library and create a dso wrapper
g++ -fpic -std=c++14 -c impl.cpp
ar rvs impl.a impl.o
g++ -shared -fpic -std=c++14 -fvisibility=hidden api.cpp impl.a -o api_only.so

