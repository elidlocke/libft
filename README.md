# Libft

My implementation of some of the functions that are in the standard C library, libft

## Using this Library

Start by getting your own copy of this repo:

```
Git clone https://github.com/elidlocke/libft.git
cd libft
```

This library contains a makefile, with the following options:

| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make libft.a` | same as make |
| `make clean` | removes the .o files used to create the library |
| `make clean` | removes the .o files used to create the library, as well as the libft.a library file |
| `make re` | removes all compilation files and remakes them |

If you go ahead and run:

```
make
make clean
```

You should see a new libft.a file. Now you can use it anywhere by including the header in your .c file, like so:

```
include "libft.h"
```

don't forget to tell gcc what the path to your library is when you compile a file that is using it.  For example:

```
gcc some_c_file.c -L/path_to_library_file/ -l/ft/
```
Note that -L takes the path to your library and -l takes the set of characters that come after lib in your library name.

## Functions

| Function | Description |
| --- | --- |
| **ft\_memset()** | The ft\_memset() function writes len bytes of value c (converted to an unsigned char) to the string b. Returns it's first argument.|
| **ft\_bzero()** | The ft\_bzero() function writes n zeroed bytes (\0) to the string s.  If n is zero, ft\_bzero() does nothing.|

## Disclaimer

This is a project that was done for learning purposes. For commercial use, please use the [GNU C Library](https://www.gnu.org/software/libc/).

