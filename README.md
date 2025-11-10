# C Programming Learning Repository

A comprehensive collection of C programming examples and tutorials for beginners to intermediate learners. This repository contains well-organized, documented examples covering fundamental to advanced C programming concepts.

## 🎯 Why Use This Repository?

This repository is designed to be your practical companion in learning C programming:

- **📖 Structured Learning Path** - Topics are organized in a logical progression from basics to advanced concepts, making it easy to follow along without getting overwhelmed
- **💻 Hands-On Examples** - Every concept includes working code examples that you can compile, run, and modify immediately
- **📝 Well-Documented Code** - Detailed comments and explanations in every file help you understand not just the "how" but also the "why"
- **🚀 Ready to Run** - Includes a comprehensive Makefile for easy compilation and testing - no complex setup required
- **🎓 Beginner-Friendly** - Clear explanations and practical examples make complex topics like pointers and memory management accessible
- **🔄 Progressive Complexity** - Start simple and gradually build your skills with increasingly sophisticated examples
- **✅ Production-Ready Practices** - Learn industry-standard conventions, best practices, and proper code organization from the start

Whether you're a complete beginner or looking to solidify your C programming fundamentals, this repository provides a structured, practical approach to mastering C.

## 📚 Table of Contents

### [01. Basics](01_basics/)
- **hello_world.c** - Your first C program
- **comments.c** - Single-line and multi-line comments
- **basic_structure.c** - Structure of a C program with functions

### [02. Data Types](02_data_types/)
- **variables.c** - int, float, double, char, short, long
- **constants.c** - Using #define and const keyword
- **type_casting.c** - Implicit and explicit type conversion

### [03. Operators](03_operators/)
- **arithmetic.c** - +, -, *, /, %, ++, --
- **relational_logical.c** - ==, !=, <, >, &&, ||, !
- **assignment_bitwise.c** - =, +=, -=, &, |, ^, ~, <<, >>

### [04. Control Flow](04_control_flow/)
- **if_else.c** - Conditional statements and nested conditions
- **switch.c** - Multi-way branching with calculator example
- **for_loop.c** - Iteration with patterns and nested loops
- **while_loops.c** - while and do-while loops with examples
- **break_continue.c** - Loop control statements

### [05. Functions](05_functions/)
- **function_basics.c** - Declaration, definition, and calling
- **recursion.c** - Factorial, Fibonacci, sum of digits
- **pass_by_value_reference.c** - Understanding parameter passing

### [06. Arrays](06_arrays/)
- **array_basics.c** - Declaration, initialization, and operations
- **multidimensional.c** - 2D arrays and matrix operations
- **array_functions.c** - Passing arrays to functions, sorting, reversing

### [07. Pointers](07_pointers/)
- **pointer_basics.c** - Pointer declaration and dereferencing
- **pointers_arrays.c** - Relationship between pointers and arrays
- **pointer_to_pointer.c** - Multiple levels of indirection
- **dynamic_memory.c** - malloc, calloc, realloc, free

### [08. Strings](08_strings/)
- **string_basics.c** - String declaration and input/output
- **string_functions.c** - strlen, strcpy, strcat, strcmp
- **string_programs.c** - Palindrome, vowel count, word count

### [09. Structures](09_structures/)
- **structure_basics.c** - Defining and using structures
- **structure_functions.c** - Passing structures to functions
- **nested_typedef.c** - Nested structures and typedef keyword

### [10. File I/O](10_file_io/)
- **file_write.c** - Writing data to files
- **file_read.c** - Reading data from files
- **student_records.c** - Binary file operations with structures

## 🚀 Getting Started

### Prerequisites
- GCC compiler (or any C compiler)
- Make (optional, for using Makefile)
- Basic understanding of command line

### Installation

1. Clone the repository:
```bash
git clone https://github.com/Tahsin270/c_learning.git
cd c_learning
```

2. Compile all programs using Make:
```bash
make all
```

3. Run the test suite:
```bash
make test
```

## 🔨 Building and Running

### Using Make (Recommended)

```bash
# Compile all programs
make all

# Clean build files
make clean

# Run a specific program
make run-build/01_basics/hello_world

# Show help
make help
```

### Manual Compilation

```bash
# Compile a single program
gcc -Wall -Wextra -std=c11 01_basics/hello_world.c -o hello_world

# Run the compiled program
./hello_world
```

### Compile and Run in One Command

```bash
gcc 01_basics/hello_world.c -o hello_world && ./hello_world
```

## 📖 Learning Path

For beginners, we recommend following this order:

1. **Start with Basics** (01_basics)
   - Understand the structure of a C program
   - Learn about comments and basic syntax

2. **Learn Data Types** (02_data_types)
   - Understand different data types
   - Learn about variables and constants

3. **Master Operators** (03_operators)
   - Arithmetic, relational, logical operators
   - Bitwise operations

4. **Control Flow** (04_control_flow)
   - Decision making (if-else, switch)
   - Loops (for, while, do-while)

5. **Functions** (05_functions)
   - Function declaration and definition
   - Recursion concepts

6. **Arrays** (06_arrays)
   - Single and multi-dimensional arrays
   - Array operations

7. **Pointers** (07_pointers)
   - Pointer basics and operations
   - Dynamic memory allocation

8. **Strings** (08_strings)
   - String manipulation
   - String functions

9. **Structures** (09_structures)
   - User-defined data types
   - Organizing complex data

10. **File I/O** (10_file_io)
    - Reading and writing files
    - Working with binary files

## 💡 Tips for Learning

- **Read the code comments** - Each file contains detailed comments explaining the concepts
- **Modify and experiment** - Change values and see what happens
- **Practice regularly** - Try to write your own variations of the examples
- **Debug errors** - Understanding error messages is crucial
- **Start simple** - Don't skip the basics, they form the foundation

## 🔍 Features

- ✅ Well-commented code with explanations
- ✅ Organized by topic for easy navigation
- ✅ Practical examples with real-world applications
- ✅ Makefile for easy compilation
- ✅ Progressive difficulty level
- ✅ Input/output examples
- ✅ Best practices and conventions

## 🛠️ Development

### Project Structure
```
c_learning/
├── 01_basics/          # Basic C programs
├── 02_data_types/      # Data types and variables
├── 03_operators/       # All types of operators
├── 04_control_flow/    # Conditional and loop statements
├── 05_functions/       # Functions and recursion
├── 06_arrays/          # Array operations
├── 07_pointers/        # Pointers and memory
├── 08_strings/         # String manipulation
├── 09_structures/      # Structures and unions
├── 10_file_io/         # File operations
├── Makefile            # Build automation
└── README.md           # Documentation
```

## 📝 Contributing

Contributions are welcome! If you'd like to add more examples or improve existing ones:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Submit a pull request

## 📄 License

This project is open source and available for educational purposes.

## 🤝 Support

If you find this repository helpful, please give it a ⭐ star!

For questions or suggestions, please open an issue.

## 📚 Additional Resources

- [C Programming Documentation](https://en.cppreference.com/w/c)
- [Learn C - Free Interactive C Tutorial](https://www.learn-c.org/)
- [The C Programming Language (K&R Book)](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628)

---

**Happy Coding! 🚀**
