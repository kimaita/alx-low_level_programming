# C - Dynamic libraries

## Definition

A library is a collection of routines usable by other programs. Dynamic libraries involve the use of shared libraries

## How it works

These shared resources are loaded into memory before the application starts, saving on memory usage as processes will access this one loaded instance.

## Creating

1. Compile source code files(.c) into object code files(.o):  

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c
   ```

   - the `fPIC` flag (Position Independent Code) makes the object code accessible from any location.
   - the `c` flag has the compiler stop after assembly to get object code

2. Create the library:  
_prefix the library name with lib_

   ```bash
   gcc -shared -o libdynamic.so *.o
   ```

3. Add the library path to the `$LD_LIBRARY_PATH` environment variable to allow the dynamic linker find it.

   ```bash
   export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
   ```

## Usage

Having the code using the library in a file `some_code.c`, we compile it into an executable `some_code` like:

```bash
gcc -Wall -pedantic -Werror -Wextra -L. some_code.c -ldynamic -o some_code
```

and run the executable.

You can view the **shared libraries needed** by an executable/library using the `ldd` command like:

```bash
ldd some_code
ldd libdynamic.so
```

To **view the functions** included in a library, use `nm` like:

```bash
nm -D libdynamic.so 
```

## Static vs. Shared(Dynamic libraries)

|Static|Dynamic|
|---|---|
|`.a`(archive)|`.so`(shared object)|
|Compile-time linking|Run-time loading|
|Object code embedded in executable|Link to library stored in environment variable|

[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) is a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

[100-operations.so](./100-operations.so) is a dynamic library contaning [C-functions](./100-math.c) for addition, subtraction, multiplication, division and modulus called from Python in [100-tests.py](./100-tests.py)  
_Division by zero is not accounted for due to conflicting function names(div in stdlib.h)_
