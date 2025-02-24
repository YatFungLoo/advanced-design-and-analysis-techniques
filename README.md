# Advanced Design And Analysis Techniques

Note and codes while studying the book Advanced Design And Analysis Techniques, 4th edition. Mainly chapter 4, on dynamic programming and greedy algorithms (aka LeetCode hard).

- [Advanced Design And Analysis Techniques](#advanced-design-and-analysis-techniques)
  - [Dynamic Programming](#dynamic-programming)
  - [Fibonacci Number](#fibonacci-number)
  - [Rod Cutting Problem](#rod-cutting-problem)
    - [Top Down Recursive Approach (Naive Solution)](#top-down-recursive-approach-naive-solution)
    - [Dynamic Programming Approach](#dynamic-programming-approach)
  - [To run the code](#to-run-the-code)

## Dynamic Programming

Steps to develop a dynamic programming algorithms:

1. Characterise the structure of an optimal solution.
2. Recursively define the value of an optimal solution.
3. Compute the value for an optimal solution, usually bottom-up approach.
4. Construct an optimal solution from computed information.

## Fibonacci Number

Including Top down (recursion using call stack) and bottom up (iterative, using array or min variables) method as it is the simplest showcase of recursion for myself to refresh these content.

## Rod Cutting Problem

Optimal substructure problem: optimal solution are composed of optimal sub-solution, basically meaning it can be solved recursively.

The recursive structure for the problem can be decomposed of first piece to be the left-hand end, and right-hand end to be the maximum/optimal price of the total length.

### Top Down Recursive Approach (Naive Solution)

If you implement the above method, you will find the function get considerably slower exponentially. This problem exist with top down recursive approach, because we are recalculating each sub-problem again every time for each level it goes up.

As a tree with each node equals to a function call, for a rob length of $n$ having $n-1$ potential locations to cut, there will be $2^{n-1}$ number of nodes.

### Dynamic Programming Approach



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
