# C - Sorting Algorithms & Big O

## Context
This project is focused on sorting algorithms and understanding the concept of Big O notation in the C programming language. It is intended to be completed by groups of two students, with each group engaging in pair programming for at least the mandatory portion of the project.

## Resources
Read or watch:
- [Sorting Algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O Notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Sorting Algorithms Animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 Sorting Algorithms in 6 Minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (WARNING: The following video can trigger seizures/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

## Supported Functions
This project includes the following functions:
- `void print_list(const listint_t *list);`
- `void print_array(const int *array, size_t size);`
- `void bubble_sort(int *array, size_t size);`
- `void insertion_sort_list(listint_t **list);`
- `void selection_sort(int *array, size_t size);`
- `void quick_sort(int *array, size_t size);`

### Authors

- [Younes SABER](https://github.com/seeyou7)
- [Idoudi Mokhtar](https://github.com/idoudi2020)

