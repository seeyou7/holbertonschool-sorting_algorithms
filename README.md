# C - Sorting Algorithms & Big O

## Background Context
This project is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part.

## Resources
Read or watch:

- [Sorting algorithm](link-to-sorting-algorithm-resource)
- [Big O notation](link-to-big-o-notation-resource)
- [Sorting algorithms animations](link-to-sorting-algorithms-animations)
- [15 sorting algorithms in 6 minutes (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)](link-to-funny-sorting-algorithms-video)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- Understand at least four different sorting algorithms.
- Explain what the Big O notation is and how to evaluate the time complexity of an algorithm.
- Determine how to select the best sorting algorithm for a given input.
- Understand what a stable sorting algorithm is.

## Requirements
### General
- Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project, is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions should be included in your header file called `sort.h`.
- Don’t forget to push your header file.
- All your header files should be include guarded.
- A list/array does not need to be sorted if its size is less than 2.

### Supported Functions
This project includes the following functions:

- `void print_list(const listint_t *list);`
- `void print_array(const int *array, size_t size);`
- `void bubble_sort(int *array, size_t size);`
- `void insertion_sort_list(listint_t **list);`
- `void selection_sort(int *array, size_t size);`
- `void quick_sort(int *array, size_t size);`

## Authors
- [Youne SABER](https://github.com/seeyou7)
- [Idoudi Mokhatr](https://github.com/idoudi2020)

