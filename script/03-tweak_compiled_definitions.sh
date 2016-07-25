# Generated code includes files now in the lib include path.
# On Mac OS X, you might need to first `brew install gnu-sed`.
sed -i 's/include "\(.*\)"/include <libeffigywire\/\1>/' \
    src/libeffigywire/src/*.c
