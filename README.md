# CISC2200 Spring 2024 Lab3

In this lab assignment, we practice **working with dynamic array**, **working with class template**,
and **understanding testcases**.

## Download starter code

From your terminal (mac or WSL/Ubunto) window, you can use the following command to download it:
```
git clone https://github.com/CISC2200-Spring2024/lab3.git
```

## Programming Environment Setup
If you haven't done so already, please set up programming environment our our own computer, by following [Setup Tutorial](https://eecs280staff.github.io/tutorials/). 

- The _Commannd Line Tools_ are required. 

- The _C++ Dev Environment_ (VSCode) is highly recommened.

**Please follow these tutorials closely and carefully.**

## Requirements:

Please implement the following member functions in the **AList.h**. 

1. Implement  **addFirst** member function 
2. Implement **getFirst()** member function
3. Implement **removeFirst()**  member function
4. Implement the copy constructor, note that you need to perform deep-copy
5. Implement the assignment operator. Note that you need to resize the array as needed, and perform deep-copy
   
## Hints

The **main.cpp** provided in this repository uses **doctests.h** framework to write testcases for the above five member functions. 

You can modify the file **main.cpp** to add more testcases. 

If you type **main.out**, all testcases are tested. 

To run a particular subcase:
```
./main.out -tc="AList" -sc="addFirst"
```

## Submission 

Submit your **AList.h** file at the following link by March 5th, Tuesday, midnight (11:59pm).

[lab3 submission link
](https://storm.cis.fordham.edu:8443/web/project/1487)

The autograder compiles and tests your programs using 
some testcases that are different from those in **main.cpp**. If your program fails some testcases, go back to review your code, and test your member functions
with different inputs.
