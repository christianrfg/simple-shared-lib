# Simple Shared Library

This repository is a simple example of how to create and use shared libraries.

## Prerequisites

* [Ubuntu 16.04](https://www.ubuntu.com/download/desktop) - LTS or newer version

## Installing

* To use the **sudo make** command to create the shared library on your system.

```
sudo make
```

* Optional - use **make clean** to remove **.o** and **.d** files.

```
make clean
```

## Running the tests
The **program.c** file contains a simple example of the created shared lib's.

* First, create a executable with the following command

```
gcc -o program program.c -L. -lfuncoes
```

* Now, run the program

```
./program
```

The output will be the simple usage of the shared librarys created.

## Authors

* **Christian Gomes** - [christianrfg](https://github.com/christianrfg)

See also the list of [contributors](https://github.com/christianrfg/simple-shared-lib/graphs/contributors) who participated in this project.
