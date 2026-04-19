# Phase 1: Foundations

Building core language fluency in C++ and Java by implementing the same domain — an aerospace parts inventory tool — twice. Building the same thing in both languages forces the differences between them into focus: memory management, type systems, error handling, and standard library design.

## Projects

### Project 1: C++ CLI Inventory Tool
A command-line inventory manager for aerospace parts, built in modern C++ (C++17). Persists data between runs via file I/O.

**Concepts covered:**
- Classes, constructors, and member initializer lists
- RAII and smart pointers (`std::unique_ptr`)
- STL containers (`std::vector`, `std::unordered_map`)
- File I/O with `std::fstream`
- Exception handling and custom exception types
- Multi-file project structure with CMake

### Project 2: Java CLI Inventory Tool
The same inventory tool, rebuilt in Java 17. The goal is to internalize the differences between the two languages by solving the same problem in both.

**Concepts covered:**
- Classes, interfaces, and abstract classes
- The Java Collections framework
- Garbage collection vs. RAII
- Checked vs. unchecked exceptions
- File I/O with `java.nio.file`
- Maven/Gradle project structure

## Approach

Each project is built iteratively, with a commit per meaningful step. READMEs in each project folder document design decisions — why a particular data structure was chosen, what tradeoff a given pattern makes, what I learned from each iteration.

## References

- *A Tour of C++* — Bjarne Stroustrup
- learncpp.com
- *Effective Java* — Joshua Bloch
- Oracle Java tutorials

## Status

- [ ] Project 1: C++ CLI Inventory Tool — in progress
- [ ] Project 2: Java CLI Inventory Tool — not started