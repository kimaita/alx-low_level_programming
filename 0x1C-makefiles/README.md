# Makefiles

`make` is a utility software tool for managing and maintaining
computer programs consisting many component files. The `make` utility
automatically determines which pieces of a large program need to be
recompiled, and issues commands to recompile them.

It does this by using a `Makefile`, a descriptor file that defines a set of _rules_ determining what to re/compile and how. Makefiles are handy automation tools for software building.

A rule generally consists of a `target` to create/execute, `prerequisites` that the target needs for execution and a `recipe` defining how to 'achieve' the target.

Basic rule syntax:

```Makefile
target: prerequisites
    recipe
```
