#! /usr/bin/env bash
rm -rf generated-src/ &&
sh run_djinni.sh &&
sh run_cmake_ios.sh
