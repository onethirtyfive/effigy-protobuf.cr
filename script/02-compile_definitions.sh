#!/usr/bin/env bash

protoc-c --c_out=src/libeffigywire/src -Iproto/common proto/common/*.proto
protoc-c --c_out=src/libeffigywire/src -Iproto/s2 -Iproto/common proto/s2/*.proto
mv src/libeffigywire/src/*.h src/libeffigywire/include/libeffigywire/.

# Generated code unintentionally contains some naming conflicts. Fix them.
# You might need to `brew install gnu-sed` for this to work on Mac OS X.
sed -i 's/include "\(.*\)"/include <libeffigywire\/\1>/' \
    src/libeffigywire/src/*.c
