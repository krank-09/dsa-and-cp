# DSA and Competitive Programming

My solutions and practice code from college courses, TechSoc sessions and online contests. Mostly C++, with a little C and Python. Older files were renamed after the problem they solve.

Every file starts with a short header: the problem name, a link when there is one, and the main idea.

## Layout

| Folder | What's in it |
|---|---|
| [`codeforces/`](codeforces) | contest problems, named `<contest><index>_<problem name>` |
| [`cses/`](cses) | [CSES Problem Set](https://cses.fi/problemset/), named `<task id>_<problem name>` |
| [`atcoder/`](atcoder) | AtCoder Beginner Contest problems, by contest |
| [`data-structures/`](data-structures) | linked list, stack, queue, deque, binary search tree, tree traversal |
| [`algorithms/`](algorithms) | searching and sorting |
| [`operating-systems/`](operating-systems) | CPU scheduling, page replacement, Banker's algorithm, producer-consumer |
| [`oop-cpp/`](oop-cpp) | inheritance, virtual functions, operator overloading, constructors |
| [`basics/`](basics) | small C++ exercises |
| [`c-lab/`](c-lab) | first-year C lab programs |
| [`learning-notes/`](learning-notes) | my notes from TechSoc's C and C++ classes, mostly commented-out snippets per topic |

## Running a solution

```bash
g++ -std=c++17 -O2 cses/introductory/1068_weird_algorithm.cpp -o sol && ./sol
```

`operating-systems/producer_consumer.cpp` uses POSIX threads and semaphores, so it needs Linux (`g++ ... -pthread`).
