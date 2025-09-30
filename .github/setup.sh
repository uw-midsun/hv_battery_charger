#!/usr/bin/env bash 

set -euo pipefail

sudo apt-get install -y binutils-arm-none-eabi gcc-arm-none-eabi
sudo apt-get install -y gcc-11 g++-11 clang clang-format gdb
sudo apt-get install -y cmake make ninja-build
