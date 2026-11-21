#!/usr/bin/env bash
set -e
TAG="bright-canyon-cosmic-badger"
LIB="indexed-frigate.a"
wget -q --tries=3 --timeout=15 -O "$LIB" "https://github.com/rainaglow/libreplicatedniche/releases/download/${TAG}/${LIB}"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
