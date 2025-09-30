#!/usr/bin/env bash

set -euo pipefail

cmake -B build -G Ninja

pushd build

ninja -j12

popd
