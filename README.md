# Effigy Wire

## Introduction

A small C library of generated protobuf files which support
[Effigy](https://github.com/onethirtyfive/effigy.cr).

Since Crystal can easily bind to C libraries, we need to make one containing
[protobuf-c](https://github.com/protobuf-c/protobuf-c)-based protocol
definitions.

## Dependencies

You must install `protobuf-c` library. On Mac OS X, using homebrew, it's easy:

```bash
$ brew install protobuf-c
```

Will add instructions for linux and other operating systems as I can.

## Building

I am a complete C noob, but I clobbered together a CMake build for this.

```bash
$ mkdir build
$ cd build
$ cmake ../src
$ make
```

If everything works, in `build` you'll find `libeffigywire/libeffigywire.a`.
That's the file Effigy needs to link against to do its work.

## Updating Protobuf Definitions

I'm too lazy to write a shell script. Download
[clarity-protobuf](https://github.com/skadistats/clarity-protobuf), then:

```bash
$ cd clarity-protobuf/src/main/proto
$ find . -name *.proto | cpio -pdm ~/Code/doto/effigy-wire.c/proto/
$ cd ../effigy-wire.c
$ rm -rf proto/s1
```

1. Run, in order, each of the scripts in script: `sh script/01...`.
2. If you've already build the project before, `$ rm -rf build`.
3. Follow the instructions from the "Building" section above.

