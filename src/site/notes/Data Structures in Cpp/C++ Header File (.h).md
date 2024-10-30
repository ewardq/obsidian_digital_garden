---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-header-file-h/","noteIcon":"1"}
---

---
A header file (.h) defines the interface to the class, which includes:

- Declaration of **all** member values.
- Declaration of **all** member functions.

`cpp-class/Cube.h`
```c++
#pragma once            // <<--- This is always present on .h files and tells the                               // compiler to compile this file once regardless of how many                            // programs use the header.
class Cube {         // <<--- This is the class' name
	public:
		double getVolume();
		double getSurfaceArea();
		void setLength(double length);
		
	private:
		double length_;
};
```

