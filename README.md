## The Linux Programming Interface

Build:

```sh
cmake -H. -BDebug -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=YES && make
```

`cmake` generates `Makefile` and `compile_commands.json` that ccls can use.

https://github.com/MaskRay/ccls/wiki/Project-Setup
