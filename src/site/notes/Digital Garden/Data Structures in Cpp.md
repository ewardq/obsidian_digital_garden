---
{"dg-publish":true,"permalink":"/digital-garden/data-structures-in-cpp/"}
---

---
 C++ is a **strongly typed** programming language where every variable has a type, name, value and location in memory.
 
<span class='centerImg'> ![Strongly-typed.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/Strongly-typed.png) </span>

# C++ Types

The **type** of a variable defines the contents of the variable. Every **type** es either:
- 
<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/writing-a-c-program/primitive-type/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
There are just six common primitive types in C++

- `int` stores integers
- `char` stores single characters/single byte
- `bool` stores a Boolean (true or false)
- `float` stores a floating point number
- `double` stores a double-precision floating point number
- `void` denotes the absence of a value

</div></div>

- 
<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/writing-a-c-program/user-defined-type/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
An unbounded number of user-defined types can exist, here are some common user-defined types:

- `std::string` a string (sequence of characters)
- `std::vector`a dynamically-growing array

</div></div>


# C++ Programs

Every C++ program must contain a starting point. By the C++ standard, the starting point is a function:

```c++
int main()
```

By ___convention___, the return value of main is `0` (zero) if the program was successful and non-zero on errors.

[[Data Structures in Cpp/Writing a C++ Program/C++ classes\|C++ classes]]
[[Data Structures in Cpp/Writing a C++ Program/C++ standard library (std)\|C++ standard library (std)]]


---
[[Data Structures in Cpp/Object-Oriented Data Structures in C++\|Object-Oriented Data Structures in C++]]
