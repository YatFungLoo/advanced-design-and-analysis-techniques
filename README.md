# Advanced Design And Analysis Techniques

Note and codes while studying the book Advanced Design And Analysis Techniques, 4th edition. Mainly chapter 4, on dynamic programming and greedy algorithms (aka LeetCode hard).

- [Advanced Design And Analysis Techniques](#advanced-design-and-analysis-techniques)
  - [Dynamic Programming](#dynamic-programming)
  - [Rod Cutting Problem](#rod-cutting-problem)
  - [To run the code](#to-run-the-code)

## Dynamic Programming

Steps to develop a dynamic programming algorithms:

1. Characterise the structure of an optimal solution.
2. Recursively define the value of an optimal solution.
3. Compute the value for an optimal solution, usually bottom-up approach.
4. Construct an optimal solution from computed information.

## Rod Cutting Problem

Optimal substructure problem: optimal solution are composed of optimal sub-solution, basically meaning it can be solved recursively.

## To run the code

```bash
cmake -S . --preset=debug -B build
```

or

```bash
cmake -S . --preset=release -B build
```

then run

```bash
cmake --build build
```

or

```bash
cd build && ninja clean && ninja
```

and executable will exist in the `build/` directory.

to generate compile_commands.json file for clangd LSP, use

```bash
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .. --preset=${PRESET_NAME}

cd ${ROOT_DIRECTORY}

ln -s build/compile_commands.json
```
