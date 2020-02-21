# SPLAT! 2.0-alpha

```
Please note that this branch is not functional yet!
```

A Terrestrial RF Path and Terrain Analysis Tool for Unix/Linux

## About

Fork of fork of SPLAT! v1.4.2

## Getting Started

Build instructions:

For this version, you must have either gcc or clang installed, and it must be a version that supports at least C++11 .

You also need several utility libraries:
* libbzip2
* zlib
* libpng
* libjpeg

and gnuplot for generating graphs.


Ubuntu 18.04 LTS:

```
sudo apt install git
git clone https://github.com/der-stefan/splat.git
cd splat/
sudo apt install libbz2-dev zlib1g-dev libjpeg-dev libpng-dev gnuplot
cd build
cmake ..
make
./splat

```
