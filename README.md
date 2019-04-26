# Data Structures For Newbies

Goal of this repository is to provide materials for learning about data structures for computer science students (and all, who are interested in). Repository constains data structures implementations, which are commonly required on computer science classes. There is also included executable documentation (unit tests), which shows you behaviour of data structures and makes sure, that everything works as you expected.

## How to use this repository

In folder [code/](./code/) there are implementations of data structures. If you want to know, how data structure works inside, you should look there.

In folder [tests/](./tests/) there are unit tests of implemented data structures. You can learn from them, how data structure should work from higher level point of view. If you aren't familiar with unit tests, you can learn some basics from [introduction to Catch2](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#writing-tests) test framework (which I use in that project).

## What is important in this project

Important:
- readability - you want to learn from this code how data structures works, so you will spend most of time (if not all) with reading provided implementations. Variable and method names have to give you information about theirs purpose of existing. Comments have to explain you some harder parts of code.

Not important:
- generality - you can use this data structures only for storing integers. Goal of this code is to teach you some basic stuff, it have to be as simple as possible. If you have to store `std::string` instead of `int`, you have to manually change `int` occurences to `std::string`, but algorithms should stay unchanged.

## What is already implemented

Singly Linked List:
- [x] Initialize
- [x] Add element to front
- [x] Read first element
- [x] Remove element from front
- [x] Count elements
- [x] Read head and iterate over nodes
- [x] Find node with given content
- [x] Check if contains element
- [x] Print content to stream
- [x] Clear (remove all elements)

Doubly Linked List: *not started*

Binary search tree: *not started*

Sorted Singly Linked List: *not started*
