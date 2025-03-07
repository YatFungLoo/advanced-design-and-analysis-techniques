# Advanced Design And Analysis Techniques

Note and codes while studying the book Advanced Design And Analysis Techniques, 4th edition. Mainly chapter １4, on dynamic programming and greedy algorithms (Ada LeetCode hard).

<!-- markdown-toc start - Don't edit this section. Run M-x markdown-toc-refresh-toc -->
**Table of Contents**

- [Advanced Design And Analysis Techniques](#advanced-design-and-analysis-techniques)
  - [Dynamic Programming](#dynamic-programming)
    - [Fibonacci Number](#fibonacci-number)
    - [Rod Cutting Problem](#rod-cutting-problem)
      - [Top Down Recursive Approach (Naive Solution)](#top-down-recursive-approach-naive-solution)
      - [Dynamic Programming Approach (Top Down w/ *memorization*)](#dynamic-programming-approach-top-down-w-memorization)
      - [Dynamic Bottom Up Approach (Iterative)](#dynamic-bottom-up-approach-iterative)
    - [Matrix-Chain Multiplication Problem](#matrix-chain-multiplication-problem)
      - [The Actual Dynamic Programming Problem](#the-actual-dynamic-programming-problem)
  - [Greedy Algorithms](#greedy-algorithms)
  - [Amortized Analysis](#amortized-analysis)
  - [Graph related (Move to a new Repo)](#graph-related-move-to-a-new-repo)
  - [To run the code](#to-run-the-code)

<!-- markdown-toc end -->

## Dynamic Programming

Steps to develop a dynamic programming algorithms:

1. Characterise the structure of an optimal solution.
2. Recursively define the value of an optimal solution.
3. Compute the value for an optimal solution, usually bottom-up approach.
4. Construct an optimal solution from computed information.

### Fibonacci Number

Including Top down (recursion using call stack) and bottom up (iterative, using array or min variables) method as it is the simplest showcase of recursion for myself to refresh these content.

### Rod Cutting Problem


Optimal substructure problem: optimal solution are composed of optimal sub-solution, basically meaning it can be solved recursively.

The recursive structure for the problem can be decomposed of first piece to be the left-hand end, and right-hand end to be the maximum/optimal price of the total length.

#### Top Down Recursive Approach (Naive Solution)

If you implement the above method, you will find the function get considerably slower exponentially. This problem exist with top down recursive approach, because we are recalculating each sub-problem again every time for each level it goes up.

As a tree with each node equals to a function call, for a rob length of $n$ having $n-1$ potential locations to cut, there will be $2^{n-1}$ number of nodes.

#### Dynamic Programming Approach (Top Down w/ *memorization*)

Dynamic programming approach to solve the problem of recalculating sub-problem, is to instead save the solution of the sub-problem and reuse as needed!

> This is a classic case of time-memory trade-off (like hashing). Where time is saved using more memory (for saving sub-problem results.)

The implementation here uses a an extra array size of maximum length of rod, which passes around by reference.

#### Dynamic Bottom Up Approach (Iterative)

Same approach but different execution to above Fibonacci bottom up method. Solve and save sub-problem results in `ascending` order (smallest first), and reuse results.

### Matrix-Chain Multiplication Problem

Given a sequence $(A_1, A_2, ... ,A_n)$ of $n$ matrices to be multiplied, where $A$ are not guaranteed, compute the product $A_1A_2 ... A_n$

The amount of computation of this problem is dominated by the number of scalar multiplications, where $Ans_{ij} = Ans_{ij} + A_{ij} * B_{ij}$.

For $A_1 * A_2 * A_3$ where each dimension is $p * q$, $q * r$ and $r * s$ respectively. If we group the matrix in the order of $((A_1 * A_2) * A_3)$ The number of scalar multiplications to calculated $A_1 * A_2$ will be $p * q * r$ to generate the $p * r$ matrix, the resulting matrix will then multiply $A_3$ where there will be $p * r * s$ number of multiplications. The total multiplication will be:

```math
p * q * r + p * r * s
\tag{1}
```

If we use another configuration $(A_1 * (A_2 * A_3))$, the total number of scalar multiplication will be different, totalling at:

```math
p * q * s + q * r * s
\tag{2}
```

As an example, substituting $p, q, r, s$ as $10, 100, 20, 5$. We get $21000$ vs $15000$ scalar multiplication with $(1)$ and $(2)$ respectively.

#### The Actual Dynamic Programming Problem

The actual dynamic problem to solve is to find the optimal parentheses order that gives the minimum scalar multiplications.

The optimal parenthesization for $A_{ij}$ must split between $A_k$ and $A_{k+1}$ where $k$ is between $i$ and $j$, the optimal solution will be the scalar multiplication of the two matrices.

Let $m[i,j]$ be the minimum scalar multiplications needed to computer $A_{ij}$. if $i = j$ problem is trivial.

## Greedy Algorithms

## Amortized Analysis

## Graph related (Move to a new Repo)

1. BFS
2. DFS
3. Topological sort
4. Weighted graph (Dijkstra's Algorithms)

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
