# Advanced Design And Analysis Techniques
Note and codes while studying the book Advanced Design And Analysis Techniques, 4th edition. Mainly chapter 4, on dynamic programming and greedy algorithms (aka leetcode hard).

# Dyamic Programming


# To run the code
```
mkdir build && cd build
```

```
cmake .. --preset=debug
```

or 

```
cmake .. --preset=release
```

```
ninja clean && ninja
```

and executable will exist in the `build/` directory.

to generate compile_commands.json file for clangd LSP, use

```
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .. --preset=${PRESET_NAME}

cd ${ROOT_DIRECTORY}

ln -s build/compile_commands.json
```
