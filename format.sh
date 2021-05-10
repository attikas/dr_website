#!/usr/bin/env bash

find backend/controllers backend/models -name *.h -o -name *.cc -exec dos2unix {} \;
find backend/controllers backend/models -name *.h -o -name *.cc|xargs clang-format -i -style=file
dos2unix backend/main.cc
clang-format -i -style=file backend/main.cc
