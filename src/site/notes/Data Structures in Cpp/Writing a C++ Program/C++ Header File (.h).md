---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/writing-a-c-program/c-header-file-h/","dgPassFrontmatter":true}
---

---
A header file (.h) defines the interface to the class, which includes:

- Declaration of **all** member values.
- Declaration of **all** member functions.

`cpp-class/Cube.h`
```c++
#pragma once            // << Compile once

class Cube {            // << Class name
	public:
		double getVolume();              // << Public variable
		double getSurfaceArea();
		void setLength(double length);   // << Public method
		
	private:
		double length_;                  // << Private variable
};
```

The `#pragma once` line is always present on **.h** files and tells the compiler to compiles this file once regardless of how many programs user the header.

The `class Cube` line tells the compiler to create a new class called **Cube**, with both `public` and `private` methods and variables.