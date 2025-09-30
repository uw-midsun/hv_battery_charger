#!/usr/bin/env bash

cmake -B build -G Ninja

pushd build

ninja -j12

popd
