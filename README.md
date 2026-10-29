# DSA and Competitive Programming

My solutions and practice code from college courses, TechSoc sessions and online contests. Mostly C++, with a little C and Python. I'm adding older files in batches, renaming each one after the problem it solves.

Every file starts with a short header: the problem name, a link when there is one, and the main idea.

## Layout

| Folder | What's in it |
|---|---|
| [`data-structures/`](data-structures) | linked list, stack, queue, deque, binary search tree, tree traversal |
| [`algorithms/`](algorithms) | searching and sorting |
| [`basics/`](basics) | first-year exercises: GCD, Fibonacci, digit counting |
| [`operating-systems/`](operating-systems) | CPU scheduling, page replacement, Banker's algorithm, producer-consumer |
| [`cses/`](cses) | [CSES Problem Set](https://cses.fi/problemset/), named `<task id>_<problem name>` |
| [`atcoder/`](atcoder) | AtCoder Beginner Contest problems, by contest |

Coming next: Codeforces and CodeChef contest solutions, and the C programs from my first-year lab.

## Running a solution

```bash
g++ -std=c++17 -O2 cses/introductory/1068_weird_algorithm.cpp -o sol && ./sol
```

`operating-systems/producer_consumer.cpp` uses POSIX threads and semaphores, so it needs Linux (`g++ ... -pthread`).
