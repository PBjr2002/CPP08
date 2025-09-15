# CPP08

## Project Overview

This project focus on **STL containers**, **iterators**, and **algorithms**. The exercises demonstrate practical implementations of C++ templates and standard library usage.

The CPP08 consists of three exercises that progressively introduce concepts of:
- Template programming
- STL containers and algorithms
- Iterator design patterns
- Exception handling in templated contexts

---

### Exercise 00: Easy find

A template function that finds the first occurrence of an integer in any STL container.

**Key Features:**
- Template function accepting any container type
- Uses STL algorithms (`std::find`)
- Throws custom exception when element not found
- Works with any container that supports iterators

---

### Exercise 01: Span

A class that stores integers and calculates statistical spans.

**Key Features:**
- Fixed-size container wrapper
- `addNumber()` - Add single integer
- `fillSpan()` - Fill with random numbers
- `shortestSpan()` - Find minimum difference between elements
- `longestSpan()` - Find maximum difference between elements
- Exception handling for full containers and insufficient data

---

### Exercise 02: MutantStack

An iterable stack implementation inheriting from `std::stack`.

**Key Features:**
- Template class extending `std::stack`
- Provides iterator functionality to stack
- Maintains all stack operations (push, pop, top, etc.)
- Forward and reverse iterators
- Compatible with STL algorithms

---

## Learning Objectives

This module teaches:

1. **Template Programming**
   - Function templates
   - Class templates
   - Template specialization

2. **STL Mastery**
   - Container usage (`vector`, `stack`, `deque`)
   - Iterator patterns
   - Algorithm library (`std::find`, `std::sort`)

3. **Design Patterns**
   - Iterator pattern implementation
   - Adapter pattern (MutantStack)
   - Exception safety

4. **Performance Considerations**
   - Iterator efficiency
   - Container selection
   - Algorithm complexity

---

## Key Concepts Demonstrated

- **Generic Programming:** Writing code that works with multiple types
- **Iterator Design:** Providing uniform access to container elements  
- **STL Integration:** Leveraging existing standard library components
- **Exception Safety:** Proper error handling in templated code
- **Performance:** Efficient algorithms and data structure usage