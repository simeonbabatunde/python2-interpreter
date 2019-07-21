# Python2-interpreter
This repository contains the implementation of an interpreter written for python 2.7.x using flex (scanner) and bison (parser). The interpreter was written in C/C++ and is capable of interpreting the following Python 2 language constructs:
- Interger, float and string data types
- String concatination, indexing and slicing
- Print and variable assignment operations
- Arithmetic operations
- Relational Operations 
- Python functions, scope resolution and return value propagation
- If/else statements
- Actual and formal parameters
- Pass by value parameter transmission
- Recursion.

An Abstract Syntak Tree (AST) was designed and implemented to represent and interprete Python 2.7.x code. Regression was carried out using a test harness written in python to compare the output of this interpreter with that of Python 2.7.x. Feel free to modify and use this interpreter.

### Directory Structure
===========
The directory structure is based on the different milestones/phases of the project:
- Milsetone 1: mccabe_complexity_computation
- Milestone 2: abstract_syntax_tree_implementation
- Milestone 3: ast_functions_scope_return
- Milestone 4: final_python_interpreter

Future work
===========
Update the AST to translate other python language constructs like default parameters, boolean operators, logical and bitwise operators etc.



